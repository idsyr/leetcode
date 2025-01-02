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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right) return head;
        ListNode* h = new ListNode(-1, head);
        ListNode* run = h; --left;right -= left; 
        while(--left>-1){
            run = run->next;
        }
        ListNode* start = run;
        run = run->next;
        ListNode* end = run;
        ListNode* pre = run;
        run = run->next;
        while(--right){
            ListNode* temp = run->next;
            run->next = pre;
            pre = run;
            run = temp;
        }
        start->next = pre;
        end->next=run;
        return h->next;

    }
};
