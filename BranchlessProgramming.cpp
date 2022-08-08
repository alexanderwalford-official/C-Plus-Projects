// BranchlessProgramming.cpp
// Alexander Walford 2022

#include <iostream>

int main () {

    std :: bool a = true;
    std :: bool b = false;

    /*
        Typically, developers do not consider the performance impact of using if
        and else-if statements. That is, until their program/s starts running poorly
        and they drastically try to reduce the amount of variables that they pass into
        their if statements and other (in some cases), futile efforts.
    */    

    if (a != b) {
        std :: cout << "Variable a (" << a << ") and variable b (" << b << ") do not match!" << std :: endl;
    }
    else if (a == false) {
        std :: cout << "Variable a is false!" << std :: endl;
    }
    else {
        std :: cout << "Variable a (" << a << ") and variable b (" << b << ") match!" << std :: endl;
    }

    /*
        However, the use of these statements are technically not needed with some good
        old fashioned arithmatic!
    */

    // (untested)

    b!a = std :: cout << "Variable a (" << a << ") and variable b (" << b << ") do not match!" << std :: endl; // b does not equal a
    !a = std :: cout << "Variable a is false!" << std :: endl; // a is false
    a=b = std :: cout << "Variable a (" << a << ") and variable b (" << b << ") match!" << std :: endl; // a equals b


    /*
        Let's go with another example!
    */

    std :: bool f = true;
    std :: int t;
    std :: int _1;
    std :: int _2;

    // branched
    if (f == true) t = a*10;
    else t = a*20;
    std :: cout << t << std :: endl;

    // branchless
    _1 = a*10;
    _2 = a*20;
    std :: cout << f ? _1:_2 << std :: endl;


    return 0;
}