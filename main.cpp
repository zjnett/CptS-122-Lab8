#include "CptS-122-Lab8.h"
#include "BST.h"
#include "nameSort.h"

using std::cout;
using std::endl;

int main (void) {
    BST tree;
    // root:
    tree.insert("d");
    // subsequent children:
    tree.insert("c"); 
    tree.insert("a");
    tree.insert("b");
    tree.insert("e");
    tree.insert("g");
    tree.insert("f");
    tree.insert("h");
    tree.insert("i");
    cout << "In Order Traversal:" << endl;
    tree.inOrderTraversal();
    cout << "Pre Order Traversal:" << endl;
    tree.preOrderTraversal();
    cout << "Post Order Traversal:" << endl;
    tree.postOrderTraversal();
    nameSort app;
    //app.runApp();

    return 0;
}