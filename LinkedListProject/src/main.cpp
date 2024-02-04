/** 
* @file main.cpp
* @description Tum classların ve metodların calistirildigi programın ana islev yeri
* @course 1.Ogretim B grubu
* @assignment 1.Odev
* @date 19 Temmuz Carsamba
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/

#include <iostream>
#include "ReadFile.hpp"
#include "LinkedListManager.hpp"
#include "LinkedList.hpp"
using namespace std;
int main() {
    ReadFile reader("Sayilar.txt");
    int indexA, indexB;
    cout << "Konum A: ";
    cin >> indexA;
    cout << "Konum B: ";
    cin >> indexB;
    reader.swapLists(indexA,indexB);
    double tensPositionAverageSum = reader.tensManager.calculateSumOfPositionAverages();
    double onesPositionAverageSum = reader.onesManager.calculateSumOfPositionAverages();

    cout << "Ust: " << tensPositionAverageSum << endl;
    cout << "Alt: " << onesPositionAverageSum << endl;


    return 0;
}
