// Calculator.cpp
// Alexander Walford 2022

#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main () {
    std :: string input;
    std :: cout << "Basic C++ Calculator" << std :: endl;
    std :: cout << "Alexander Walford 2022" << std :: endl;
    std :: cout << "" << std :: endl;
    std :: cout << "Please enter your equation:" << std :: endl;
    std :: cin >> input;
    calculate(input);
    return 0;
}

int calculate (std :: string input) {

    int sum = 0;

    std::stringstream nonsplit(input);
    std :: string segment;
    std :: vector<std :: string> seglist;

    /*
        Further optimisations needed! Make modular and
        use branchless returns?
    */
   
    if (input.find("+")) {
        // split with +

        while(std :: getline(nonsplit, segment, '+')) {
            seglist.push_back(segment);
        }

        for (string s : seglist) {
            sum = sum + stoi(s);
            std :: cout << "+" << s << std :: endl;
        }
    }
    else if (input.find("-")) {
        // split with -

        while(std :: getline(nonsplit, segment, '-')) {
            seglist.push_back(segment);
        }

        for (string s : seglist) {
            sum = sum - stoi(s);
            std :: cout << "-" << s << std :: endl;
        }
    }
    else if (input.find("*")) {
        // split with *

        while(std :: getline(nonsplit, segment, '*')) {
            seglist.push_back(segment);
        }

        for (string s : seglist) {
            sum = sum * stoi(s);
            std :: cout << "*" << s << std :: endl;
        }
    }
    else if (input.find("/")) {
        // split with /

        while(std :: getline(nonsplit, segment, '/')) {
            seglist.push_back(segment);
        }

        for (string s : seglist) {
            sum = sum - stoi(s);
            std :: cout << "/" << s << std :: endl;
        }
    }

    // print answer
    std :: cout << "=" << sum << std :: endl;
    std :: cout << "" << std :: endl;
    std :: cout << "" << std :: endl;
    std :: cout << "Press ENTER to continue.." << std :: endl;
    std :: cin;
    main();
    return 0;
}