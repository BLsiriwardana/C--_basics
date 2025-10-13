//g++ main.cpp -o main && main
#include <iostream> // iostream for input/output (input and output streams). this is a file

using namespace std; // or std ::cout, std::endl , 'std' is a library

//this is 'main' function
int main() { // int is the return type of main function, it returns an integer value to the operating system
  int a = 5;
  int c = 20;
  int b = a * c;
  cout << "value is " << b << endl; // this is statement
  // endl is used to end line
  cout << "Hello World! \n";

  int age;
  cout << "Enter your age:";
  cin >> age;
  if (age % 2 == 0)
  {
    cout << "your age is even number. when your age divid by 2 answer is"<< age/2 << endl;
  }
  else {
    cout << "your age is odd number. when your age divid by 2 answer is "<< age/2 <<"."<< 5 << endl;
  }
  //age = age + 1;
  //age += 1 ;//assigment operater

  /*
  pre increment/decreament :
  'cout << ++/--age << endl'

  post increment/decreament :
  'cout << age--/++ << endl'
  */
  
  /*
  |control structures|
  1) sequence structure
  2) selection structure  
     a) if statement
     b) switch statement
  3) repetition structure
     a) for loop
     b) while loop
     c) do-while loop
  */

  return 0; // for recognize programme has not errors
}
