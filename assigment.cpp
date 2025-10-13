//g++ assigment.cpp -o assigment && assigment
#include <iostream>
using namespace std;
int main() {
  // variables
  int first_number;
  int second_number;

  //int sum = first_number + second_number;
  cout << "Enter the first number :" <<endl;
  cin >> first_number;
  cout << "Enter the second number :" <<endl;
  cin >> second_number;
  cout << "the answer is " << first_number % second_number << endl;
  
  return 0;
    
}