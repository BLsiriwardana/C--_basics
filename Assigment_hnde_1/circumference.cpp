// g++ circumference.cpp -o circumference && circumference
// The following programm display the circumference of the circle when you enter the radius 
#include<iostream>

using namespace std;

#define PI 3.14 // assign value for pi

int main() {
    // creating variables

    float RADIUS, CIRCUMFERENCE;

    cout << "You can calculate circumference of circle from this ! " << endl;

    cout << "Enter radius of circle :- " << endl;

    cin >> RADIUS; // input radius of circle

    CIRCUMFERENCE = 2 * PI * RADIUS; // 2 x pi x r

    cout << "Circumference of circle : " << CIRCUMFERENCE << endl;

    return 0;


}
