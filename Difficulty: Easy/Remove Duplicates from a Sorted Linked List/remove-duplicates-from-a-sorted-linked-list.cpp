/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head == NULL){
            return NULL;
        }
        Node* next = NULL;
        Node* prev = head;
        Node* curr = head -> next;
        while(curr != NULL){
            if(prev -> data == curr -> data){
                next = curr -> next;
                prev -> next = next;
                curr -> next == NULL;
                curr = next;
            }
            else{
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
    }
};