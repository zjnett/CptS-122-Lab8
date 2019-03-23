#pragma once

#include "CptS-122-Lab8.h"

using std::string;

class BSTNode {
public:
    // Default Constructor
    BSTNode() : data(""), left(nullptr), right(nullptr) {}
    // Specific Value Constructor
    BSTNode(string _data) : data(_data), left(nullptr), right(nullptr) {}
    // Value Constructor
    BSTNode(string _data, BSTNode *_left, BSTNode *_right) : data(_data), left(_left), right(_right) {}
    // Copy Constructor
    BSTNode(const BSTNode &old) : data(old.data), left(old.left), right(old.right) {}
    // Default Destructor
    ~BSTNode() {}

    string getData(void);
    BSTNode *getLeft(void);
    BSTNode *getRight(void);

    void setData(string newData);
    void setLeft(BSTNode *newLeft);
    void setRight(BSTNode *newRight);


private:
    string data;
    BSTNode *left;
    BSTNode *right;
};

std::ostream & operator<< (std::ostream &lhs, BSTNode &rhs);