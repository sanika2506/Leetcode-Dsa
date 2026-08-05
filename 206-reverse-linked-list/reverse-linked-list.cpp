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
    ListNode* reverse(ListNode* &head){
        if(head==NULL || head->next == NULL){
            return head;
        }
        ListNode* newHead = reverse(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newHead;
    }
    ListNode* reverseList(ListNode* head) {
        // //bruteforce solution
        // stack<int>st;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp = temp->next;
        // }
        // temp = head;
        // while(temp!=NULL){
        //     temp->val = st.top();
        //     st.pop();
        //     temp = temp->next;
        // }
        // return head;

        //recursive approach
        return reverse(head);

        // //optimal solution for the doubly linked list not for singly linked list
        // ListNode* current = head;
        // ListNode* last = NULL;
        // while(current!=NULL){
        //     last = current->back;
        //     current->back = current->next;
        //     current->next=last;
        //     current=current->next;
        // }
        // return last->back;
    }
};