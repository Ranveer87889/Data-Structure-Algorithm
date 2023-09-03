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
    
     ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL){
            return head;
        }
        ListNode* temp = head->next;
        head->next=NULL;
        ListNode* newhead= reverseList(temp);
        temp->next=head;
        return newhead;

    }
    bool isPalindrome(ListNode* head) {
        ListNode* mid = middleNode(head);
        ListNode* t = reverseList(mid);
        ListNode* h = head;
        while (h && t){
            if(h->val != t->val) return false;
            h=h->next;
            t=t->next;
        }
        return true;
    }
};