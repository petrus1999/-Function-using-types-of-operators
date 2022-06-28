// Addition and substraction of numbers using my function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void MyFunction(string name,string surname) {

}
int AddNumbers(int num1, int num2) {
    return num1 + num2;
}
int SubstractNumbers(int num1, int num2) {
    return num1 - num2;
}
int MultiplyNumbers(int num1, int num2) {
    return num1 * num2;
}

int main(){
    string name, surname;
    int num1, int num2;
   int result = 0;
   int Operator;

   cout << " Enter your name and surname " << endl;
   cin >> name >> surname;


   cout << "Hello, your name is " << name << " and your surname is " << surname << endl;

   cout << " Enter two numbers " << endl;
   cin >> num1 >> num2;

   cout << "Choose the type of operator " << endl;
   cout << " 1:AddNumbers " << endl;
   cout << " 2:SubstractNumbers " << endl;
   cout << " 3:MultiplyNumbers " << endl;
   cin >> Operator;

   switch (Operator) {

   case 1:
       result = num1 + num2;
       cout << "The result is equals to" << result;

   case 2:
       result = num1 - num2;
       cout << "The result is equals to" << result;

   case 3:
       result = num1 * num2;
       cout << "The result is equals to" << result;

   default:

       cout << "Invalid operator selected, please select the number operator shown above ";

      

   }
   


    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
