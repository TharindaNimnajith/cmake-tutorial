//
// Created by ASUS on 11/22/2021.
//


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma ide diagnostic ignored "UnusedValue"

#include <iostream>

#include "StackTemplate.h"

template<typename T>
StackTemplate<T>::StackTemplate() {
    StackTemplate::top = -1;
    StackTemplate::stack[MAX] = {};
}

template<typename T>
bool StackTemplate<T>::push(T x) {
    if (!StackTemplate::isFull()) {
        StackTemplate::stack[++top] = x;
        return true;
    }
    std::cout << "Stack is Full" << std::endl;
    return false;
}

template<typename T>
T StackTemplate<T>::pop() {
    if (!StackTemplate::isEmpty())
        return StackTemplate::stack[top--];
    std::cout << "Stack is Empty" << std::endl;
    return 0;
}

template<typename T>
void StackTemplate<T>::getTop() const {
    std::cout << StackTemplate::stack[StackTemplate::top] << std::endl;
}

template<typename T>
void StackTemplate<T>::print() {
    if (isEmpty())
        return;
    int temp = StackTemplate::top;
    while (temp > -1) {
        std::cout << StackTemplate::stack[temp--];
        if (temp > -1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}

template<typename T>
bool StackTemplate<T>::isEmpty() const {
    if (StackTemplate::top < 0)
        return true;
    return false;
}

template<typename T>
bool StackTemplate<T>::isFull() const {
    if (StackTemplate::top >= (MAX - 1))
        return true;
    return false;
}

template<typename T>
StackTemplate<T>::~StackTemplate() {
    std::cout << "Stack Destructor" << std::endl;
}

#pragma clang diagnostic pop
