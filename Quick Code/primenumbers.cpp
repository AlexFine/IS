// Example program
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>

int main ()
{
    for (int i=2; i<100000000; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0)
                break;
            else if (j+1 > sqrt(i)) {
                cout << i << " ";
                
            }
            
        }
    
    return 0;
}