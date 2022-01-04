//
// Created by ASUS on 11/22/2021.
//

#ifndef CPP_TUTORIAL_STACK_H
#define CPP_TUTORIAL_STACK_H


#define MAX 10

class Stack {

private:

    int top;

    int stack[];


public:

    Stack();

    bool push(int x);

    int pop();

    void getTop() const;

    void print();

    bool isEmpty() const;

    bool isFull() const;

    ~Stack();

};


#endif //CPP_TUTORIAL_STACK_H
