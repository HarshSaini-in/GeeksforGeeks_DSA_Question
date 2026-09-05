/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node* temp = head;
        int cnt = 1;
        while(temp -> next != NULL){
            temp = temp -> next;
            cnt++;
        }
        // if(cnt % 2 != 0){
        //     cnt++;
        // }
        Node* temp1 = head;
        int n = 1;
        while(n <= cnt/2){
            n++;
            temp1 = temp1 -> next;
        }
        return temp1 -> data;
        
    }
};