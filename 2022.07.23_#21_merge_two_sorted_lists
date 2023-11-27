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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode answer(0, nullptr);
        ListNode* run = &answer;
        while(list1 != nullptr || list2 != nullptr)
        {
            if(list1==nullptr)
            {
                while(list2!=nullptr)
                {
                    run->next = new ListNode(list2->val);
                    list2 = list2->next;
                    run = run->next;
                }
                break;
            }
            if(list2==nullptr)
            {
                while(list1!=nullptr)
                {
                    run->next = new ListNode(list1->val);
                    list1 = list1->next;
                    run = run->next;
                }
                break;
            }
            if(list1->val >= list2->val)
            {
                run->next = new ListNode(list2->val);
                list2 = list2->next;
                run = run->next;
            }
            else
            {
                run->next = new ListNode(list1->val);
                list1 = list1->next;
                run = run->next;
            }
        }
        return answer.next;
    }
};