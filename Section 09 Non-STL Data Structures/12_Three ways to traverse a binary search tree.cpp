#include <iostream>
//Three different ways to traverse and display a binary search tree -- 
//  in-order, pre-order and post-order
using namespace std;

class Node {
    public:
       string data;
       Node *left;
       Node *right;
       Node(string d) {
           data = d;
           left = NULL;
           right = NULL;
       }
};

class BST {
    private:
       Node *root;
       void Insert(string data, Node *aNode);
       Node *Search(string data, Node *aNode);\
    //The three methods declared here...
       void preOrder(Node *aNode);
       void inOrder(Node *aNode);
       void postOrder(Node *aNode);
    public:
       BST();
       void Insert(string data);
       Node *Search(string data);
    //  ...and here
       void preOrder();
       void inOrder();
       void postOrder();
};

BST::BST() {
    root = NULL;
}

void BST::Insert(string data, Node *aNode) {
    if (data < aNode->data) {
        if (aNode->left != NULL)
           Insert(data, aNode->left);
        else {
            aNode->left = new Node(data);
            aNode->left->left = NULL;
            aNode->left->right = NULL;
        }
    }
    else if (data >= aNode->data) {
        if (aNode->right != NULL) {
            Insert(data, aNode->right);
        }
        else {
            aNode->right = new Node(data);
            aNode->right->left = NULL;
            aNode->right->right = NULL;
        }
    }
}

Node* BST::Search(string data, Node *aNode) {
    if (aNode != NULL) {
        if (data == aNode->data) {
            return aNode;
        }
        if (data < aNode->data) {
            return Search(data, aNode->left);
        }
        else {
            return Search(data, aNode->right);
        }
    }
    else {
        return NULL;
    }
}

void BST::Insert(string data) {
    if (root != NULL) {
        Insert(data, root);
    }
    else {
        root = new Node(data);
        root->left = NULL;
        root->right = NULL;
    }
}

Node* BST::Search(string data) {
    return Search(data, root);
}

void BST::inOrder() {
    inOrder(root);
}
//In alphabetical order, even though the data isn't provided in alpha-order
void BST::inOrder(Node *aNode) {
    if (aNode != NULL) {
//Traverses the tree on the left then the right side
        inOrder(aNode->left);
        cout << aNode->data << " ";
        inOrder(aNode->right);
    }
}

void BST::preOrder() {
//preOrder traverses starting with the root...
    preOrder(root);
}

void BST::preOrder(Node *aNode) {
    if (aNode != NULL) {
        cout << aNode->data << " ";
//  ...then traverses down the left side, then the right side
        preOrder(aNode->left);
        preOrder(aNode->right);
    }
}

void BST::postOrder() {
    postOrder(root);
}
//postOrder traverses the left side, then the right, then to the root
void BST::postOrder(Node *aNode) {
    if (aNode != NULL) {
        postOrder(aNode->left);
        postOrder(aNode->right);
        cout << aNode->data << " ";
    }
}

int main()
{
    BST *btree = new BST;
    btree->Insert("Mike");
    btree->Insert("David");
    btree->Insert("Cynthia");
    btree->Insert("Raymond");
    btree->Insert("Terrill");
    btree->Insert("Brian");
    btree->Insert("Jennifer");
    btree->Insert("Clayton");
    btree->Insert("Beata");
    btree->Insert("Danny");
    btree->inOrder();
    cout << endl << "Preorder: " << endl;
    btree->preOrder();
    cout << endl << "Postorder: " << endl;
    btree->postOrder();
    return 0;
}
