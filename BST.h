#pragma once

#include "CptS-122-Lab8.h"
#include "BSTNode.h"

class BST {
public:
    // Default Constructor
    BST() : root(nullptr) {}
    // Value Constructor 
    BST(BSTNode *_root) : root(_root) {}
    // Copy Constructor
    BST(BST &old) : root(old.root) {}
    // Default Destructor
    ~BST() { destroyTree(this->root); }

    BSTNode *getRoot(void);

    void setRoot(BSTNode *newRoot);

    void insert(string newData);

    void insertNode(BSTNode *node, string newData);

    void inOrderTraversal();

    void inOrderTraversal(BSTNode *node);

    void preOrderTraversal();

    void preOrderTraversal(BSTNode *node);

    void postOrderTraversal();

    void postOrderTraversal(BSTNode *node);

    bool isEmpty();

    bool isEmpty(BSTNode *node);

private:
    BSTNode *root;

    void destroyTree(BSTNode *node);
};