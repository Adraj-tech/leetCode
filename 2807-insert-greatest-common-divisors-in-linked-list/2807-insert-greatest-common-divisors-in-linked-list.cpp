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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if (head->next == NULL)
            return head;
        ListNode *front = head->next, *prev = head;
        while (front != NULL) {
            int ans = gcd(front->val, prev->val);
            ListNode* newNode = new ListNode(ans);
            prev->next = newNode;
            newNode->next = front;
            prev = front;
            front = front->next;
        }
        return head;
    }
};