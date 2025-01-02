/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/


class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==nullptr) return nullptr;
        unordered_map<Node*, int> dict;
        Node* run = head; int i = 0;
        while(run!=nullptr){
            dict.insert({run, i});
            ++i;
            run=run->next;
        }
        vector<int> pos;
        run = head; int k = 0;
        while(run!=nullptr){
            if(run->random==nullptr){
                pos.push_back(-1);
                run = run->next;
                continue;
            }
            auto search = dict.find(run->random);
            pos.push_back(search->second);
            run = run->next;
        }
        run=head;
        vector<Node*> res;
        while(run!=nullptr){
            Node* tn = new Node(run->val);
            res.push_back(tn);
            run = run->next;
        }
	for(int i = 1, sz = res.size(); i<sz; ++i){
	  res[i-1]->next = res[i];
	}
        for(int i = 0, sz = pos.size();i<sz;++i){
            if(pos[i] == -1) {res[i]->random=nullptr; continue;}
            res[i]->random = res[pos[i]];
        }
        Node* ans = res[0];
        return ans;
        
    }
};
