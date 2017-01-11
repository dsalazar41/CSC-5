#include <iostream>
using namespace std;

int main()
{
    /* This problem is from Savitch's textbook and is problem 1 of the programming projects.*/
    
    int firstNumber, secondNumber, sum, product;
    cout << "Hello!\n";
    cout << "Please press Enter after typing in your response.\n";
    cout << "After inputting two numbers, this program will return both the sum and product of the two numbers.\n";
    
    cout << "Please type in your first number.\n";
    cin >> firstNumber;
    cout << firstNumber;
    cout << "? Good choice!\n";
    cout << "How about your second number?\n";
    cin >> secondNumber;
    cout << secondNumber;
    cout << "? Not bad...\n";
    
    sum = firstNumber + secondNumber;
    product = firstNumber * secondNumber;
    
    cout << "Here you go:\n";
    cout << "The sum of ";
    cout << firstNumber;
    cout << " and ";
    cout << secondNumber;
    cout << " is ";
    cout << sum;
    cout << " and the product of ";
    cout << firstNumber;
    cout << " and ";
    cout << secondNumber;
    cout << " is ";
    cout << product;
    cout << ".\n";
    cout << "Come back soon!";
    
    return 0;
}
