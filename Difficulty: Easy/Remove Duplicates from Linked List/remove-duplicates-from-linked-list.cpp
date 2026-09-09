/* Structure of linked list Node
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
    Node* removeDuplicates(Node* &head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        map<int , bool> visited;
        Node* next = NULL;
        Node* prev = NULL;
        Node* curr = head;
        while(curr != NULL){
            if(visited[curr -> data] == true){
                next = curr -> next;
                prev -> next = next;
                curr -> next = NULL;
                curr = next;
            }
            else{
                visited[curr -> data] = true;
                prev = curr;
                curr = curr -> next;
            }
        }
        return head;
        
    }
};







// class Solution {
//   public:
//     Node* removeDuplicates(Node* head) {
//         Node* temp = head;
//         while(temp != NULL){
//             Node*prev = temp;
//             Node*curr = temp -> next;
//             Node*next = NULL;
//             while(curr != NULL){
//                 if(temp -> data == curr -> data){
//                     next = curr -> next;
//                     prev -> next = next;
//                     curr -> next = NULL;
//                     curr = next;
//                 }
//                 else{
//                     prev = curr;
//                     curr = curr -> next;
//                 }
//             }
//             temp = temp -> next;
//         }
//         return head;
//     }
// };