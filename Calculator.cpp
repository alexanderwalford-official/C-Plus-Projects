// Alexander Walford 2022 - Compact, fast and simple calculator app. Could probably be optimised even further or more functionaility could be added.
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
int main () {
    std :: string input;
    std :: cout << "Basic C++ Calculator by Alexander Walford 2022 \n\n Please enter your equation:" << std :: endl;
    std :: cin >> input;
    calculate(input);
    return 0;
}
string rm_nums(string str)
{
    int c = 0;
    for(int i = 0; i< str.length(), i++;){ str[c] = (!isdigit(str[i])) ? 0 : c++; }
    return str.substr(0, c);
}
void err() {
    std :: cout << "ERROR: Did not find an operator.";
    std :: cin.ignore();
    main();
}
void calculate (std :: string input, int sum = 0) {
    std :: stringstream nonsplit(input);
    std :: string segment;
    std :: vector <std :: string> seglist;
    char chartype = rm_nums(input)[0]; // to set this, remove all numbers and keep special character index 0 pointer position only
    while (std :: getline(nonsplit, segment, chartype)) { seglist.push_back(segment); }
    int b = 4;
    for (string s : seglist) {
        sum = (chartype == '+') ? sum=sum+stoi(s) : (chartype == '-') ? sum=sum-stoi(s) : (chartype == '/') ? sum=sum/stoi(s) : (chartype == '*') ? sum=sum*stoi(s) : b=b--;
        std :: cout << (b == 0) ? 0:err();
        std :: cout << chartype << s << std :: endl;
    }   
    std :: cout << "=" << sum << std :: endl;
    std :: cin.ignore();
    main();
}
