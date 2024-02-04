/** 
* @file ListHeadNode.hpp
* @description Liste basini tutan classin basliklarinin tutuldugu yer
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef LISTHEADNODE_HPP
#define LISTHEADNODE_HPP
#include "LinkedList.hpp"
class ListHeadNode {
public:
    LinkedList* list;
    ListHeadNode* next;
    ListHeadNode();
   
};
#endif
