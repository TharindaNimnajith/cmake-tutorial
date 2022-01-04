//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

#include "Stack.h"

Stack::Stack() {
    Stack::top = -1;
    Stack::stack[MAX] = {};
}

bool Stack::push(int x) {
    if (!Stack::isFull()) {
        Stack::stack[++top] = x;
        return true;
    }
    std::cout << "Stack is Full" << std::endl;
    return false;
}

int Stack::pop() {
    if (!Stack::isEmpty())
        return Stack::stack[top--];
    std::cout << "Stack is Empty" << std::endl;
    return 0;
}

void Stack::getTop() const {
    std::cout << Stack::stack[Stack::top] << std::endl;
}

void Stack::print() {
    if (isEmpty())
        return;
    int temp = Stack::top;
    while (temp > -1) {
        std::cout << Stack::stack[temp--];
        if (temp > -1)
            std::cout << ", ";
    }
    std::cout << std::endl;
}

bool Stack::isEmpty() const {
    if (Stack::top < 0)
        return true;
    return false;
}

bool Stack::isFull() const {
    if (Stack::top >= (MAX - 1))
        return true;
    return false;
}

Stack::~Stack() {
    std::cout << "Stack Destructor" << std::endl;
}
