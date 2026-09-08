/* Definition of a Linked List Node
class Node
{
  public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* sortedInsert(Node* head, int key) {
        Node* newNode = new Node(key);
        if(head == NULL){
            head = newNode;
            return head;
        }
        if(head -> data > key){
            newNode -> next = head;
            head = newNode;
            return head;
        }
        Node* prev = NULL;
        Node* temp = head;
        Node* next = NULL;
        while(temp -> data < key && temp -> next != NULL){
            prev = temp;
            temp = temp -> next;
        }
        if(temp -> next == NULL && temp -> data < key){
            temp -> next = newNode;
        }
        else{
        next = prev -> next;
        prev -> next = newNode;
        newNode -> next = next;            
        }

        
        return head;
    }
};