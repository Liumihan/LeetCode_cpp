#include <iostream>
#include <cstdio>
#include "cmystring/cmystring.h"
#include "duplicate/duplicate.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    // #1 CMystring
//    CMyString a("123");
//    CMyString b;
//    b = a;

    // #2 duplicate
    int num1[] = {2, 3, 1, 2, 0, 4, 4, 5};
    int num2[] = {1};
    int num3[] = {1, 3, 2, 5, 3};
    int dup;
    bool have =  Duplicate::duplicate(num3, sizeof(num3)/sizeof(int), &dup);
    if(have)
        printf("%d\n", dup);
    else
        printf("Don't have\n");


    return 0;
}