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
    //ListNode* converttoLL(vector<int> &arr){
    //     if(arr.empty()){
    //         return NULL;
    //     }
    //     ListNode* head =new ListNode(arr[0]);
    //     ListNode* temp = head;
    //     for(int i =1;i<arr.size();i++){
    //         ListNode* newNode = new ListNode(arr[i]);
    //         temp -> next =  newNode;
    //         temp = newNode;
    //     }
    //     return head;
    // }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    //BRUTEFORCE SOLUTION 
    //     vector<int>arr;
    //     ListNode* temp1 = list1;
    //     ListNode* temp2 = list2;
    //     while(temp1!=NULL){
    //         arr.push_back(temp1->val);
    //         temp1 = temp1->next;
    //     }
    //     while(temp2 != NULL){
    //         arr.push_back(temp2->val);
    //         temp2 = temp2 -> next;
    //     }
    //     sort(arr.begin(),arr.end());
    //     ListNode* head = converttoLL(arr);
    //     return head;

    //OPTIMAL SOLUTION using two pointer appraoch

    ListNode* t1 = list1;
    ListNode* t2 = list2;
    ListNode* dummyNode = new ListNode(-1);
    ListNode* temp = dummyNode;
    while(t1!=NULL && t2!=NULL){
        if(t1->val > t2->val){
            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }else{
            temp->next = t1;
            temp = t1;
            t1 = t1->next;
        }
    }
    if(t1!=NULL){
        temp->next=t1;
    }else{
        temp->next=t2;
    }
    return dummyNode->next;
    }
};