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
    ListNode* middleNode(ListNode* head) {
        ListNode* run = head;
        int i = 0;
        for(; run != nullptr; i++)
            run=run->next;
        run = head;
        for(int k = 0; k<i/2; k++)
            run = run->next;
        return run;
    }
};