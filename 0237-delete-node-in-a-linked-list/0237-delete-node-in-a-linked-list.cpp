/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val=node->next->val; //copy the value of next node in node 
        node->next=node->next->next; //remove the next node as we have copied that node in the existing node
        return;
    }
};