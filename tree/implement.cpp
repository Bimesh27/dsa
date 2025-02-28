#include<iostream>
using namespace std;

struct Node {
   int data;
   Node *left;
   Node *right;

   Node(int val) : data(val), left(nullptr), right(nullptr){}
};

Node *insert(Node *root, int val) {
   if(root == nullptr) {
      return new Node(val);
   }

   if(val < root->data) {
      root->left = insert(root->left, val);
   } else {
      root->right = insert(root->right, val);
   }

   return root;   
}

//printallNodes(Just like treverse)
void inorder(Node *root) {
   if(root == nullptr) return;

   inorder(root->left);
   cout << root->data << " "; 
   inorder(root->right);
}

//search value
Node *search(Node *root, int val) {
   if(root == nullptr || root->data == val) return root;
   if(val < root->data) {
      return search(root->left, val);
   } else {
      return search(root->right, val);
   }
}

//count the No of Nodes
int countNodes(Node *root) {
   if(root == nullptr) {
      return 0;
   }

   return 1 + countNodes(root->left) + countNodes(root->right);
}

int main(){
   Node *root = nullptr;
   root = insert(root, 3);
   root = insert(root, 1);
   root = insert(root, 2);
   root = insert(root, 4);
   root = insert(root, 5);

   inorder(root);

   // int val = 4;
   // Node* found = search(root, val);
   // cout << "Search " << val << ": " << (found ? "Found" : "Not Found") << endl;

   cout << "No of root is " <<countNodes(root) << endl;
   return 0;

}