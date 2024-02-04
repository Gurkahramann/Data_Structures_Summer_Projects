/** 
* @file LinkedList.hpp
* @description Node yapisini ve LinkedListi olusturan yapının basliklari
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP
struct Node {
    int data;
    Node* next;
};
class LinkedList {
public:
    Node* head;
    LinkedList();
    ~LinkedList();
    void printList();
    void addNodeToEnd(int data);
    Node* getNodeAtPosition(int index);
};
#endif