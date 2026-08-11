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
    ListNode* findKthNode(ListNode* &head,int k){
        k-=1;
        ListNode* temp =head;
        while(k>0 && temp!=NULL){
            k--;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail = head;
        int length = 1;
        if(head==NULL || head->next==NULL || k==0){
            return head;
        }
        while(tail->next!=NULL){
            length++;
            tail = tail->next;
        }
        if(k % length==0){
            return head;
        }
        k = k % length;
        tail->next = head;
        ListNode* newLastNode = findKthNode(head,length-k);
        head = newLastNode->next;
        newLastNode->next = NULL;
        return head;
    }
};