#ifndef STACK_H
#define STACK_H

#include "llist.h"

template <typename T>
class Stack {
public:
    void clear();
    bool push(const T& item);
    bool pop(T& item);
    bool topValue(T& item) const;
    int length() const;

private:
    LList<T> L1; // Use the templated linked list for stack implementation
};

#include "stack.cpp" // Include implementation file for templates
#endif
