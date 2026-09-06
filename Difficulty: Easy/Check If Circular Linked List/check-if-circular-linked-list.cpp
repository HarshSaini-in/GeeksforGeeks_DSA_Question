/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

};
*/
class Solution {
  public:
    bool isCircular(Node *head) {
        Node* temp = head;
        Node* curr = head -> next;
        while(curr != temp){
            if(curr == NULL){
                return false;
            }
            curr = curr -> next;
        }
        return true;
        
    }
};