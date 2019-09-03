//
// Created by Maksim Ekin Eren on 2019-03-13.
//

#ifndef BST_LIST_H
#define BST_LIST_H

#include "Node.h"

template <typename T>
class List {

public:
    /*
     * Constructor
     */
    List();

    /*
     * Add tree
     */
    void add(T tree);

    /*
     * get tree
     */
    T get(int index);

    /*
     * Traverse to index Linked List
     */
    Node<T> * traverse(int index);

    /*
     * Update Index
     */
    void update(int index, T tree);

    /*
     * remove a tree at index
     */
    void remove(int index);

    /*
     * remove a tree from end
     */
    void removeEnd();

    /*
     * remove a tree from beginning
     */
    void removeStart();

private:
    Node<T> * tail;
    Node<T> * head;
    int size;

};

#include "List.cpp"

#endif //BST_LIST_H
