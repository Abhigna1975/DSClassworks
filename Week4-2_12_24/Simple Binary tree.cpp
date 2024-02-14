//Simple Binary tree:
        1
       / \
      2   3
     / \
    4   5


#include <iostream>
#include <queue> // Necessary for using the queue data structure
using namespace std;

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

        1
       / \
      2   3
     / \
    4   5



//Then, it uses a queue to perform a level order traversal (also known as breadth-first traversal) of the tree. In level order traversal, nodes are visited level by level from left to right. The program does this by:

//Starting with the root node, it is added to the queue.
//While the queue is not empty, the node at the front of the queue is accessed, its value is printed, and then it is removed from the queue.
//If the current node has a left child, that child is added to the queue. Similarly, if the current node has a right child, that child is also added to the queue.
//This process repeats until the queue is empty, ensuring that all nodes are visited in level order.
//The output of this program is the values of the nodes in level order traversal: "1 2 3 4 5".
//Footer
