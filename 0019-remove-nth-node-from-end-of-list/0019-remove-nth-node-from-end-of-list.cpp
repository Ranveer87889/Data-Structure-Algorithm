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
        if(head==NULL) return head;
        
        int size =0;
        ListNode* temp1 = head;
        while(temp1){
            size++;
            temp1=temp1->next;
        }
        if(n==size && n>1 ) return head->next;
        ListNode* temp2 = head;
        for(int i=0;i<size-n-1;i++){
            temp2=temp2->next;
        }
        if(temp2->next){
        temp2->next = temp2->next->next;
        }
        else{
            head = NULL;
        }
        return head;
        }
};