#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Node{
public:
  int val;
  Node* next;
  Node* random;

  Node(int val_){
    val = val_;
    next = nullptr;
    random = nullptr;

  }
};

class Solution {
public:
    Node* copyRandomList(Node* head) {
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

int main(){
  Node* a1 = new Node(7);
  Node* a2 = new Node(13);
  Node* a3 = new Node(11);
  Node* a4 = new Node(10);
  Node* a5 = new Node(1);
  
  a1->next = a2;
  a2->next = a3;
  a3->next = a4;
  a4->next = a5;
  a5->next = nullptr;

  a1->random = nullptr;
  a2->random = a1;
  a3->random = a5;
  a4->random = a3;
  a5->random = a1;

  Solution *s = new Solution();
  s->copyRandomList(a1);
  
  
  
} 
