//
// Created by Maksim Ekin Eren on 2019-03-13.
//

#ifndef BST_LIST_CPP
#define BST_LIST_CPP

#include "List.h"
#include <stdexcept>

// constructor
template <typename T>
List<T>::List(){
    head = nullptr;
    tail = nullptr;
    size = 0;
}

// add node
template<typename T>
void List<T>::add(T tree) {
    Node<T> * current = new Node<T>(tree);

    // if the list is empty
    if(head == nullptr) {
        head = current;
        tail = current;
    }
    else {
        Node<T> * temp = tail;
        tail = current;
        temp->m_next = tail;
    }

    size++;
}

// get tree at index
template<typename T>
T List<T>::get(int index) {
    Node<T> * current = traverse(index);
    return current->tree;
}

// traverse to index
template<typename T>
Node<T> *List<T>::traverse(int index) {

    // if invalid index
    if (index < 0 || index > size) {
        throw std::out_of_range("Invalid Index");
    }

    // starting node
    Node<T> * current = head;
    int i = 0;

    // go to the index
    while (i < index && current != nullptr) {
        current = current->m_next;
        i++;
    }

    return current;
}

// update element in the tree
template<typename T>
void List<T>::update(int index, T tree) {
    Node<T> * current = traverse(index);
    current->tree = tree;
}

// remove a tree
template<typename T>
void List<T>::remove(int index) {
    // if invalid index
    if (index < 0 || index > size) {
        throw std::out_of_range("Invalid Index");
    }

    Node<T> * previous = traverse(index);
    Node<T> * current = traverse(index - 1);

    previous->m_next = current->m_next;
    delete current;
    size--;
}

// remove tree from the end
template<typename T>
void List<T>::removeEnd() {
    if(size < 1) {
        throw std::out_of_range("Empty Tree");
    }

    Node<T> * previous = traverse(size);
    Node<T> * current = traverse(size - 1);

    tail = previous;
    tail->m_next = nullptr;
    delete current;

}

// remove from the beginning
template<typename T>
void List<T>::removeStart() {
    Node<T> * temp = head;
    head = head -> m_next;
    delete temp;
}

#endif