#pragma once
#include "Node.h"

template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    ~DoublyLinkedList() {
        // Tarea: Implementar el destructor para borrar todos los nodos. 
    }

    // -- - Métodos a Implementar-- -
    // 1. Insertar al inicio 
    void insertAtBeginning(T data) {

    }
    // 2. Insertar al final 
    void insertAtEnd(T data) {

    }
    // 3. Imprimir la lista hacia adelante 
    void printForward() {

    }
    // 4. Imprimir la lista hacia atrás 
    void printReverse() {

    }
    // 5. Eliminar un nodo por valor 
    // (Este es el método más complejo, ¡presta atención a los casos borde!) 
    bool deleteNode(T data) {

    }
    // 6. Buscar un nodo 
    Node<T>* search(T data) {

    }
    // 7. Verificar si está vacía 
    bool isEmpty() {

    }

};
