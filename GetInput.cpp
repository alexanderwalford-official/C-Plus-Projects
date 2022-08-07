#include <iostream>
#include <string>

using namespace std;

int main () {
  string s_input;
  cout << "Please enter your string.." << endl;
  cin >> s_input; // get input
  getline(cin, s_input); // read past whitespace
  cout << "You wrote " << s_input << "!" << endl;
  return 0;
}
