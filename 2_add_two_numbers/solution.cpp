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
    ListNode* addTwoNumbers(ListNode* a, ListNode* b) {
        
        ListNode beforeRes(0, nullptr);
        ListNode *resLast = &beforeRes;
        int carry = 0;
        while(a!=nullptr || b!=nullptr || carry!=0)
        {
            int sum = carry;
            if(a!= nullptr)
            {
                sum+= a->val;
                a = a->next;
            }
            if(b!= nullptr)
            {
                sum+= b->val;
                b = b->next;
            }
            resLast->next = new ListNode(sum%10);
            resLast = resLast->next;
            carry = sum/10;
        }
        
        return beforeRes.next;
    }
};
