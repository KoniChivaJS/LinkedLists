//
// Created by eduard on 08.04.24.
//

#ifndef LINKEDLIST_SINGLENODE_H
#define LINKEDLIST_SINGLENODE_H

#include <memory>
using namespace std;
namespace single_Node{
    template <typename T>
    struct Node {
        T data;
        unique_ptr<Node> pNext;
        explicit Node(T newData = T(),Node next = nullptr)
            :data{newData}, pNext{next}{};
    };
}

#endif //LINKEDLIST_SINGLENODE_H
