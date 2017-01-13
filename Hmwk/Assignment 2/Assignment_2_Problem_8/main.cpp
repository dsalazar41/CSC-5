#include <iostream>
using namespace std;

int main()
{
    cout << "Hello! I'm here to help you find out how long it will take\n";
    cout << "to pay off this bumping stereo system!\n";
    
    double balance = 1000;
    int count = 0;
    double total_Interest = 0;
    double intermission_Balance = 0;
    
    while (balance > 0)
        {
        total_Interest = total_Interest + (0.015 * balance);
        intermission_Balance = balance + (0.015 * balance);
        balance = intermission_Balance - 50;
        count++;
        }
    
    cout << "It will take you ";
    cout << count;
    cout << " months to pay\n";
    cout << "the stereo system. Worth it!\n";
    cout << "Also, the total interest you will be paying on that is $";
    cout << total_Interest;
    cout << ".\n";
    
    cout << "I hope I was of service!\n";
    
    return 0;
    
}