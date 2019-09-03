//
// Created by Maksim Ekin Eren on 2019-03-12.
//

#ifndef BST_BST_H
#define BST_BST_H

#include "BSTNode.h"

template <typename T>
class BST {
    public:

    /*
     * Binary Search Tree Constructor
     */
    BST();

    /*
     * Insert new data
     */
    void insert(T i);

    /*
     * Remove element
     */
    void remove(T i);

    /*
     * Search element
     */
    bool search(T i);

    /*
     * Pre-Order traversal
     */
    void preOrder_traversal();

    /*
     * In-Order traversal
     */
    void inOrder_traversal();

    /*
     * Post-Order Traversal
     */
    void postOrder_traversal();


private:
    BSTNode<T> * root;

};

#include "BST.cpp"
#endif //BST_BST_H
