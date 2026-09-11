/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* Solve(Node* &first , Node* &second){
        Node* prev = first;
        Node* curr = prev -> next;
        Node* temp = second;
        Node* next = NULL;
        while(temp != NULL && curr != NULL){
            next = temp -> next;
            if(temp -> data >= prev -> data && temp -> data <= curr -> data){
                prev -> next = temp;
                temp -> next = curr;
                prev = temp;
                temp = next;
            }
            else{
                prev = curr;
                curr = curr -> next;
            }
        }
        if(curr == NULL){
            prev -> next = temp;
        }
        return first;
    }
    
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        Node* head = NULL;
        if(head1 -> data < head2 -> data){
           head = Solve(head1 , head2);
        }
        else{
           head = Solve(head2 , head1);
        }
        return head;
        
    }
};