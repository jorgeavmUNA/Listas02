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
        std::cout << "Ejecutando destructor ..." << std::endl;

        Node<T>* current = head; // Empezamos en la cabeza

        while (current != nullptr) {
            // 1. Guardamos el puntero al siguiente nodo usando el getter
            Node<T>* nextNode = current->getNext();

            // 2. Borramos el nodo actual
            delete current;

            // 3. Avanzamos al siguiente nodo guardado
            current = nextNode;
        }

        // Aseguramos que los punteros de la lista queden nulos
        head = nullptr;
        tail = nullptr;
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
        return false; // cambiar el retorno según corresponda.
    }
    // 6. Buscar un nodo 
    Node<T>* search(T data) {

    }
    // 7. Verificar si está vacía 
    bool isEmpty() {

    }

};
