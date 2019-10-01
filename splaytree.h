#ifndef SPLAYTREE_H
#define SPLAYTREE_H

struct node {
    int value;
    node *left;
    node *right;
    node *parent;
};


class SplayTree
{
public:
    SplayTree(int value);
    node *root;
    void insert(int value);
    void splay(node *rootTree, int value);
    node* findNearest(node *headNode, int value);
};

#endif // SPLAYTREE_H
