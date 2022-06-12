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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummy = new ListNode();
        ListNode *temp = dummy;
        int s = 0, carry = 0;

        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        while (l1 != NULL || l2 != NULL) {
            s = 0;
            if (l1 == NULL && l2 != NULL)
            {
                s = l2->val + carry;
                l2 = l2->next;
            }
            if (l2 == NULL && l1 != NULL) {
                s = l1->val + carry;
                l1 = l1->next;
            }
            if (l1 != NULL && l2 != NULL) {
                s = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            }
            carry = (s / 10);
            ListNode *node = new ListNode(s % 10);
            temp->next = node;
            temp = temp->next;
        }
        if (carry > 0) {
            ListNode *node = new ListNode(carry);
            temp->next = node;
            temp = temp->next;
        }
        return dummy->next;
    }
};