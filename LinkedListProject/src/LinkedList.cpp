/** 
* @file LinkedList.cpp
* @description Bagli Liste yapisinin olusturuldugu yer
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "LinkedList.hpp"
#include <iostream>
LinkedList::LinkedList()
{
    head=nullptr;
}
LinkedList::~LinkedList() {
    while(head != nullptr) {
        Node* nextNode = head->next;
        delete head;
        head = nextNode;
    }
}
void LinkedList::addNodeToEnd(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if(head == nullptr) {
        head = newNode;
    }
    else {
        Node* current = head;
        while(current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}
void LinkedList::printList() {
    Node* temp = head;
    while(temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;
}
Node* LinkedList::getNodeAtPosition(int position) {
    Node* current = head;
    int count = 0;

    while (current != nullptr) {
        if (count == position) {
            return current;
        }
        current = current->next;
        count++;
    }
    return nullptr; 
}
