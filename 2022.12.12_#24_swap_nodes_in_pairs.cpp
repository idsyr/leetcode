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
    ListNode* swapPairs(ListNode* head) {
        ListNode* start = new ListNode(0,head);
        ListNode* run = start;
        while(true)
        {
            ListNode* a1 = run;
            ListNode* a2 = run->next;
            if(a2==nullptr) return start->next;
            ListNode* a3 = run->next->next;
            if(a3==nullptr) return start->next;
            ListNode* a4 = run->next->next->next;
            a1->next = a3;
            a3->next = a2;
            a2->next = a4;
            if(a4 == nullptr) return start->next;
            run = run->next->next;
        }
        

    }
};