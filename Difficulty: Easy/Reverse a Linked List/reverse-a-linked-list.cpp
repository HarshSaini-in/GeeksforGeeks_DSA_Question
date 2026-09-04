/* Structure of Linked List Node
class Node {
 public:
    int data ;
    Node *next ;

    Node(int x) {
        data = x ;
        next = nullptr ;
    }
};
*/

class Solution {
  public:
    void reverse(Node* &head , Node* &curr ,  Node* &prev){
        if(curr == NULL){
            return;
        }
        Node* forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        reverse(head , curr , prev);
    } 
     
    Node* reverseList(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        reverse(head , curr , prev);
        return prev;
        
    }
};