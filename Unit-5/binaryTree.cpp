// Binary Tree build with OOPS and Traversals Methods

#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Pre-order traversal: Root → Left → Right (Depth First Search)
void preOrder(Node* node) {
    if (node == nullptr) return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

// In-order traversal: Left → Root → Right
void inOrder(Node* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

// In-order traversal: Left → Right → Root
void postOrder(Node *node){
    if (node == nullptr) return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}

// Breadth-First Search (Level-Order Traversal)
void levelOrder(Node* node) {
    if (node == nullptr) return;

    queue<Node*> q;
    q.push(node);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();
        cout << current->data << " ";

        if (current->left != nullptr)
            q.push(current->left);
        if (current->right != nullptr)
            q.push(current->right);
    }
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Pre-order Traversal: ";
    preOrder(root);                 //  1 2 4 5 3
    cout << "\nIn-order Traversal: ";  
    inOrder(root);                  // 4 2 5 1 3
    cout << "\nPost-order Traversal: ";
    postOrder(root);                // 4 5 2 3 1
    cout << "\nLevel-order Traversal: ";
    levelOrder(root);               // 1 2 3 4 5

    return 0;
}