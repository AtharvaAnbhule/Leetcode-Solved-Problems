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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//          vector<int> first;
//         while(l1 != NULL) {
//             first.push_back(l1->val);
//         }
//          vector<int> second;
//         while(l2 != NULL) {
//             second.push_back(l2->val);
//         }
         
//         string ans1;
//         string ans2;

//         for( int i =0;i<first.size() ;i++) { 
//               ans1.push_back(first[i]);
//         }
//         for( int i =0;i<second.size() ;i++) { 
//               ans2.push_back(second[i]);
//         }

//         int final =stoi(ans1) + stoi(ans2);
        
//         ListNode *a = new ListNode(final);

// while (final > 0)
// {
//     int digit = final%10;
//     a->val = digit;
//     a=a->next;

//     final /= 10;
//     //print digit
// }

// return a;


        

      
  ListNode* dummyHead = new ListNode(0);
  ListNode *tail = dummyHead;
  int carry =0 ; 
  while(l1 != nullptr || l2!= nullptr || carry!=0) { 
    int digit1 = (l1 != nullptr) ? l1->val : 0 ; 
    int digit2 = (l2 != nullptr) ? l2->val : 0 ; 

    int sum = digit1+ digit2 + carry;
    int digit = sum%10;
    carry=sum/10;
   
   ListNode* newnode = new ListNode(digit);
    tail->next = newnode;
    tail=tail->next;

    l1=(l1 !=nullptr) ? l1->next : 0 ;  
    l2=(l2 !=nullptr) ? l2->next : 0 ;  
  }

  ListNode * result = dummyHead -> next;
  delete dummyHead;
  return result;
       
    }
};
