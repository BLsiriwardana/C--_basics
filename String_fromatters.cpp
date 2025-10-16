//g++ String_fromatters.cpp -o String_fromatters && String_fromatters
#include <iostream>
#include <string>

#define YEAR 2025

using namespace std;
int main(){

//create variables
string USER_NAME ;
string USER_EMAIL ;
int BIRTH_YEAR;

cout << "Enter your name : - " << endl;

getline(cin, USER_NAME); // input user name

cout << "Enter your email : - " << endl;

getline(cin, USER_EMAIL);

cout << "Enter your birth year : - " << endl;

cin >> BIRTH_YEAR;

if (YEAR-BIRTH_YEAR >= 18) {
    cout << "\a Successfuly registered !" << endl;
    cout << "Name :\t" << USER_NAME << endl;
    cout << "E-mail :\t" << USER_EMAIL << endl;
    cout << "Age :\t" << YEAR-BIRTH_YEAR << endl;

} else {
     cout << "\a Request Rejected !" << endl;
}

}
