#include <cstdlib>
#include "BST.h"
#include "List.h"

int main() {
    // we write this first because we're awesome
    BST<int> tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(7);
    tree.insert(2);
    tree.insert(4);
    tree.insert(6);
    tree.insert(8);

    cout << "Pre-Order Traveral: ";
    tree.preOrder_traversal();
    cout << endl;

    BST<int> tree_2;
    tree_2.insert(5);
    tree_2.insert(3);
    tree_2.insert(7);
    tree_2.insert(2);
    tree_2.insert(4);
    tree_2.insert(6);
    tree_2.insert(8);

    cout << "In-Order Traversal: ";
    tree_2.inOrder_traversal();
    cout << endl;

    BST<int> tree_3;
    tree_3.insert(5);
    tree_3.insert(3);
    tree_3.insert(7);
    tree_3.insert(2);
    tree_3.insert(4);
    tree_3.insert(6);
    tree_3.insert(8);

    cout << "Post-Order Traversal: ";
    tree_3.postOrder_traversal();
    cout << endl;

    // add trees into list
    List<BST<int>> tree_list;

    tree_list.add(tree);
    tree_list.add(tree_2);
    tree_list.add(tree_3);

    // pre order from list
    cout << "Pre-Order Traversal for Tree from List: ";
    tree_list.get(0).preOrder_traversal();



}