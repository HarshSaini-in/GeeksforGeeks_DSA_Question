/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x == 1){
            Node* temp = head;
            head = head -> next;
        }
        else{
            Node* prev = NULL;
            Node* curr = head;
            int cnt = 1;
            while(cnt < x){
                cnt++;
                prev = curr;
                curr = curr -> next;
            }
            prev -> next = curr -> next;
            curr -> next = NULL;
        }
        return head;
    }
};