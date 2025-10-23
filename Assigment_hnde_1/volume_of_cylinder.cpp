// g++ volume_of_cylinder.cpp -o volume_of_cylinder && volume_of_cylinder
// write a program to find the volume of a cylinder when you entered radius and height / length 

#include<iostream>

using namespace std;

#define PI 3.14 // assign value for pi

int main() {
    // creating variables 
    
    float RADIUS, HEIGHT, VOLUME ;

    cout << "You can calculate volume of cylinder from this ! " << endl;

    cout << "Enter radius of circle face :- " << endl;

    cin >> RADIUS; // input radius of circle face

    cout << "Enter height / length of cylinder :- " << endl;

    cin >> HEIGHT; // input height / length of cylinder

    VOLUME = PI * RADIUS * RADIUS * HEIGHT; // PI X R^2 X H

    cout << "The volume is : " << VOLUME << endl;

    return 0;

}