// Example program
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>
int foo [5] = { 14, 4, 144, 20, 13411 };

int main ()
{
    for(int j = 0; j < (sizeof(foo)/sizeof(*foo)); j++){

        while(foo[j-1] > foo[j]){
            //swap(foo[j-1], foo[j]);
            int temp = foo[j];
            //cout << temp << endl;
            foo[j] = foo[j-1];
            //cout << foo[j] << endl;
            foo[j-1] = temp;
            //cout << foo[j-1] << endl;
        }
        //Should work for an insertion sort. Getting a strange error where it repeats elements. weird.
        cout << foo[j] << endl;
    }
    cout << "test" << endl;
    return 0;
}