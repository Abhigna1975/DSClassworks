#include <iostream>
using namespace std;

// Define the structure for a binary tree node
struct Node {
    int data;
    struct Node* left, * right;
};

// Function to create a new node with given data
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

// Function to print binary tree recursively in preorder
void printTreePreorder(Node* root) {
    // Base case: if the current node is NULL, return
    if (root == NULL)
        return;

    // Visit the current node
    cout << root->data << " ";

    // Traverse the left subtree
    printTreePreorder(root->left);

    // Traverse the right subtree
    printTreePreorder(root->right);
}

int main() {
    // Create a sample binary tree
    Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->left->right->left = newNode(9);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->right->left = newNode(15);

    // Display the binary tree using preorder traversal
    cout << "Binary Tree (Preorder traversal):" << endl;
    printTreePreorder(root);

    return 0;
}
