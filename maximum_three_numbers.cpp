#include <iostream>
//g++ maximum_three_numbers.cpp -o maximum_three_numbers && maximum_three_numbers
using namespace std;        
int main(){
 // main array

 int valuesarry[100];

 // variables

 int value;
 int i = 1;
 int maximum_1 = 0;
 int maximum_2 = 0;
 int maximum_3 = 0;

 cout << "enter your number (to stop enter 0) :"<< endl;

 // starting while loops
 while (true)
 {
   // input values
   cin >> value;
   if (value != 0)
   {
        //append values to array
        valuesarry[i] = value;
        i++;
    } else
    {
        //cout << valuesarry << endl;

        //select first maximum number
        
        for (int j = 1; j < i; j++)
        {
         if (maximum_1 < valuesarry[j]){
            maximum_1 = valuesarry[j];
         }else{
            cout << "....";
         }
        
        }
        cout << "\n1st maximum value is : "<< maximum_1 << endl;

        //select second maximum number 

           for (int j = 1; j < i; j++)
        {
         if (maximum_2 < valuesarry[j]){
            if (maximum_1 != valuesarry[j]){
                maximum_2 = valuesarry[j];
            }
         }else{
            cout << "....";
         }
        
        }
        cout << "\n2nd maximum value is : "<< maximum_2 << endl;

        //select third maximum number

        for (int j = 1; j < i; j++)
        {
         if (maximum_3 < valuesarry[j]){
            if (maximum_1 != valuesarry[j] && maximum_2 != valuesarry[j]){
                maximum_3 = valuesarry[j];
            }
         }else{
            cout << "....";
         }
        
        }
        cout << "\n3rd maximum value is : "<< maximum_3 << endl;
        break;
   }
   
 }
 
}