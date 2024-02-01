/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
     unordered_map<Node*, Node*> clone;//made a clone

    Node* copyRandomList(Node* head) {
        if(!head) return NULL;
        if(clone.find(head) != clone.end()) return clone[head]; // till no end go traversing
        Node* newCurr = new Node(head->val);
        clone[head] = newCurr; //new curr
        newCurr->random = copyRandomList(head->random);
        newCurr->next = copyRandomList(head->next);
        return clone[head];
    }
};
