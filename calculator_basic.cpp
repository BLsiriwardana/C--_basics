 //g++ calculator_basic.cpp -o calculator_basic && calculator_basic
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
 #include <iostream>
 //this is basic calculator
 using namespace std;
 int main(){
 //variables 
 int value_1;
 int value_2;
 char operator_1;
 int result;
 //input , output satements
 cout << "enter your first number :"<< endl;
 cin >> value_1;
 cout << "enter your second number :"<< endl;
 cin >> value_2;
 
 //select operator
 cout << "select operator : + , - , * , / , % " << endl;
 cin >> operator_1;
 if (operator_1 == '+')
 {
    result = value_1 + value_2 ;
    cout << value_1 <<" + "<< value_2 <<" = "<< result << endl;
 } else if (operator_1 == '-')
 {
    result = value_1 - value_2 ;
    cout << value_1 <<" - "<< value_2 <<" = "<< result << endl;
 } else if (operator_1 == '*')
 {
    result = value_1 * value_2 ;
    cout << value_1 <<" * "<< value_2 <<" = "<< result << endl;
 } else if (operator_1 == '/')
 {
    result = value_1 / value_2 ;
    cout << value_1 <<" / "<< value_2 <<" = "<< result << endl;
 } else if (operator_1 == '%')
 {
    result = value_1 % value_2 ;
    cout <<"after divide "<< value_1 <<" / "<< value_2 <<"  remain is = "<< result << endl;
 } else
 {
    cout << "invalid operator" << endl;
 }
 }