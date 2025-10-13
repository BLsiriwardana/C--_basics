//g++ example.cpp -o example && example
#include <iostream>
using namespace std;
int main() {
  // variables
  int first_number;
  int second_number;
  int third_number;

  //int sum = first_number + second_number;
  cout << "Enter the first number :" <<endl;
  cin >> first_number;
  cout << "Enter the second number :" <<endl;
  cin >> second_number;
  cout << "Enter the third number :" <<endl;
  cin >> third_number;
  //cout << "the answer is " << first_number % second_number << endl;
  if (first_number > second_number ){
     // cout << "the first number is greater than second number" << endl;
      if (first_number > third_number){
          cout << "the largest number is " << first_number << endl;
          } else {
            cout << "the largest number is " << third_number << endl;
          }
  } else {
     if (second_number > third_number){
          cout << "the largest number is " << second_number << endl;
          } else {
            cout << "the largest number is " << third_number << endl;
          }
  }
 
  
  return 0;
    
}