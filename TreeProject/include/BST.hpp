/** 
* @file BST.hpp
* @description Hem Ikili Arama agacini hem de Stack yapisini yoneten fonksiyonun baslik dosyasi.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef BST_HPP
#define BST_HPP
#include "BSTNode.hpp"
class BST {
private:
    BSTNode* root;
    BSTNode* insert(int value, BSTNode* node);
    int height(BSTNode* node);
    int sum(BSTNode* node);
    void printPostorder(BSTNode* node) const;
public:
    BST();
    ~BST();
    void insert(int value);
    int getHeight();
    int getSum();
    void printPostorder() const;
    void destroyTree(BSTNode* node);
    void convertAscii(int data) const;
};

#endif 
