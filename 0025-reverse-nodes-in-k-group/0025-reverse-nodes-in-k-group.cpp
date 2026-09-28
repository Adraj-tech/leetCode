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
    ListNode* reverseKGroup(ListNode* head, int k) {
        stack<int> st;
        ListNode* p = head;
        ListNode* temp = head;
        int count = 0;
        if (head == NULL || k == 1) {
            return head;
        }
        while (p != NULL) {
            st.push(p->val);
            p = p->next;
            count++;
            if (count == k) {
                for (int i = 1; i <= k; i++) {
                    temp->val = st.top();
                    temp = temp->next;
                    st.pop();
                }
                count = 0;
            }
        }
        while (!st.empty()) {
            st.pop();
        }
        return head;
    }
};