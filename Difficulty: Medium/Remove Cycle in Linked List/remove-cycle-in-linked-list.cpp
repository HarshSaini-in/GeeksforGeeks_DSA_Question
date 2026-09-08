/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:

    Node* InterSection_Node(Node* head){
        if(head == NULL){
            return NULL;
        }
        Node* fast = head ;
        Node* slow = head ;
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
        Node* Intersection = InterSection_Node(head);
        if(Intersection == NULL){
            return NULL;
        }
        Node* temp = head;
        while(temp != NULL){ 
            if(temp == Intersection){
                return temp;
            }
            temp = temp -> next;
            Intersection = Intersection -> next;

        }
        return NULL;
    }
    void removeLoop(Node* head) {
        if(head == NULL){
            return;
        }
        Node* start = Starting_Node(head);
        if(start == NULL){
            return;
        }
        Node* temp = start;
        while(temp -> next != start){
            temp = temp -> next;
        }
        temp -> next = NULL;
    }
};