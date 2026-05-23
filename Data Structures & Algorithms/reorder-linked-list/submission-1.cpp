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
    void reorderList(ListNode* head) {
        vector<int> values = {};
        ListNode* curr = head;
        while(curr != nullptr)
        {
            values.push_back(curr->val);
            cout << values[values.size() - 1] << endl;
            curr = curr->next;
        }

        curr = head;
        bool toggle;
        int idx = 0;
        while(curr != nullptr)
        {
            curr->val = toggle ? values[values.size() - idx] : values[idx];
            toggle = !toggle;
            if(toggle)
                ++idx;
            curr = curr->next;
        }
    }
};
