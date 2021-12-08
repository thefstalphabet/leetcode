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
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head==NULL) return head;
        
        ListNode* previous = NULL;
        ListNode* current = head;
        
        while(current!=NULL){
            // when we find a node that have value same as val
            if(current->val == val){
                // if current is null
                if(previous==NULL){
                    head = current->next;
                }
                // if current is not null
                else{
                    previous->next = current->next;
                }
            }
            // when we can not find a node that have value same as val
            else{
                previous = current;
            }
            current = current->next;
        }
        
        return head;
    }
};