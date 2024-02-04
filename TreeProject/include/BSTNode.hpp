/** 
* @file BSTNode.hpp
* @description BSTNode kisminin baslik dosyasi
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef BSTNODE_HPP
#define BSTNODE_HPP  
#include <algorithm>
#include <iostream>
class BSTNode {
    public:
    int data;
    BSTNode* left;
    BSTNode* right;
    BSTNode(int value);
};
#endif