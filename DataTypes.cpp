#include <iostream>
#include <stdlib.h> // system commands, used here for clearing the console

int main () {
    
    /*
    Here we'll use the abrehiviated, non referenced namespace version of std
    however, if we did use it then we could remove std :: from everything

    std :: cout << "In C++, we can reference all the most commonly used data types such as:\n";

    Also, we can either use \n or << std :: endl to move to the next line
    */


    // integers
    int i_x{ }; // empty
    int i_y{ };
    std :: cout << "Integers! Let's define an integer in memory:" << std :: endl;
    std :: cin >> i_x >> i_y;
    std :: cout << "The variable x in memory holds the value " << i_x << "and the value of y is " << i_y << std :: endl;


    // strings
    std :: string s_x;

    std :: cout << "Next we have strings. Define the value of string x:" << std :: endl;
    std :: cin >> s_x;
    getline(cin, s_x); // accept whitespace
    std :: cout << "The value you assigned to x was " << s_x << std :: endl;


    // chars
    char c_x;

    std :: cout << "Let's make things a little simpler and use less memory; it's time to define char x: ";
    // error handling
    try {
        std :: cin >> c_x;
        std :: cout << "You set the variable char value as " << c_x << std :: endl;
    }
    catch (std :: string e) {
        std :: cout << "Error: " << e << std :: endl;
    }

    
    // floats
    float f_x{ }; // empty
    std :: cout << "It's time for floating point numbers! Define the value of float x:" << std :: endl;
    std :: cin >> f_x;
    std :: cout << "Value you assigned to x was " << f_x << std :: endl;


    // doubles
    double d_x{}; // empty
    std :: cout << "For our next example, we're going to cover doubles. Enter the value you wish to assign for x: " << std :: endl;
    std :: cin >> d_x;
    std :: cout << "The value you assigned to the double x was " << d_x << std :: endl;


    // arrays
    std :: string a_x[4] = {"Hello ", "my name is ", "", "!"};
    std :: cout << "Time for a string array! The concept of arrays does not change much between data types so we'll just provide an example for a string for now." << std :: endl;
    std :: cout << "Please enter the string value for array position 2 (the third entry): " << std :: endl;
    std :: cin >> a_x[2];
    getline(cin, a_x[2]); // allow whitespaces
    std :: cout << "The array reads as: " << std :: endl;
    std :: cout << a_x[0] << a_x[1] << a_x[2] << a_x[3] << std :: endl;


    // end
    system("CLS");
    main();
    return 0;
}