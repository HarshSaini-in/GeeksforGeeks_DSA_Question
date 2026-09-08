/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    Node* intersection(Node* head){
        if(head == NULL){
            return NULL;
        }
        Node* fast = head;
        Node* slow = head; 
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
            if(slow == fast){
                return slow;
            }
        }
        return NULL;
    }
    Node* Starting_Node(Node* head){
        if(head == NULL){
            return NULL;
        }
        Node* temp = intersection(head);
        if(temp == NULL){
            return NULL;
        }
        Node* slow = head;
        while(slow != temp){
            slow = slow -> next;
            temp = temp -> next;
        }
        return slow;
    }
    int lengthOfLoop(Node *head) {
        if(head == NULL){
            return 0;
        }
        Node* start = Starting_Node(head);
        if(start == NULL){
            return 0;
        }
        Node* temp = start;
        int cnt = 1;
        while(temp -> next != start){
            cnt++;
            temp = temp -> next;
        }
        return cnt;
    }
};