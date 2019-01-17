#pragma once

struct Node {
    void* element;
    
    Node* next;
    Node* prev;
}

class DoublyLinkedList {
public:
    DoublyLinkedList();
    ~DoublyLinkedList();
    
private:
    Node anchor;
}