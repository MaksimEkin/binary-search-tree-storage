//
// Created by Maksim Ekin Eren on 2019-03-13.
//

#ifndef BST_NODE_H
#define BST_NODE_H

#include "BST.h"

template <typename T>
class Node {

public:
    /*
     * Constructor
     */
    Node(T tree) : tree(tree) {
        m_next = nullptr;
    }

public:
    T tree;
    Node<T> * m_next;
};

#endif //BST_NODE_H
