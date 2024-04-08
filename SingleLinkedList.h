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
    SingleLinkedList();
    ~SingleLinkedList();
};



#endif //LINKEDLIST_SINGLELINKEDLIST_H
