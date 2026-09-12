/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    void Delete(Node* &head){
        Node* temp = head;
        while(temp -> data == 0){
            head = head -> next;
            temp -> next = NULL;
            temp = head;
        }
    }
    void insertAtTail(Node* &head , Node* &tail , int val){
        Node* temp = new Node(val);
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail -> next = temp;
            tail = temp;
        }
    }
    Node* add(Node* first , Node* second){
        Node* AnsHead = NULL;
        Node* AnsTail = NULL;
        int carry = 0;
        int sum = 0;
        while(first != NULL && second != NULL){
            sum = first -> data + second -> data + carry;
            int digit = sum % 10;
            carry = sum / 10;
            insertAtTail(AnsHead , AnsTail , digit);
            first = first -> next;
            second = second -> next;
        }
        while(first != NULL){
            int a = first -> data + carry;
            int digit = a%10;
            insertAtTail(AnsHead , AnsTail , digit);
            first = first -> next;
            carry = a/10;
        }
        while(second != NULL){
            int a = second -> data + carry;
            int digit = a%10;
            insertAtTail(AnsHead , AnsTail , digit);
            second = second -> next;
            carry = a/10;
        } 
        while(carry != 0){
            int a = carry;
            int digit = a%10;
            insertAtTail(AnsHead , AnsTail , digit);
            carry = a/10;
        }           
        
        return AnsHead;
    }
    Node* Reverse(Node* head){
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    Node* addTwoLists(Node* head1, Node* head2) {
        
        // step 1 :- reverse linked list 
        Node* temp1 = Reverse(head1);
        Node* temp2 = Reverse(head2);
        
        // step 2 :- add number 
        Node* ans = add(temp1 , temp2);
        
        // step 3:- reverse ans
        ans = Reverse(ans);
        if(ans -> next != NULL){
            Delete(ans);
        }
        
        
        return ans;
        
        
    }
};