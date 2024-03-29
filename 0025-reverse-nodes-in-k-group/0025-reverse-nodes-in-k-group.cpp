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
    ListNode* reverseKGroup(ListNode* head, int k) {
      int count =0;
         ListNode* curr =head;
        while(count<k && curr){
            count++;
            curr = curr->next;
        }
        if(count<k) return head;
         ListNode* prev = NULL;
        count=0;
        curr = head;
         ListNode* temp;
        while(count<k){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            count++;
        }
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};