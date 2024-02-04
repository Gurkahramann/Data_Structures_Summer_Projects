/** 
* @file ReadFile.hpp
* @description Dosyaları okuyan ve onlarla ilgili islem yapan metodlarin basliklari
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef READFILE_HPP
#define READFILE_HPP

#include "LinkedList.hpp"
#include "LinkedListManager.hpp"
#include <string>

class ReadFile {
public:
    ReadFile(const std::string& filename);
    LinkedListManager tensManager, onesManager;
    void swapLists(int indexA, int indexB);
private:
    LinkedList* copyList(LinkedListManager& manager, int index);
};

#endif 
