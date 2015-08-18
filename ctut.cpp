// Example program
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
#include <math.h>
int num;
int primenums[] = {2,3,5};

int main()
{

    /*
     for (float i = 1; i < 10000; i++){
     //cout << primenums[i] << endl;
     for (float j = 1; j < 100; j++){
     if(fmod(i,primenums[j]) == 0){
     }else{
     cout << i << endl;
     primenums.insert(primenums.begin(), i);
     }
     //primenums.insert(primenums.begin(), i);
     //cout << primenums[j] << endl;
     //cout << primenums.size() << endl;
     }
     //cout << primenums[i] << endl;
     }
     for (int i = 0; i < 100; i++){
     cout << primenums[i] << endl;
     }*/
    
    //cin >> num;
    cout << sizeof(primenums)/4 << endl;
    for (int i = 0; i < sizeof(primenums)/4; i++){
    
         //primenums.insert(primenums.begin(), i);
         cout << primenums[i] << endl;
        //cout << i << endl;
     }
     //num % 2 computes the remainder when num is divided by 2
    if ( num % 2 == 0 || num % 3 == 0)
    {
        cout << num << " is not prime " << endl;
    }
    else{
        cout << num << " is prime " << endl;
    }
    
    
    return 0;
}

