#include "stack.h"

// Clear the stack
template <typename T>
void Stack<T>::clear() {
    L1.clear(); // Delegate to the linked list's clear method
}

// Push an element onto the stack
template <typename T>
bool Stack<T>::push(const T& item) {
    return L1.insert(item); // Insert at the head, functioning as the top of the stack
}

// Pop the top element from the stack
template <typename T>
bool Stack<T>::pop(T& item) {
    if (L1.rightLength() == 0) return false; // Cannot pop from an empty stack
    return L1.remove(item); // Remove the head (top of the stack)
}

// Retrieve the top element without removing it
template <typename T>
bool Stack<T>::topValue(T& item) const {
    if (L1.rightLength() == 0) return false; // No top value if stack is empty
    return L1.getValue(item); // Get the value at the head
}

// Get the current size of the stack
template <typename T>
int Stack<T>::length() const {
    return L1.rightLength(); // Use the linked list's right length method
}
