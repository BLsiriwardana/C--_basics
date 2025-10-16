//g++ define.cpp -o define && define
#include <iostream>
#include <string>

#define PI 3.14 // Assign PI constant value
#define CIRCUM(A) (PI*A) // Calculate Circumference 
#define AREA(A) (PI*A/4) // Calculate Area
using namespace std;
int main(){

    // create variables
    
    float DIAMETER_VALUE ;

    cout << "Enter value of diameter : " << endl;

    cin >> DIAMETER_VALUE; // input diameter 

    cout << "Circumference is " << CIRCUM(DIAMETER_VALUE) << endl;

    cout << "Area is " << AREA(DIAMETER_VALUE) << endl;

}
