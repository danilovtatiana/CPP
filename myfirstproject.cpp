// /* The code below will print the words Hello World!
// to the screen */

// #include <cstdio>
// #include <iostream>
// using namespace std;

// int main()
// {
//     // printf("Hello,World!\n");
//     // cout <<"Another way to say hello"<<endl; //endl is the same as /n

//     // // variables 

//     // int x = 6;  //integers
//     // double y = 3.14; //float number 8 bytes (15 digits)
//     // float m = 7.19; // float number 4 bytes (7 digist)
//     // char z = 'z'; //char
//     // string d = "abcd"; //string

//     // cout << x <<endl; 
//     // cout << y <<endl;
//     // cout << z <<endl;
//     // cout << d <<endl;

//     // //text and variables should be separated by insertion operator: <<

//     // int myAge = 16;
//     // cout << "I am " <<myAge<< " years old \n";

//     //user input

//     int a,b;
//     int sum;
//     cout << "Type a number: ";
//     cin >> a;
//     cout << " Type another number: ";
//     cin >> b;
//     sum = a + b;
//     cout << "Sum is: " << sum;

//     return 0;
// }


#include <iostream>
using namespace std;

int main () {
    int list[10] = {3,4,1,7,2,9,5,4,7};
    count = 0;

    for (int i = 0, i < list.size(), i++){
        if (list[i] % 2 != 0){
            count++;
        }
    }
    cout << count <<"\n";

}

