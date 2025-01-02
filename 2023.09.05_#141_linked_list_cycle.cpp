/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==nullptr) return false;
        ListNode* one = head;
        ListNode* two = head;
        while(true){
            if(one->next==nullptr) return false;
            one = one->next;
            if(two->next==nullptr) return false;
            two = two->next;
            if(two->next==nullptr) return false;
            two = two->next;
            if(two==one) return true;
        }
        return false;
    }
};
