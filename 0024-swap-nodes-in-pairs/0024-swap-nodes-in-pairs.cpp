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

        if (head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* ans = head->next;
        ListNode* prev = head;
        ListNode* curr = head->next;

        while (curr != NULL) {
            ListNode* temp = curr->next;
            prev->next = temp;
            curr->next = prev;
            if (temp == NULL || temp->next == NULL) {
                break;
            }
            prev->next = temp->next;
            prev = temp;
            curr = temp->next;
        }
        return ans;
    }
};