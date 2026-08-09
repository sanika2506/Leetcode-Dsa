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
    ListNode* deleteMiddle(ListNode* head) {
        // //bruteforce solution
        // if(head==NULL || head->next==NULL){
        //     return NULL;
        // }
        // ListNode* temp  = head;
        // int count = 0;
        // while(temp!=NULL){
        //     count++;
        //     temp = temp->next;
        // }
        // int mid = count/2;
        // temp = head;
        // while(temp!=NULL){
        //     mid--;
        //     if(mid==0){
        //         ListNode* middle = temp->next;
        //         temp->next=temp->next->next;
        //         delete middle;
        //         break;
        //     }
        //     temp=temp->next;
        // }
        // return head;

        //optimal solution using torroise and hair approach
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        ListNode* slow = head;
        ListNode* fast = head->next->next;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
    }
};