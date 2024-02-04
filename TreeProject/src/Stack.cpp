/** 
* @file Stack.cpp
* @description Stack yapisinin bagli liste seklinde yazildigi yer.
* @course 1.Ogretim B grubu
* @assignment 2.Odev
* @date 29 Temmuz 2023 Cumartesi
* @author Gürkan Kahraman gurkan.kahraman@ogr.sakarya.edu.tr - Vedat Arslan vedat.arslan@ogr.sakarya.edu.tr
*/
#include "Stack.hpp"
Stack::Stack()
{
    this->top=NULL;
}
Stack::~Stack()
{
    while (top) {
        StackNode* oldTop = top;
        top = top->next;
        delete oldTop;
    }
}
void Stack::push(int value)
{
    StackNode* newNode = new StackNode;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}
int Stack::peek()
{
    if (top) {
        return top->data;
    }
    
    return -1; 
}
int Stack::pop()
{
    if (top) {
        int topData = top->data;
        StackNode* oldTop = top;
        top = top->next;
        delete oldTop;
        return topData;
    }
    
    return -1; 
}
bool Stack::isEmpty () {
    return top == NULL;
}