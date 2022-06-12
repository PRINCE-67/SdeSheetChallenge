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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        ListNode *head = list2;
        ListNode *temp = head;

        if (list1 == NULL)  return list2;
        if (list2 == NULL)  return list1;

        if (list1->val < list2->val) {
            head = p1;
            p1 = p1->next;
        }
        else {
            head = p2;
            p2 = p2->next;
        }

        temp = head;

        while (p1 != NULL && p2 != NULL) {
            if (p1->val < p2->val) {
                temp->next = p1;
                p1 = p1->next;
            }
            else {
                temp->next = p2;
                p2 = p2->next;
            }
            temp = temp->next;
        }
        while (p1 == NULL && p2 != NULL) {
            temp->next = p2;
            p2 = p2->next;
            temp = temp->next;
        }

        while (p2 == NULL && p1 != NULL) {
            temp->next = p1;
            p1 = p1->next;
            temp = temp->next;
        }

        return head;
    }
};