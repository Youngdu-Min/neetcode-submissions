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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int idx = 0, length = 0;
        while(curr != nullptr)
        {
            curr = curr->next;
            idx++;
        }
        length = idx;
        idx = 0;
        curr = head;

        if(n == length)
            {
                head = head->next;
                return head;
            }
            
        
        while(curr != nullptr)
        {
            curr = idx + 1 == length - n ? curr->next = curr->next->next : curr->next;
            idx++;
        }

        return head;
    }
};
