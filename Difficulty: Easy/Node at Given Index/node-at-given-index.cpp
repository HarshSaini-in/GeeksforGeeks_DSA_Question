/* Node Structure
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
    int getNode(Node* head, int k) {
        Node* temp = head;
        int cnt = 1;
        while(cnt < k && temp != NULL){
            temp = temp -> next;
            cnt++;
        }
        if(temp == NULL){
            return -1;
        }
        return temp -> data;
        
    }
};