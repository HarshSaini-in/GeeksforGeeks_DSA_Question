/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = random = nullptr;
    }
};*/

class Solution {
  public:
    void insert(Node* &head , Node* &tail , int data){
        Node* temp = new Node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    Node* cloneLinkedList(Node* head) {
        Node* temp = head;
        Node* head1 = NULL;
        Node* tail1 = NULL;
        
        // step 1: 
        while(temp != NULL){
            int val = temp -> data;
            insert(head1 , tail1 , val);
            temp = temp -> next;
        }
        temp = head;
        Node* t = head1;
        // step 2:
        map<Node* , Node*> mapping;
        while(temp != NULL){
            mapping[temp] = t;
            temp = temp -> next;
            t = t -> next;
        }
        temp = head;
        t = head1;
        
        while(temp != NULL){
            t -> random = mapping[temp->random];
            t = t -> next;
            temp = temp -> next;
        }
        
        
        

        return head1;
        
    }
};