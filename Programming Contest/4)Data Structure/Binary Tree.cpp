#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

class BinaryTree {
private:
    Node* root;

    void insertNode(Node* &node, int val) {
        if (!node) {
            node = new Node(val);
            return;
        }

        if (val < node->data)
            insertNode(node->left, val);
        else
            insertNode(node->right, val);
    }

    void inorderTraversal(Node* node) {
        if (node) {
            inorderTraversal(node->left);
            cout << node->data << " ";
            inorderTraversal(node->right);
        }
    }

    void preorderTraversal(Node* node) {
        if (node) {
            cout << node->data << " ";
            preorderTraversal(node->left);
            preorderTraversal(node->right);
        }
    }

    void postorderTraversal(Node* node) {
        if (node) {
            postorderTraversal(node->left);
            postorderTraversal(node->right);
            cout << node->data << " ";
        }
    }

public:
    BinaryTree() : root(nullptr) {}

    void insert(int val) {
        insertNode(root, val);
    }

    void inorder() {
        inorderTraversal(root);
        cout << endl;
    }

    void preorder() {
        preorderTraversal(root);
        cout << endl;
    }

    void postorder() {
        postorderTraversal(root);
        cout << endl;
    }
};

int main() {
    BinaryTree tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(1);
    tree.insert(4);

    cout << "Inorder traversal: ";
    tree.inorder(); // Output: 1 3 4 5 7

    cout << "Preorder traversal: ";
    tree.preorder(); // Output: 5 3 1 4 7

    cout << "Postorder traversal: ";
    tree.postorder(); // Output: 1 4 3 7 5

    return 0;
}