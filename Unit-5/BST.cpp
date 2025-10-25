// Binary Search Tree Creation And Traversal
#include <iostream>
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

// BST insert function
Node* insert(Node* root, int val) {
    if (root == nullptr) return new Node(val);

    if (val < root->data)
        root->left = insert(root->left, val);
    else if (val > root->data)
        root->right = insert(root->right, val);

    return root;
}

// InOrder Traversal to check the BST
void inOrder(Node* node) {
    if (node == nullptr) return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

// Search a Node in BST
bool search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return search(root->left, key);
    else
        return search(root->right, key);
}

// Delete a Node in BST
Node* deleteNode(Node* root, int key) {
    if (root == nullptr) return nullptr;

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {
        // Node found
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        }
        else if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        else {
            // Node with two children: find inorder successor
            // InOrder Successor = leftmost node in right subtree
            Node* successor = root->right;
            while (successor->left != nullptr)
                successor = successor->left;

            root->data = successor->data;
            root->right = deleteNode(root->right, successor->data);
        }
    }
    return root;
}

int main() {
    Node* root = nullptr;

    // Manual BST creation using insert()
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    inOrder(root);      // 20 30 40 50 60 70 80
    cout << endl;

    deleteNode(root, 50);
    inOrder(root);      // 20 30 40 60 70 80
    
    return 0;
}