#include "BSTNode.h"

string BSTNode::getData(void) {
    return data;
}

BSTNode * BSTNode::getLeft(void) {
    return left;
}

BSTNode * BSTNode::getRight(void) {
    return right;
}

void BSTNode::setData(string newData) {
    data = newData;
}

void BSTNode::setLeft(BSTNode *newLeft) {
    left = newLeft;
}

void BSTNode::setRight(BSTNode *newRight) {
    right = newRight;
}

std::ostream & operator<< (std::ostream &lhs, BSTNode &rhs) {
    lhs << rhs.getData();
    return lhs;
}