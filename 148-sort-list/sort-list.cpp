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
    ListNode* sortList(ListNode* head) {
        vector<int> result;
        ListNode* temp = head;
        
       
        while (temp != NULL) {
            result.push_back(temp->val);
            temp = temp->next;
        }
        
       
        sort(result.begin(), result.end());
        
        
        if (result.empty()) {
            return NULL;  
        }
        
        head = new ListNode(result[0]);  
        temp = head;
        
        
        int x = result.size();
        for (int i = 1; i < x; i++) {
            ListNode* nt = new ListNode(result[i]);
            temp->next = nt;
            temp = temp->next;
        }
        
        return head;
    }
};
