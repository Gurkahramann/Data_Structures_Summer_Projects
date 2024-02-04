/** 
* @file LinkedListManager.hpp
* @description Tum satirlardaki listeleri kontrol eden ve onlarla ilgili islem yapılmasını saglayan fonksiyonlar ve basliklari
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef LINKEDLISTMANAGER_HPP
#define LINKEDLISTMANAGER_HPP

#include "LinkedList.hpp"
#include "ListHeadNode.hpp"

class LinkedListManager {
public:
    LinkedListManager();
    ~LinkedListManager();
    void addListToEnd(LinkedList* list);
    LinkedList* getList(int index);
    void printAllLists();
    void setListToNull(int index);
    double calculateSumOfPositionAverages();
    ListHeadNode* head;
private:
    
};

#endif
