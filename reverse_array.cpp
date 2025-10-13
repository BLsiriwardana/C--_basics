#include <iostream>
//g++ reverse_array.cpp -o reverse_array && reverse_array
using namespace std;    
int main(){
/*Reverse Array – Read 10 integers into an array and print them in reverse order.*/ 
int valuearray[10] = {0,1,2,3,4,5,6,7,8,9};
cout << sizeof(valuearray) << endl; // seizeof aray represent how many bytes are used by array
for (int i = 10 ; i > 0; i--)
{
    cout << valuearray[i] << endl;
}


}