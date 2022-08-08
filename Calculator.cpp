// Alexander Walford 2022 - Compact, fast and simple calculator app. Could probably be optimised even further or more functionaility could be added.
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int sum = 0;
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
    std::stringstream nonsplit(input);
    std :: string segment;
    std :: vector<std :: string> seglist;
    // to set this, remove all numbers and keep special character index 0 pointer position only
    char chartype = rm_nums(input)[0];
    while(std :: getline(nonsplit, segment, chartype)) {
        seglist.push_back(segment);
    }
    for (string s : seglist) {
        int b = 4;
        sum = (chartype == '+') ? b=b--:sum=sum+stoi(s);
        sum = (chartype == '-') ? b=b--:sum=sum-stoi(s);
        sum = (chartype == '/') ? b=b--:sum=sum/stoi(s);
        sum = (chartype == '*') ? b=b--:sum=sum*stoi(s);
        std :: cout << (b == 0) ? 0:err();
        std :: cout << chartype << s << std :: endl;
    }   
    std :: cout << "=" << sum << std :: endl;
    std :: cout << "" << std :: endl;
    std :: cout << "Press ENTER to continue.." << std :: endl;
    std :: cin;
    main();
    return 0;
}
string rm_nums(string str)
{
    int current = 0;
    for(int i = 0; i< str.length(); i++){
        str[current] = (!isdigit(str[i])) ? 0:current++;
    }
    return str.substr(0,current);
}
int err() {
    std :: cout << "ERROR: Did not find an operator.";
    std :: cin;
    main();
    return 0;
}