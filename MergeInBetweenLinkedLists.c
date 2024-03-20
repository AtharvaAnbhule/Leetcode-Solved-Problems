/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* mergeInBetween(struct ListNode* list1, int a, int b, struct ListNode* list2){
    // int n,m;
    // while(list1->next != NULL){
    //     n++;
    // }
    // while(list2->next !=NULL){
    //     m++;
    // }

    struct ListNode *locA=NULL,*locB=NULL,*tail,*temp,*dummy,*save;

    dummy=(struct ListNode *)malloc(sizeof(struct ListNode));

    dummy->next=list1;
    temp=list2;

    while(temp->next !=NULL){
        //go till the last node of the list2
        temp=temp->next;
    }

    tail=temp;
    temp=list1;
    int i=0;
    while(temp->next!=NULL){
         if(i==a-1 && locA==NULL){
            locA=temp;
         }
         if(i==b && locB==NULL){
            locB=temp;
         }
         i++;
         temp=temp->next;
    }
    if(locB==NULL){
        locB=temp;
    }
    locA->next=list2;
    tail->next=locB->next;

    return dummy->next;

    

}
