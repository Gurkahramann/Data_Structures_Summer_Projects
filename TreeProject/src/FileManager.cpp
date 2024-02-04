/** 
* @file FileManager.cpp
* @description Hem dosyanın okunup Stacklere atildigi hem de Stacklerin ikili agaca eklendigi ve PostOrder yazilip ASCII ye cevrildigi fonksiyonlari burda yaziyoruz.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include <iostream>
#include <fstream>
#include <sstream>
#include <windows.h>
#include "FileManager.hpp"
using namespace std;
FileManager::FileManager() {
    this->num=0;
}

void FileManager::readFileAndProcessData(ifstream& file)
{
    string line;
    while (getline(file, line)) {
        processLine(line);
    }
}
ifstream FileManager::openFile(const string& filename)
{
    ifstream file(filename);
    return file;
}
void FileManager::closeFile(ifstream& file)
{
    file.close();
}
bool FileManager::isFileOpen(ifstream& file)
{
    if (!file.is_open()) {
        cout << "Dosya Acilamadi!" << endl;
        return false;
    }

    return true;
    
}
void FileManager::processNumbers(istringstream& iss, BSTManager& mng)
{
    Stack* currentStack = mng.getCurrentStack();
    while (iss >> num) {
        if (!currentStack->isEmpty()) {
                if(num % 2 == 0 && num > currentStack->peek())
                {
                mng.addNode();
                currentStack = mng.getCurrentStack();
                }
              
            }
            currentStack->push(num);
        }
        mng.transferStacksToBSTs();
        BST* maxTree = mng.getMaxTree();
        if (maxTree != NULL) {
            maxTree->printPostorder();
            Sleep(10);
    }
    
}
void FileManager::processLine(string& line) {
    istringstream iss(line);
    BSTManager mng;
    mng.addNode();
    processNumbers(iss, mng);
    
}
