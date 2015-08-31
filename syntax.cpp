// Example items to include
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>

int foo [5] = { 14, 4, 144, 20, 13411 };
//ARRAY SYNTAX

int main ()
{
    //FOR LOOPS
    for(int j = 0; j < 4; j++){
        cout << j << endl;
        //PRINTS NUMBERS. COUT is to print out. CIN is to take input from user
        cout << (sizeof(foo)/sizeof(*foo)) << endl;
        //(sizeof(foo)/sizeof(*foo)) is how you find the length of an array
        cout << foo[j] << endl;
        //PRINTS OUT THE J ELEMENT IN THE ARRAY
        swap(foo[j-1], foo[j]);
        //Swaps elements in an array
        while(j > j-1){
            cout << "The world is still spinning" << endl;
        }
        //while loop
    }
    
    cout << "test" << endl;
    //END ALL C++ MAIN FUNCTIONS WITH RETURNING 0
    return 0;
}