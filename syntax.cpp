// Example items to include
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>

//To run c++ files, first run g++ filename.cpp
//Then run ./a.out

int foo [5] = { 14, 4, 144, 20, 13411 };
//ARRAY SYNTAX
vector<int> v;
//Declares a vector, size, of integers
int size_t size = 10;
vector<int> array(size);    // make room for 10 integers,


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
    //using vector array right now
    // and initialize them to 0
    // do something with them:
    for(int i=0; i<size; ++i){
        array[i] = i;
        //print out parts of the vector
    }
    
    int more;
    cin >> more;
    //Input to the more variable
    
    cout << "test" << endl;
    //END ALL C++ MAIN FUNCTIONS WITH RETURNING 0
    return 0;
}
/*
//Refrences
http://www.codeguru.com/cpp/cpp/cpp_mfc/stl/article.php/c4027/C-Tutorial-A-Beginners-Guide-to-stdvector-Part-1.htm
 
*/