class LRUCache {
    int capacity;
    list<pair<int, int>> queue;
    unordered_map<int, list<pair<int, int>>::iterator> HM;
public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {

        if(auto f = HM.find(key); f!=HM.end())
        {
            queue.splice(queue.begin(), queue, f->second);
            return f->second->second;
        }
        else return -1;
    }

    void put(int key, int value) {
        if(auto f = HM.find(key); f!=HM.end())
        {
            queue.splice(queue.begin(), queue, f->second);
            queue.begin()->second = value;
            return;
        }
        else
        {
            if(HM.size()==capacity)
            {
                HM.erase((--queue.end())->first);
                queue.pop_back();
            }
            queue.push_front(pair(key, value));
            HM.insert({key, queue.begin()});
        }
    }
};
