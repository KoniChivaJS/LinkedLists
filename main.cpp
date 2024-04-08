#include <iostream>
#include "SingleLinkedList.h"
using namespace std;
int main() {
    SingleLinkedList<int> list;
    list.push(1);
    list.push(2);
    list.push(3);
    list.push(4);
    list.at(2);
    return 0;
}
