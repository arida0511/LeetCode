/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
    if(!head) return NULL;
    struct ListNode* ptr=head;
    
    while(ptr->next!=NULL){
        if(ptr->val != ptr->next->val)
            ptr = ptr->next;
        else
            ptr->next = ptr->next->next;
    }
    return head;
}