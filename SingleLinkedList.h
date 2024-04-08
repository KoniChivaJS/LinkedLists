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

    void shift();
    void pop();

    void show() const;
};

template<typename T>
void SingleLinkedList<T>::pop() {
    if(!head){
        throw out_of_range("List empty");
    }
    if(size == 1){
        head.reset();
        size--;
        return;
    }
    Node<T> *current = head.get();
    while(current->next->next){
        current = current->next.get();
    }
    current->next.reset();
    size--;
}

template<typename T>
void SingleLinkedList<T>::shift() {
    if(!head){
        throw out_of_range("List empty");
    }
    head = move(head->next);
    size--;
}

template<typename T>
void SingleLinkedList<T>::show() const {
    Node<T> *current = head.get();
    while (current != nullptr){
        cout<<current->data<<" ";
        current = current->next.get();
    }
    cout<<endl;
}

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
