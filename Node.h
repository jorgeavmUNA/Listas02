#pragma once
template <typename T>
class Node {
private:
    T data;
    Node* next;
    Node* prev;

public:
    Node(T value) : data(value), next(nullptr), prev(nullptr) {}

    T getData() const { return data; }
    void setData(T value) { data = value; }

    Node<T>* getPrev() const { return prev; }
    Node<T>* getNext() const { return next; }
    void setPrev(Node<T>* prevNode) { prev = prevNode; }
    void setNext(Node<T>* nextNode) { next = nextNode; }
};

