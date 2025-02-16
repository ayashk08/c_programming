//How to Return a Pointer from a Function in C
#include <stdio.h>

int* returnStaticPointer() {
    static int num = 10;  
    return &num;
}

int main() {
    int* ptr = returnStaticPointer();
    printf("Value: %d\n", *ptr);
    return 0;
}
