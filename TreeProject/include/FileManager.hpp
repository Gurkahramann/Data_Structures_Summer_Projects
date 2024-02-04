/** 
* @file FileManager.hpp
* @description Hem dosyanın okunup Stacklere atildigi hem de Stacklerin ikili agaca eklendigi ve PostOrder yazilip ASCII ye cevrildigi fonksiyonlarin baslik kismi.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP
#include "BSTManager.hpp"
#include <fstream>
#include <sstream>

class FileManager {
private:
int num;
public:
    FileManager();
    bool isFileOpen(std::ifstream& file);
    void closeFile(std::ifstream& file);
    std::ifstream openFile(const std::string& filename);
    void processLine(std::string& line);
    void readFileAndProcessData(std::ifstream& file);
    void processNumbers(std::istringstream& iss,BSTManager& mng);
};

#endif 
