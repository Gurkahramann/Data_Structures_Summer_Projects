/** 
* @file main.cpp
* @description Tum classların ve metodların calistirildigi programın ana islev yeri
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "FileManager.hpp"
#include <iostream>
using namespace std;
int main() {
    FileManager fileManager;
    ifstream file = fileManager.openFile("Sayilar.txt");
    if (fileManager.isFileOpen(file)) {
        fileManager.readFileAndProcessData(file);
        fileManager.closeFile(file);
    }
    return 0;
}
