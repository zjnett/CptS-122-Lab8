#include "BST.h"

BSTNode * BST::getRoot(void) {
    return root;
}

void BST::setRoot(BSTNode *newRoot) {
    root = newRoot;
}

void BST::insert(string newData) {
    insertNode(this->root, newData);
}

void BST::insertNode(BSTNode *node, string newData) {
    if(node == nullptr) {
        //tree/current node is empty
        this->root = new BSTNode(newData);
    } else {
        if (newData < node->getData()) { // go left
            if (node->getLeft() != nullptr) {
                insertNode(node->getLeft(), newData);
            } else {
                BSTNode *temp = new BSTNode(newData);
                node->setLeft(temp);
            }
        } else if (newData > node->getData()) { // go right
            if (node->getRight() != nullptr) {
                insertNode(node->getRight(), newData);
            } else {
                BSTNode *temp = new BSTNode(newData);
                node->setRight(temp);
            }
        } else { // duplicate value
            std::cout << "Duplicate: " << newData << std::endl;
        }
    }
}

void BST::inOrderTraversal() {
    inOrderTraversal(this->root);
    std::cout << std::endl;
}

void BST::inOrderTraversal(BSTNode *node) {
    if (node != nullptr) {
        inOrderTraversal(node->getLeft());
        std::cout << node->getData() << " ";
        inOrderTraversal(node->getRight());
    }
}

void BST::preOrderTraversal() {
    preOrderTraversal(this->root);
    std::cout << std::endl;
}

void BST::preOrderTraversal(BSTNode *node) {
    if (node != nullptr) {
        std::cout << node->getData() << " ";
        preOrderTraversal(node->getLeft());
        preOrderTraversal(node->getRight());
    }
}

void BST::postOrderTraversal() {
    postOrderTraversal(this->root);
    std::cout << std::endl;
}

void BST::postOrderTraversal(BSTNode *node) {
    if (node != nullptr) {
        postOrderTraversal(node->getLeft());
        postOrderTraversal(node->getRight());
        std::cout << node->getData() << " ";
    }
}

bool BST::isEmpty() {
    return isEmpty(this->root);
}

bool BST::isEmpty(BSTNode *node) {
    if (node == nullptr) {
        return true;
    }
    return false;
}

void BST::destroyTree(BSTNode *node) {
    if (node != nullptr) {
        destroyTree(node->getLeft());
        destroyTree(node->getRight());
        delete node;
    }
}