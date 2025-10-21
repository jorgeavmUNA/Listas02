#include <iostream>
#include <windows.h> // Needed for: SetConsoleOutputCP
#include<string>
#include "DoublyLinkedList.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8); //Permite imprimir caracteres especiales, ej.: á é ñ
    DoublyLinkedList<int> list1;
    list1.insertAtEnd(10);
    list1.insertAtBeginning(5);
    list1.insertAtEnd(20);
    std::cout << "Lista 1 (hacia adelante): ";
    list1.printForward(); // Salida esperada: 5 -> 10 -> 20 
    std::cout << "Lista 1 (hacia atras): ";
    list1.printReverse(); // Salida esperada: 20 -> 10 -> 5 
    list1.deleteNode(10);
    std::cout << "Lista 1 (despues de borrar 10): ";
    list1.printForward(); // Salida esperada: 5 -> 20 
    // --- Prueba con Strings --- 
    DoublyLinkedList<std::string> list2;
    list2.insertAtBeginning("Hola");
    list2.insertAtEnd("Mundo");
    std::cout << "Lista 2: ";
    list2.printForward(); // Salida esperada: Hola -> Mundo
    return 0;
} // Salida esperada: Ejecutando el destructor.

