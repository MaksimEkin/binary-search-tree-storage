//
// Created by Maksim Ekin Eren on 2019-03-12.
//

#ifndef BST_BSTNODE_H
#define BST_BSTNODE_H

template <typename T>
class BSTNode {
public:
    /*
     * BSTNode Constructor
     * @param int data, key held by that node
     * @param BSTNode * m_parent, pointer to parent
     */
    BSTNode(T data, BSTNode * parent);

    /*
     * Insert new data
     */
    void insert(T data);


    /*
     * Delete data
     */
    void remove(T data);


    /*
     * Search data
     */
    bool search(T data);


    /*
     * Pre-Order Traversal
     */
    void preOrder_traversal();


    /*
     * In-Order Traversal
     */
    void inOrder_traversal();


    /*
     * Post-order traversal
     */
    void postOrder_traversal();

private:
    T m_data;
    BSTNode<T> * m_left;
    BSTNode<T> * m_right;
    BSTNode<T> * m_parent;

};

#include "BSTNode.cpp"
#endif //BST_BSTNODE_H
