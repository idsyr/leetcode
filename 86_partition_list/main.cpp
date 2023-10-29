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
    void add(ListNode* head, ListNode* node){
        node->next=nullptr;
        ListNode* list = head->next;
        ListNode* pre = head;
        while(list!=nullptr){
            if(list->val >= node->val){
                node->next = list;
                pre->next = node;
                return;
            }
            pre = list;
            list = list->next;
        }
        pre->next = node;
    }
    ListNode* partition(ListNode* head, int x) {
        ListNode* hdef = new ListNode(); hdef->next = head; 
        ListNode* hdop = new ListNode();

        ListNode* rundef = head;
        ListNode* predef = hdef;
        ListNode* rundop = hdop;

        while(rundef!=nullptr){
            if(rundef->val<x){
                //ListNode* temp = rundef;
                rundop->next = rundef; rundop = rundop->next;
                rundef=rundef->next;
                predef->next = rundef;
                //add(hdop, temp);
            }else{
                predef = rundef;
                rundef=rundef->next;
            }
        }
        //rundop = hdop;
        //while(rundop->next!=nullptr) rundop = rundop->next;

        rundop->next = hdef->next;
        ListNode* ans = hdop->next;
        delete hdef; delete hdop;
        return ans;
    }
};

int main(){
  Solution* s = new Solution();
  ListNode* a1 = new ListNode(2);
  ListNode* a2 = new ListNode(5,a1);
  ListNode* a3 = new ListNode(2,a2);
  ListNode* a4 = new ListNode(3,a3);
  ListNode* a5 = new ListNode(4,a4);
  ListNode* a6 = new ListNode(1,a5);
  ListNode* part = s->partition(a6, 3);
}


































