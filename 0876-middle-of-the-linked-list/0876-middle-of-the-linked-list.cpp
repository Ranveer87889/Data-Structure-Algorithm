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
           if(head == NULL) return head;
         int count=0;
        ListNode* temp = head;
        while(temp){
            
            count++;
            temp = temp->next;
        }
     
        int x = count/2;
        for(int i=0;i<x;i++){
            head = head->next;
        }
        return head;
    }
};