/** 
* @file BST.cpp
* @description Ikili Arama Agacinin yapisini tutar.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "BST.hpp"
#include <algorithm>
#include <iostream>
BST::BST() {
    this->root = nullptr;
}
BSTNode* BST::insert(int value, BSTNode* node) {
    if (node == nullptr) {
        node = new BSTNode(value);
        node->data = value;
        node->left = nullptr;
        node->right = nullptr;
    } else if (value < node->data) {
        node->left = insert(value, node->left);
    } else if (value > node->data) {
        node->right = insert(value, node->right);
    }
    return node;
}
void BST::insert(int value) {
    root = insert(value, root);
}
int BST::height(BSTNode* node) {
    if (node == nullptr) {
        return -1;
    }
    return 1 + std::max(height(node->left), height(node->right));
}
int BST::getHeight() {
    return height(root);
}
int BST::sum(BSTNode* node) {
    if (node == nullptr) {
        return 0;
    }
    return node->data + sum(node->left) + sum(node->right);
}
int BST::getSum() {
    return sum(root);
}
void BST::printPostorder() const {
    printPostorder(root);
    std::cout << std::endl;
}
void BST::printPostorder(BSTNode* node) const {
    if (node == nullptr) {
        return;
    }
    printPostorder(node->left);
    printPostorder(node->right);
    convertAscii(node->data);
}
BST::~BST() {
    destroyTree(root);
}
void BST::convertAscii(int data) const
{
    char asciiChar = static_cast<char>(data);
    std::cout << asciiChar << ' ';
}
void BST::destroyTree(BSTNode* node)  {
    if (node == nullptr) return;
    destroyTree(node->left);
    destroyTree(node->right);
    delete node;
}
