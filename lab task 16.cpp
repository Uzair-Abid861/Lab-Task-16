#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

int main() {
    Node* root = new Node{10, nullptr, nullptr};

    root->left = new Node{20, nullptr, nullptr};
    root->right = new Node{30, nullptr, nullptr};

    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data;

    delete root->left;
    delete root->right;
    delete root;

    return 0;
}