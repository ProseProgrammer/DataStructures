#pragma once

struct Node {
    void* element;
    
    Node* next;
    Node* prev;
}

class DoublyLinkedCircularList {
public:
    DoublyLinkedCircularList();
    ~DoublyLinkedCircularList();
    
private:
    Node anchor;
}