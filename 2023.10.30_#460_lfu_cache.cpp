class LFUCache {
    int capacity;
    map<int, list<pair<int, pair<int, int>>>> queue; //priority, priority, key, value
    unordered_map<int, list<pair<int, pair<int, int>>>::iterator> HM; //key, priority, key, value
public:
    LFUCache(int capacity) {
        this->capacity = capacity;
        list<pair<int, pair<int, int>>>* temp = new list<pair<int, pair<int, int>>>();
        queue.emplace(make_pair(1, move(*temp)));
    }

    int get(int key) {
        if(capacity==0)return -1;
        if(auto f = HM.find(key); f!=HM.end())
        {
            if(queue.find(f->second->first+1)==queue.end())
            {
                list<pair<int, pair<int, int>>>* temp = new list<pair<int, pair<int, int>>>();
                queue.emplace(make_pair(f->second->first+1, move(*temp)));
            }
            queue[f->second->first+1].splice(queue[f->second->first+1].begin(), queue[f->second->first], f->second);
            f->second->first+=1;
            return f->second->second.second;
        }
        else return -1;
    }

    void put(int key, int value) {
        if(capacity==0)return;
        if(auto f = HM.find(key); f!=HM.end())
        {
            if(queue.find(f->second->first+1)==queue.end())
            {
                list<pair<int, pair<int, int>>>* temp = new list<pair<int, pair<int, int>>>();
                queue.emplace(make_pair(f->second->first+1, *temp));
            }
            queue[f->second->first+1].splice(queue[f->second->first+1].begin(), queue[f->second->first], f->second);
            f->second->first+=1;
            f->second->second.second = value;
            return;
        }
        else
        {
            if(HM.size()==capacity)
            {
                int i;
                for(i = 0; queue.find(i)==queue.end() || queue.find(i)->second.size()==0;i++){}
                HM.erase((--queue[i].end())->second.first);
                queue[i].pop_back();
            }
            queue[1].push_front(pair(1, pair(key, value)));
            HM.insert({key, queue[1].begin()});
        }
    }
};
