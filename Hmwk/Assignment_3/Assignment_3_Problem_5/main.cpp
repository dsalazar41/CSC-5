#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done;
    while (!Done)
    {
        double loanAmount, interestRate;
        double monthPay, balance;
        double totalInterest = 0;
        
        cout << "Hello!\n";
        cout << "I am the go-to program for loans!\n";
        cout << "After each response, please hit Enter.\n";
        
        cout << "First, what is the amount of your loan?\n";
        cin >> loanAmount;
        cout << "Alright, and the interest rate?\n";
        cout << "Please write as a percentage.\n";
        cin >> interestRate;
        cout << "Great!\n";
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        double interestRateratio;
        interestRateratio = interestRate / 100;
        balance = loanAmount;
        monthPay = loanAmount / 20;
        int count = 1;
        cout << "Your monthly payments are $";
        cout << monthPay;
        cout << ".\n";
        while (balance > 0)
        {
            balance = balance + ((interestRateratio / 12) * balance);
            totalInterest = totalInterest + ((interestRateratio / 12) * balance);
            balance = balance - monthPay;
            cout << "Month ";
            cout << count;
            cout << ":   ";
            cout << balance;
            cout << "\n";
            count++;
            if (monthPay >= (balance + ((interestRateratio / 12) * balance)))
            {
                cout << "\n";
                cout << "Month ";
                cout << count;
                cout << ":   ";
                cout << 0;
                cout << "\n";
                cout << "Your last monthly payment is ";
                cout << balance;
                cout << ".\n";
                balance = 0;
            }
        }

        cout << "Your total interest paid was $";
        cout << totalInterest;
        cout << ".\n";
        cout << "It will take ";
        cout << count;
        cout << " months to pay off the loan.\n";
        
        string DoneString;
        cout << "Try again? Please type yes or no.\n";
        cin >> DoneString;
        if ((DoneString == "No") || (DoneString == "no"))
        {
            Done = 1;
            cout << "Come again soon!\n";
        }
    }
    
    return 0;
}