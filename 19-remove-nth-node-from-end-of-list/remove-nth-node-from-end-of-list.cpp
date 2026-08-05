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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // //bruteforce solution
        // int cnt =0;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     temp = temp->next;
        //     cnt++;
        // }
        // if(cnt==n){
        //     ListNode* newHead = head->next;
        //     delete head;
        //     return newHead;
        // }
        // int res = cnt-n;
        // temp = head;
        // while(temp!=NULL){
        //     res--;
        //     if(res==0){
        //         break;
        //     }
        //     temp = temp->next;
        // }
        // ListNode* delNode = temp;
        // temp->next = temp->next->next;
        // return head;

        //optimal solution
        ListNode* fast = head;
        for(int i=0;i<n;i++){
            fast = fast->next;
        }
        if(fast==NULL){
            return head->next;
        }
        ListNode* slow = head;
        while(fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;
        delete delNode;
        return head;
    }
};