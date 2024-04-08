//
// Created by eduard on 08.04.24.
//

#ifndef LINKEDLIST_SINGLENODE_H
#define LINKEDLIST_SINGLENODE_H

#include <memory>
namespace single_Node{
    template <typename T>
    struct Node {
        T data;
        std::unique_ptr<Node> next;
        explicit Node(T newData)
            :data{newData}, next{nullptr}{};
    };
}

#endif //LINKEDLIST_SINGLENODE_H
