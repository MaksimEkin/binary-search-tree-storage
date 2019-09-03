//
// Created by Maksim Ekin Eren on 2019-03-12.
//
#ifndef BST_BST_CPP
#define BST_BST_CPP

#include "BST.h"


// Constructor
template <typename T>
BST<T>::BST() {
    root = nullptr;
}

// Insert new element
template <typename T>
void BST<T>::insert(T i) {
    // if it is the first element (root)
    if(!root) {
        root = new BSTNode<T>(i, nullptr);
    }
    // if it is not the first element
    else {
        root->insert(i);
    }
}

// remove data
template<typename T>
void BST<T>::remove(T i) {
    // if it is the first element (root)
    if(!root) {
        return;
    }
        // if it is not the first element
    else {
        root->remove(i);
    }
}

// search element
template<typename T>
bool BST<T>::search(T i) {
// if it is the first element (root)
    if(!root) {
        return false;
    }
        // if it is not the first element
    else {
        return root->search(i);
    }
}

// pre-order traversel
template<typename T>
void BST<T>::preOrder_traversal() {
    root->preOrder_traversal();
}

// in order traversal
template<typename T>
void BST<T>::inOrder_traversal() {
    root->inOrder_traversal();
}

// post-order traversal
template<typename T>
void BST<T>::postOrder_traversal() {
    root->postOrder_traversal();
}

#endif