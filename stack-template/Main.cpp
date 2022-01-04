//
// Created by ASUS on 11/22/2021.
//

#include <iostream>

#include "StackTemplate.h"

int main() {
    StackTemplate<int> *stack;
    stack = new StackTemplate<int>();

    stack->pop();
    stack->getTop();
    stack->print();

    int i = 10;
    while (!stack->isFull()) {
        stack->push(i);
        stack->getTop();
        i += 10;
    }
    stack->push(50);
    stack->print();

    while (!stack->isEmpty()) {
        stack->pop();
        stack->getTop();
    }
    stack->pop();
    stack->print();

    int temp;
    std::cin >> temp;
    return 0;
}
