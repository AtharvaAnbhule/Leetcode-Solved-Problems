/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL || head->next == NULL) return head;

    struct ListNode* prev=head;
    struct ListNode* curr=prev->next;
    head->next=NULL;

    while(prev !=NULL && curr !=NULL){
         // Initialize next pointer as the next pointer of curr...
        struct ListNode* next = curr->next;
        // Now assign the prev pointer to curr’s next pointer.
        curr->next = prev;
        // Assign curr to prev, next to curr...
        prev = curr;
        
        curr = next;
    }
    return prev;


}
