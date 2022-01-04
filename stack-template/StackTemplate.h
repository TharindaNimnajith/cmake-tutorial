//
// Created by ASUS on 11/22/2021.
//

#ifndef CPP_TUTORIAL_STACK_TEMPLATE_H
#define CPP_TUTORIAL_STACK_TEMPLATE_H


#define MAX 10

template<typename T>
class StackTemplate {

private:

    int top;

    T stack[];


public:

    StackTemplate();

    bool push(T x);

    T pop();

    void getTop() const;

    void print();

    bool isEmpty() const;

    bool isFull() const;

    ~StackTemplate();

};


#endif //CPP_TUTORIAL_STACK_TEMPLATE_H
