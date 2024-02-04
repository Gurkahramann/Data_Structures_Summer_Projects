/** 
* @file BSTManager.hpp
* @description Hem Ikili Arama agacini hem de Stack yapisini yoneten sinifin baslik dosyasi.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef BSTMANAGER_HPP
#define BSTMANAGER_HPP
#include "Stack.hpp"
#include "BST.hpp"
#include <iostream>
struct Node {
    Node* next;
    Stack stack;
    BST bst;
};
class BSTManager {
    Node* head;
    Node* tail;
public:
    BSTManager();
    int max_height;
    int max_sum;
    BST* max_tree;
    ~BSTManager();
    void addNode();
    Stack* getCurrentStack();
    BST* getCurrentBST();
    void transferStacksToBSTs();
    BST* getMaxTree();
};

#endif 
