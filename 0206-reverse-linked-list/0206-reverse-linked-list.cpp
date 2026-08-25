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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
    return head;
}
        ListNode* prev = head;
        head = head->next;
        prev->next = NULL;
        while(head->next != NULL){
            ListNode* ptr = prev;
            prev = head;
            head = head->next;
            prev->next = ptr;
        }
        head->next = prev;
        return head;
    }
};