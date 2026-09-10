/*
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
    bool isPalindrome(Node *head) {
     vector<int> ans;
     Node* temp = head;
     while(temp != NULL){
         int a = temp -> data;
         ans.push_back(a);
         temp = temp -> next;
     }
     int n = ans.size();
     int i = 0;
     int j = n-1;
     while(i < j){
         if(ans[i++] != ans[j--]){
            return false;
         }
     }
     return true;
        
    }
};