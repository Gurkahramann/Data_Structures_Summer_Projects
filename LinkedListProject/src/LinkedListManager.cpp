/** 
* @file LinkedListManager.cpp
* @description Tum satirlardaki listeleri kontrol eden ve onlarla ilgili islem yapılmasını saglayan fonksiyonlar ve govdeleri
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/

#include "LinkedListManager.hpp"
#include <iostream>
using namespace std;
LinkedListManager::LinkedListManager()
{
    head=nullptr;
}
LinkedListManager::~LinkedListManager() {
    ListHeadNode* current = head;
    while (current != nullptr) {
        ListHeadNode* nextNode = current->next;
        delete current->list;
        delete current;
        current = nextNode;
    }
}
void LinkedListManager::addListToEnd(LinkedList* list) {
    ListHeadNode* newNode = new ListHeadNode();
    newNode->list = list;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        ListHeadNode* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}
LinkedList* LinkedListManager::getList(int index) {
    int size = 0;
    ListHeadNode* temp = head;
    while (temp) {
        size++;
        temp = temp->next;
    }
    if (index < 0 || index >= size) {
        std::cout << "Index Out Of Range!" << std::endl;
        return nullptr;
    }
    ListHeadNode* current = head;
    int currentIndex = 0;
    while (current != nullptr && currentIndex != index) {
        current = current->next;
        currentIndex++;
    }
    if (current != nullptr) {
        return current->list;
    } else {
        return nullptr;
    }
}
void LinkedListManager::printAllLists() {
    ListHeadNode* current = head;
    int index = 0;

    while (current != nullptr) {
        LinkedList* list = current->list;
        std::cout << "List " << index << ": ";
        list->printList();
        current = current->next;
        index++;
    }
}
void LinkedListManager::setListToNull(int index) {
    ListHeadNode* current = head;
    int count = 0;
    while (current != nullptr) {
        if (count == index) {
            delete current->list;
            current->list = nullptr;
            return;
        }
        count++;
        current = current->next;
    }
}
double LinkedListManager::calculateSumOfPositionAverages() {
    if(head == nullptr) return 0;

    double sum = 0.0;
    bool stillElements = true;
    int position = 0;

    while (stillElements) {
        int positionSum = 0; 
        int count = 0;
        stillElements = false;

        ListHeadNode* current = head;
        while (current != nullptr) {
            Node* nodeAtPosition = current->list->getNodeAtPosition(position);
            if (nodeAtPosition != nullptr) {
                positionSum += nodeAtPosition->data;
                count++;
                stillElements = true;
            }
            current = current->next;
        }

        if (count > 0) {
            double avg = static_cast<double>(positionSum) / count;
            sum += avg;
        }
        position++;
    }
    return sum;
}
