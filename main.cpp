#include <iostream>
#include "SingleLinkedList.h"
using namespace std;
int main() {
    SingleLinkedList<int> list;
    list.push(12);
    list.show();
    list.unshift(1);
    list.show();
    list.push(22);
    list.show();

    return 0;
}
