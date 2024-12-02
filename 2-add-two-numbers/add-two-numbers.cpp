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
        ListNode* head3 = new ListNode(0);  // A dummy node to simplify handling of the result list
        ListNode* temp3 = head3;  // Pointer to build the new list
        int carry = 0;
        
        // Traverse both lists
        while (l1 != NULL || l2 != NULL || carry != 0) {
            int sum = carry;  // Start with carry from previous step

            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;  // Move to the next node
            }

            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;  // Move to the next node
            }

            carry = sum / 10;  // Update carry for next iteration
            temp3->next = new ListNode(sum % 10);  // Create a new node with the current sum digit
            temp3 = temp3->next;  // Move to the next node in the result list
        }

        return head3->next;  // Return the result list, skipping the dummy node
    }
};
