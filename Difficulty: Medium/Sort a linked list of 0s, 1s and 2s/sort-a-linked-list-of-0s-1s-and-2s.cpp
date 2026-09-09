/* Node is defined as
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
    Node* segregate(Node* head) {
        int Zero_cnt = 0;
        int One_cnt = 0;
        int Two_cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            if(temp -> data == 0){
                Zero_cnt++;
            }
            else if(temp -> data == 1){
                One_cnt++;
            }
            else{
                Two_cnt++;
            }
            temp = temp -> next;
        }
        temp = head;
    
        while(Zero_cnt){
            temp -> data = 0;
            Zero_cnt--;
            temp = temp -> next;
        }
        while(One_cnt){
            temp -> data = 1;
            One_cnt--;
            temp = temp -> next;
        }    
        while(Two_cnt){
            temp -> data = 2;
            Two_cnt--;
            temp = temp -> next;
        }    
        return head;
    }
};