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
    ListNode* middleNode(ListNode* head) {
        // //bruteforce solution
        // int count =0;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     count++;
        //     temp=temp->next;
        // } 
        // int mid = count/2;
        // temp = head;
        // while(temp!=NULL){
        //     if(mid==0){
        //         return temp;
        //     }
        //     mid--;
        //     temp = temp->next;
        // }
        // return NULL;

        //optimal solution
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};