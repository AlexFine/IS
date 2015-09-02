// Example items to include
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>

int A [2] = { 2, 3};
int B [2] = { 4, 5};
int C [5] = { 20, 41, 144, 2141, 13411 };

int m = (sizeof(A)/sizeof(*A));
int n = (sizeof(B)/sizeof(*B));
//Goal of the algorithm is to merge to sets. The problem with this code is/using c++ is that c++ does not allow you to change the length of an array at run time. This means when it merges it looks real ugly because it stays at 5 elements and looses a lot of values. So I'll have to redo this using a vector if I want that effect.
int main ()
{
    int i, j, k;
    i = 0;
    j = 0;
    k = 0;
    while(i < m && j < n){
        if (A[i] <= B[j]){
            C[k] = A[j];
            i++;
        } else {
            C[k] = B[j];
            j++;
        }
        k++;
    }
    if (i<m){
        for (int p = i; p < m; p++){
            C[k] = A[p];
            k++;
        }
    } else {
        for (int p = j; p < n; p++){
            C[k] = B[p];
            k++;
        }
    }
    for (int y = 0; y < (sizeof(C)/sizeof(*C)); y++){
        cout << C[y] << endl;
    }
    return 0;
}