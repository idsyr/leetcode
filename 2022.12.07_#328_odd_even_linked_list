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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr || head->next==nullptr) return head;
        ListNode* r1 = head;
        ListNode* r2 = head->next;
        ListNode* r2s = head->next;
        while(true){
            if(r1->next->next!=nullptr)
            {
                r1->next = r1->next->next;
                r1 = r1->next;
            }
            else
            {
                r1->next = r2s;
                r2->next = nullptr;
                return head;
            }
            if(r2->next->next!=nullptr)
            {
                r2->next = r2->next->next;
                r2 = r2->next;
            }
            else
            {
                r1->next = r2s;
                r2->next = nullptr;
                return head;
            }
        }
        r1->next = r2s;
        r2->next = nullptr;
        return head;
    }
};