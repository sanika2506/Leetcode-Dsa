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
    ListNode* findkNode(ListNode* temp,int k){
        k-=1;
        while(temp!=NULL && k>0){
            k--;
            temp = temp->next;
        }
        return temp;
    }
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevNode = NULL;
        while(temp!=NULL){
            ListNode* kNode = findkNode(temp,k);
            if(kNode==NULL){
                if(prevNode!=NULL){
                    prevNode->next=temp;
                }
                break;
            }
            ListNode* nextNode=kNode->next;
            kNode->next = NULL;
            reverse(temp);
            if(temp==head){
                head = kNode;
            }else{
                prevNode->next = kNode;
            }
            prevNode = temp;
            temp = nextNode;
        }
        return head;
    }
};