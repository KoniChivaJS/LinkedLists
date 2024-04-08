//
// Created by eduard on 08.04.24.
//

#ifndef LINKEDLIST_SINGLELINKEDLIST_H
#define LINKEDLIST_SINGLELINKEDLIST_H
#include "SingleNode.h"
#include <iostream>
using namespace std;
using namespace single_Node;

template <typename T>
class SingleLinkedList {
private:
    unique_ptr<Node<T>> head;
    int size;
public:
    SingleLinkedList() :head{nullptr}, size{0} {};
    void unshift(T data);
    void push(T data);
};

template<typename T>
void SingleLinkedList<T>::unshift(T data) {
    unique_ptr<Node<T>> newNode = make_unique<Node<T>>(data);
    newNode->next = move(head);
    head = move(newNode);
    size++;
}


template<typename T>
void SingleLinkedList<T>::push(T data) {
    unique_ptr<Node<T>> newNode = make_unique<Node<T>>(data);
    Node<T> *current = head.get();
    if(!current){
        head = move(newNode);
        size++;
        return;
    }
    while (current->next){
        current = current->next.get();
    }
    current->next = move(newNode);
    size++;
}


#endif //LINKEDLIST_SINGLELINKEDLIST_H
