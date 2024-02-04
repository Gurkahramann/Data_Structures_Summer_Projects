/** 
* @file BSTNode.cpp
* @description BSTManager kisminin dugum ve constructor kismi.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "BSTNode.hpp"
BSTNode::BSTNode(int value)
{
    this->data=value;
    this->left=nullptr;
    this->right=nullptr;
}
