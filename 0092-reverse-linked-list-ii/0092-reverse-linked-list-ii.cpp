class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (left == right)
            return head;
        ListNode *l = head, *r = head;
        ListNode* beforeLeft = nullptr;
        for (int i = 0; i < right - left; i++) {
            r = r->next;
        }
        for (int i = 1; i < left; i++) {
            beforeLeft = l;
            l = l->next;
            r = r->next;
        }
        ListNode* afterRight = r->next;
        ListNode* prev = nullptr;
        ListNode* curr = l;
        while (curr != afterRight) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        if (beforeLeft != nullptr)
            beforeLeft->next = prev;
        else
            head = prev;
        l->next = afterRight;
        return head;
    }
};