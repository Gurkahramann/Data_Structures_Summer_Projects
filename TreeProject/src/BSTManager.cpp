/** 
* @file BSTManager.cpp
* @description Hem Ikili Arama agacini hem de Stack yapisini yonetir.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "BSTManager.hpp"
BSTManager::BSTManager()
{
    this->head=NULL;
    this->tail=NULL;
    this->max_height=-1;
    this->max_sum=-1;
    this->max_tree=NULL;
}
BSTManager::~BSTManager() {
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
void BSTManager::addNode() {
    Node* node = new Node;
    node->next = NULL;
    if (head == NULL) {
        head = node;
        tail = node;
    } else {
        tail->next = node;
        tail = node;
    }
}
Stack* BSTManager::getCurrentStack() {
    return &(tail->stack);
}
BST* BSTManager::getCurrentBST() {
    return &(tail->bst);
}

void BSTManager::transferStacksToBSTs() {
    Node* node = head;
    while (node != NULL) {
        while (!node->stack.isEmpty()) {
            node->bst.insert(node->stack.pop());
        }
        node = node->next;
    }
}
BST* BSTManager::getMaxTree() {
    Node* node = head;
    while (node != NULL) {
        int height = node->bst.getHeight();
        int sum = node->bst.getSum();

        if (height > max_height || (height == max_height && sum > max_sum)) {
            max_height = height;
            max_sum = sum;
            max_tree = &(node->bst);
        }

        node = node->next;
    }

    return max_tree;
}