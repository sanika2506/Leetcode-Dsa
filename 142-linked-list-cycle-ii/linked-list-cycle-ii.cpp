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
    ListNode *detectCycle(ListNode *head) {
        //bruteforce solution using hashmap
        // if(head==NULL || head->next ==NULL){
        //     return NULL;
        // }
        // map<ListNode*,int> mpp;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     if(mpp.find(temp)!=mpp.end()){
        //         return temp;
        //     }
        //     mpp[temp]=1;
        //     temp = temp->next;
        // }
        // return NULL;


        //optimal solution using fast and slow pointer
        ListNode* slow = head;
        ListNode* fast = head;
        if(head==NULL || head->next ==NULL){
            return NULL;
        }
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast = fast->next->next;
            if(slow==fast){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};