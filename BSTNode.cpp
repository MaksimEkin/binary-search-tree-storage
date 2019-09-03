//
// Created by Maksim Ekin Eren on 2019-03-12.
//
#ifndef BST_BSTNODE_CPP
#define BST_BSTNODE_CPP

#include "BSTNode.h"
#include <iostream>
using namespace std;

// Node constructor
template <typename T>
BSTNode<T>::BSTNode(T data, BSTNode<T> * parent) {
    m_data = data;      // get the data
    m_parent = parent;  // assign its parent

    m_left = nullptr;
    m_right = nullptr;
}

// Insert new node
template <typename T>
void BSTNode<T>::insert(T data) {

    // if it is less than the current node (left child)
    if(data < m_data) {

        // if left child is null = if arrived the index to insert the data
        if(m_left == nullptr) {
            // create a new node at that place and tell it she is its parent
            m_left = new BSTNode(data, this);
        }
        // if right child isn't null
        else {
            // recursively call this method from left child
            m_left->insert(data);
        }
    }
    // if the data is more than current node (right child)
    else {

        // if arrived to the insert point, create new node there
        if(m_right == nullptr) {
            m_right = new BSTNode(data, this);
        }
        // if haven't arrived, recursevly call
        else {
            m_right->insert(data);
        }
    }
}

// remove data
template<typename T>
void BSTNode<T>::remove(T data) {

    // if current data is less than the data
    if(data < m_data) {

        // if we are at the end of the tree
        if (m_left == nullptr) {
            std::cout << "Data is not in the tree!" << std::endl;
            return;
        }
        else {
            m_left->remove(data);
        }
    }
    // if it is more than the current data
    else if(data > m_data) {

        // if we are at the bottom of the tree
        if(m_right == nullptr) {
            std::cout << "Data is not in the tree!" << std::endl;
            return;
        }
        else {
            m_right->remove(data);
        }
    }

    // if found
    else if(data == m_data) {

        // if right child
        if(data > this->m_parent->m_data) {
            // if it is the leaf
            if (this->m_left == nullptr && this->m_right == nullptr) {
                this->m_parent->m_right = nullptr;
            }
            // if it is not leaf and left node is empty
            else if (this->m_left == nullptr){
                this->m_parent->m_right = this->m_right;
            }
            // if it is not leaf and right node is empty
            else if (this->m_right == nullptr) {
                this->m_parent->m_right = this->m_left;
            }

            delete this;
        }
        // if left child
        else if(data < this->m_parent->m_data) {
            // if it is the leaf
            if (this->m_left == nullptr && this->m_right == nullptr) {
                this->m_parent->m_left = nullptr;
            }
                // if it is not leaf and left node is empty
            else if (this->m_left == nullptr){
                this->m_parent->m_left = this->m_right;
            }
                // if it is not leaf and right node is empty
            else if (this->m_right == nullptr) {
                this->m_parent->m_left = this->m_left;
            }

            delete this;
        }

        std::cout << "Data " << data << " deleted!" << std::endl;
    }
}

// search key in the tree
template<typename T>
bool BSTNode<T>::search(T data) {

    // if data is towards left child from current
    if (data < m_data) {
        // if we are in the end
        if (m_left == nullptr) {
            cout << "Item is not in the tree" << endl;
            return false;
        }
        else {
            return m_left->search(data);
        }
    }
    // if the data towards right child from current
    else if(data > m_data) {
        // if we are at the leaf
        if (m_right == nullptr) {
            cout << "Item is not in the tree" << endl;
            return false;
        }
        else {
            return m_right->search(data);
        }
    }
    // if the item is found
    else if (data == m_data) {
        cout << "Item found: " << m_data << endl;
        return true;
    }
}

// pre-order traversal
template<typename T>
void BSTNode<T>::preOrder_traversal() {

    cout << m_data << " ";
    if (m_left != nullptr) {
        m_left->preOrder_traversal();
    }
    if(m_right != nullptr) {
        m_right->preOrder_traversal();
    }
}

// in-order traversal
template<typename T>
void BSTNode<T>::inOrder_traversal() {

    if (m_left != nullptr) {
        m_left->inOrder_traversal();
    }
    cout << m_data << " ";

    if(m_right != nullptr) {
        m_right->inOrder_traversal();
    }
}

// post order traversal
template<typename T>
void BSTNode<T>::postOrder_traversal() {

    if (m_left != nullptr) {
        m_left->postOrder_traversal();
    }
    if(m_right != nullptr) {
        m_right->postOrder_traversal();
    }

    cout << m_data << " ";
}


#endif
