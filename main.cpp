#include <iostream>
#include <stdio.h>
#include "cmystring.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    CMyString a("123");
    CMyString b;
    b = a;
    return 0;
}