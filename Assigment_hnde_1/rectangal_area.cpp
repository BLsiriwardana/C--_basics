//g++ rectangal_area.cpp -o rectangal_area && rectangal_area
// write a program to fine the area of any rectangal when you enter width and height 
#include <iostream>

using namespace std;

int main() {
    // creating variables 

    float WIDTH, HEIGHT,AREA;

    cout << "You can calculate area of rectangal from this ! " << endl;

    cout << "Enter width of rectangle :- " << endl;

    cin >> WIDTH; // input width of rectangle 

    cout << "Enter height of rectangle :- " << endl;

    cin >> HEIGHT; // input height of rectangle 

    AREA = WIDTH * HEIGHT ; // area of rectangle = width * height 

    cout << "Area is : " << AREA << endl;

    return 0;

}