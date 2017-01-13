#include <iostream>
using namespace std;

int main()

{
    int quantityQ, quantityD, quantityN, totalChange;
    
    /* This is from Savitch's textbook and is problem 3 of the programming projects. */
    cout << "Hello!\n";
    cout << "This program will calculate what your change adds up to!\n";
    cout << "First, how many quarters do you have?\n";
    cin >> quantityQ;
    cout << quantityQ;
    cout << "? Great!\n";
    cout << "And now, how many dimes do you have today?\n";
    cin >> quantityD;
    cout << "Not bad!";
    cout << "How many nickels do you have?\n";
    cin >> quantityN;
    cout << quantityN;
    cout << "??? That's more than they pay me in a year!\n";
    cout << "Now let me just do my magic...\n";
    
    totalChange = quantityQ * .25 + quantityD * .10 + quantityN * .05;
    
    cout << "Alright, your total change is ";
    cout << totalChange;
    cout << " dollars!\n";
    cout << "Come back soon!";
    
    return 0;
}