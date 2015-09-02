// Example program
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>
int foo [5] = { 2, 24, 242, 20, 3 };

int main ()
{
    for (int k= 0; k < (sizeof(foo)/sizeof(*foo)); k++){
        for(int j = 0; j < (sizeof(foo)/sizeof(*foo)); j++){
            for (int i = 0; i < j+1; i++){
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
            }
        }
    }
        //cout << "Sorted array is: " << endl;
    for(int j = 0; j < (sizeof(foo)/sizeof(*foo)); j++){
        cout << foo[j] << endl;
    }
    cout << "test" << endl;
    return 0;
}