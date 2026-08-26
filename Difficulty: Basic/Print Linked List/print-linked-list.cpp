/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *head) {
        Node* temp = head;
        vector<int> ans;
        while(temp -> next != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }
        ans.push_back(temp -> data);
        return ans;
        
    }
};