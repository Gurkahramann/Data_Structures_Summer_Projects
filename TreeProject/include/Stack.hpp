/** 
* @file Stack.hpp
* @description Stack yapisinin bagli liste seklinde yazildigi yerin baslik dosyasi.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#ifndef STACK_HPP
#define STACK_HPP
#include <iostream>
#include <fstream>
#include "StackNode.hpp"
class Stack {
StackNode* top;
public:
Stack();
~Stack();
void push(int value);
int peek();
int pop();
bool isEmpty();
};
#endif