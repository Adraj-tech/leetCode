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
        ListNode* newHead = new ListNode(-1);
        ListNode* curr = newHead;
        ListNode* temp = head;
        int pos = 1;
        while (temp != nullptr) {
            if (pos % 2 != 0) {
                ListNode* newNode = new ListNode(temp->val);
                curr->next = newNode;
                curr = curr->next;
            }
            pos++;
            temp = temp->next;
        }
        temp = head;
        pos = 1;
        while (temp != nullptr) {
            if (pos % 2 == 0) {
                ListNode* newNode = new ListNode(temp->val);
                curr->next = newNode;
                curr = curr->next;
            }
            temp = temp->next;
            pos++;
        }
        return newHead->next;
    }
};