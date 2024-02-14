// Simple Binary tree:
//        1
//       / \
//      2   3
//     / \
//    4   5

#include <iostream>
#include <queue> // Necessary for using the queue data structure
using namespace std;

// Define the structure for a binary tree node
struct Node {
    int data; // Holds the value of the node
    struct Node* left, *right; // Pointers to the left and right child of the node
};

// Function to create a new Node with the given data and NULL left and right pointers
Node* newNode(int data) {
    Node* temp = new Node; // Allocate memory for a new Node
    temp->data = data; // Set the data of the node
    temp->left = temp->right = NULL; // Initialize left and right children as NULL
    return temp; // Return the new node
}

int main() {
    // Creating the binary tree
    Node* root = newNode(1); // Root node
    root->left = newNode(2); // Left child of root
    root->right = newNode(3); // Right child of root
    root->left->left = newNode(4); // Left child of node 2
    root->left->right = newNode(5); // Right child of node 2

    cout << "Level Order traversal of binary tree is  ";

    queue<Node*> q; // Queue to hold the nodes for level order traversal
    q.push(root); // Start with the root node
    while (!q.empty()) { // Continue until there are no more nodes to process
        Node* node = q.front(); // Access the next node in the queue
        cout << node->data << " "; // Print the data of the node
        q.pop(); // Remove the node from the queue

        // If the current node has a left child, add it to the queue
        if (node->left != NULL)
            q.push(node->left);

        // If the current node has a right child, add it to the queue
        if (node->right != NULL)
            q.push(node->right);
    }
    return 0;
}

// Output:
// Level Order traversal of binary tree is  1 2 3 4 5
