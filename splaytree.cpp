#include "splaytree.h"

SplayTree::SplayTree(int value)
{
//    root = {value, null, nullptr, nullptr};  // has problem
   root = new node();
   root->value = value;
}

node *SplayTree::findNearest(node *headNode, int value)
{
    if(headNode->value == value) {
        return headNode;
    } else if(headNode->right == nullptr && headNode->left == nullptr) {
        if(abs(value-headNode->parent->value) > abs(value - headNode->value)) {
            return headNode;
        } else {
            return headNode->parent;
        }
    } else if(value > headNode->value && headNode->right != nullptr) {
        findNearest(headNode->right, value);
    } else if(value < headNode->value && headNode->left != nullptr) {
        findNearest(headNode->left, value);
    } else {
        //
       return headNode;
    }
}
