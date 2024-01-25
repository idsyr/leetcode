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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* start = new ListNode(0);
        ListNode* run = start;
        ListNode* temp;
        vector<ListNode*> m;
        m.push_back(start);

        for(ListNode* list : lists)
        {
            if(list==nullptr) continue;
            while(true)
            {
                if(run->next==nullptr || run->next->val>=list->val)
                {
                    temp = run->next;
                    run->next = new ListNode(list->val, temp);
                    list = list->next;
                    run = start;
                    if(list==nullptr) break;
                }
                run = run->next;
            }
        }
        return start->next;
    }
};