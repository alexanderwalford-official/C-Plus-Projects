// structures.cpp

#include <iostream>

struct {
    int i = 0;
    std :: string s = "s";
} ExampleStruct;

int main () {
    std :: cout << ExampleStruct.i << std :: endl;
    std :: cout << ExampleStruct.s << std :: endl;
    return 0;
}