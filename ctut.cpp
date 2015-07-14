// Example program
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std; 


int main()
{
vector <float> primenums = {1, 2, 3};

for (float i = 0; i < 10000; i++){
//cout << primenums[i] << endl;
for (float j = 0; j < 100; j++){
if(! i % primenums[j] == 0){
	cout << i << endl;
	primenums.insert(primenums.begin(), i);
}
}
}

return 0;

}

