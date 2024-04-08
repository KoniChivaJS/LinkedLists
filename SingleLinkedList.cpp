//
// Created by eduard on 08.04.24.
//
#include "SingleLinkedList.h"
#include <iostream>
#include <memory>

//Methods
using namespace std;

//template<typename T>
//void SingleLinkedList<T>::unshift(T data) {
//    unique_ptr<Node<T>> newNode = make_unique<Node<T>>(data);
//    newNode->next = move(head);
//    head = move(newNode);
//    size++;
//}
//
//
//template<typename T>
//void SingleLinkedList<T>::push(T data) {
//    unique_ptr<Node<T>> newNode = make_unique<Node<T>>(data);
//    Node<T> *current = head.get();
//    if(!current){
//        head = move(newNode);
//        size++;
//        return;
//    }
//    while (current->next){
//        current = current->next.get();
//    }
//    current->next = move(newNode);
//    size++;
//}

