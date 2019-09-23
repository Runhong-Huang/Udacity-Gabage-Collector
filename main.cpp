#include "gc_pointer.h"
#include "LeakTester.h"
#include <iostream>

int main()
{

/*
    int *ptr = new int (9);
    PtrDetails<int> p(ptr);
    std::cout << p.arraySize << std::endl;
*/
    Pointer<int> p = new int(19);
    p = new int(21);
    p = new int(28);

    return 0;
}
