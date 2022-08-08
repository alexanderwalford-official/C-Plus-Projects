// BranchlessProgramming.cpp
// Alexander Walford 2022

#include <iostream>

int main () {

    bool a = true;
    bool b = false;

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

    // print 1 if a!=b, otherwise print 0
    std :: cout << (a != b) ? 1 : 0;

    // print 1 if a is false, otherwise print 0
    std :: cout << (!a) ? 1 : 0;

    // print 1 if a==b and a is false, otherwise print 0
    std :: cout << (a == b) ? 1 : (!a) ? 1 : 0;


    /*
        Let's go with another example!
    */

    bool f = true;
    int t;
    int _1;
    int _2;
    int a = 2;

    // branched
    if (f == true) t = a*10;
    else t = a*20;
    std :: cout << t << std :: endl;

    // branchless
    _1 = a*10;
    _2 = a*20;
    std :: cout << f ? _1:_2;


    return 0;
}