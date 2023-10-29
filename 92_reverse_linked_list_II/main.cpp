#include <iostream>
#include <vector>

using namespace std;
 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(right-left==0) return head;
        ListNode* run = head;
        vector<ListNode*> dict(right-left+1);
        for(int i = 2; i<left; ++i){
            run = run->next;
        }
        ListNode* start = run; 
        run = run->next;
        for(int i = right-left; i>=0; --i){
            dict[i] = run;
            run = run->next;
        }
        ListNode* end = run;

        for(int i = 0; i < right-left; ++i){
            start->next = dict[i];
            start = start->next;
        }
        if(start!=nullptr)start->next = end;
        return head;
    }
};

int main(){
  ListNode *a1 = new ListNode(1);
  ListNode *a2 = new ListNode(2);
  ListNode *a3 = new ListNode(3);
  ListNode *a4 = new ListNode(4);
  ListNode *a5 = new ListNode(5);
  a1->next = a2;
  a2->next = a3;
  a3->next = a4;
  a4->next = a5;

  Solution *s = new Solution();
  s->reverseBetween(a1, 2, 4);
}
