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

// Function to print binary tree recursively
void printTreeRecursive(Node* root, int level = 0) {
    // Base case: if the current node is NULL, return
    if (root == NULL)
        return;

    // Print the right subtree
    printTreeRecursive(root->right, level + 1);

    // Print the current node
    for (int i = 0; i < level; ++i)
        cout << "  ";
    cout << root->data << endl;

    // Print the left subtree
    printTreeRecursive(root->left, level + 1);
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

    // Display the binary tree
    cout << "Binary Tree:" << endl;
    printTreeRecursive(root);

    return 0;
}
