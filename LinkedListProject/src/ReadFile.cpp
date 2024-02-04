/** 
* @file main.cpp
* @description Dosyanın okundugu ve sayıların farklı bagli listelere atıldıgı yer. 
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "ReadFile.hpp"
#include <fstream>
#include <iostream>
using namespace std;
ReadFile::ReadFile(const std::string& filename) {
    ifstream inputFile(filename);
    if (inputFile.is_open()) {
        std::string line;
        while (getline(inputFile, line)) {
            LinkedList* tens = new LinkedList;
            LinkedList* ones = new LinkedList;
            for (int i = 0; i < line.size(); i += 3) {
                int number = (line[i] - '0') * 10 + (line[i + 1] - '0');
                tens->addNodeToEnd(number / 10);
                ones->addNodeToEnd(number % 10);
            }
            tensManager.addListToEnd(tens);
            onesManager.addListToEnd(ones);
        }
        inputFile.close();
    }
}
void ReadFile::swapLists(int indexA, int indexB) {
    LinkedList* tempA = copyList(tensManager, indexA);
    LinkedList* tempB = copyList(onesManager, indexB);

    tensManager.setListToNull(indexA);
    onesManager.setListToNull(indexB);

    ListHeadNode* currentTensNode = tensManager.head;
    int count = 0;
    while (currentTensNode != nullptr) {
        if (count == indexA) {
            currentTensNode->list = tempB;
            break;
        }
        count++;
        currentTensNode = currentTensNode->next;
    }

    ListHeadNode* currentOnesNode = onesManager.head;
    count = 0;
    while (currentOnesNode != nullptr) {
        if (count == indexB) {
            currentOnesNode->list = tempA;
            break;
        }
        count++;
        currentOnesNode = currentOnesNode->next;
    }
}
LinkedList* ReadFile::copyList(LinkedListManager& manager, int index) {
    LinkedList* newList = new LinkedList();
    Node* currentNode = manager.getList(index)->head;
    while (currentNode != nullptr) {
        newList->addNodeToEnd(currentNode->data);
        currentNode = currentNode->next;
    }
    return newList;
}


