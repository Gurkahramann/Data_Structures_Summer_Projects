/** 
* @file StackNode.hpp
* @description Stack yapisinin dugum kisminin baslik dosyasi.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef STACKNODE_HPP
#define STACKNODE_HPP
class  StackNode {
    public:
        int data;
        StackNode* next;
        StackNode();
};
#endif