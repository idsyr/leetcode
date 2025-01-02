/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr) return head;
        if(head->next==nullptr) return head;
        ListNode* previos = head;
        ListNode* run = head->next;
        while(run->next!=nullptr){
            if(run->val==previos->val){
                run = run->next;
                //delete previos->next;
                previos->next=run;
            }
            else {
                previos = run;
                run = run->next;
            }
        }
        if(run->val==previos->val){
                previos->next=nullptr;
                //delete run;
            }
        return head;
    }
};
