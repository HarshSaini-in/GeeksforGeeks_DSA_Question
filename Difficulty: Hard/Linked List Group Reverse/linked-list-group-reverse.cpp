/* Structure of linked list Node
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
     Node *reverseKGroup(Node *head, int k) {
        if(head == NULL){
            return NULL;
        }
        Node* forward = NULL; 
        Node* prev = NULL;
        Node* curr = head;
        

        int n = 0;
        while(curr != NULL && n < k){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
            n++;
        }
        if(forward != NULL){
            head -> next  = reverseKGroup(forward , k);
        }
        
        return prev;
    }
};