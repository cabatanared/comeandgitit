#include <iostream>

using namespace std;


 

int main()
//huhu
{

    int firstNumber, secondNumber, sumOfTwoNumbers, diffOfTwoNumbers;

    

    cout << "Enter first number: ";

    cin >> firstNumber;

    

    cout << "Enter second number: ";

    cin >> secondNumber;


 

    // sum of two numbers is stored in variable sumOfTwoNumbers

    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers = firstNumber - secondNumber;

 

    // Prints sum 

    cout << endl << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    cout << endl << firstNumber << " - " <<  secondNumber << " = " << sumOfTwoNumbers;    

 

    return 0;

}