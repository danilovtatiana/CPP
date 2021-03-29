/* The code below will print the words Hello World!
to the screen */

#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
    // printf("Hello,World!\n");
    // cout <<"Another way to say hello"<<endl; //endl is the same as /n

    // // variables

    // int x = 6;  //integers
    // double y = 3.14; //float number 8 bytes (15 digits)
    // float m = 7.19; // float number 4 bytes (7 digist)
    // char z = 'z'; //char
    // string d = "abcd"; //string

    // cout << x <<endl;
    // cout << y <<endl;
    // cout << z <<endl;
    // cout << d <<endl;

    // //text and variables should be separated by insertion operator: <<

    // int myAge = 16;
    // cout << "I am " <<myAge<< " years old \n";

    //user input

    int a,b;
    int sum;
    cout << "Type a number: ";
    cin >> a;
    cout << " Type another number: ";
    cin >> b;
    sum = a + b;
    cout << "Sum is: " << sum;

    return 0;
}
