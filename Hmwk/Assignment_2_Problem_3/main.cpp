#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
        {
        const double pay_Increase = .076;
        int how_many_Months;
        double past_annual_Salary, retroactive_Pay, past_month_Salary;
        double new_annual_Salary, new_monthly_Salary;
    
        cout << "Hello!\n";
        cout << "After typing in a response, please be sure to hit Enter.\n";
        cout << "Congratulations on receiving a 7.6% pay increase.\n";
        cout << "If you would like to calculate the amount of money \n";
        cout << "that is due to you, your new annual salary, and\n";
        cout << "your new monthly salary, you came to the right place.\n";
        cout << "All that I need to know is how much you \n";
        cout << "made last year, as well as the number of months\n";
        cout << "this pay increase applies to.\n";
        cout << "So first, how much did you make last year?\n";
        cin >> past_annual_Salary;
        cout << "Perfect! And how many months does this pay increase apply to?\n";
        cin >> how_many_Months;
        cout << "Great! So you made $";
        cout << past_annual_Salary;
        cout << " last year and you are receiving a 7.6% pay increase\n";
        cout << "for ";
        cout << how_many_Months;
        cout << " of those months.\n";
        
    
        string Info_Correct;
        cout << "Is this correct? Please type in yes or no.\n";
        cin >> Info_Correct;
        while ((Info_Correct == "no") || (Info_Correct == "No"))
            {
            cout << "Okay, let's try that again then!\n";
            cout << "How much did you make last year?\n";
            cin >> past_annual_Salary;
            cout << "Sounds good. And how many months does the pay increase\n";
            cout << "apply to?\n";
            cin >> how_many_Months;
            cout << "In the past year, you made $";
            cout << past_annual_Salary;
            cout << "\n";
            cout << "and you are receiving a pay increase for ";
            cout << how_many_Months;
            cout << " of those months.\n";
            cout << "Is that correct? Please type yes or no.\n";
            }
    
        cout << "Great!\n";
    
        past_month_Salary = past_annual_Salary / 12;
        retroactive_Pay = past_month_Salary * how_many_Months * pay_Increase;
        new_annual_Salary = past_annual_Salary + retroactive_Pay;
        new_monthly_Salary = new_annual_Salary / 12;
    
        cout << "The pay increase resulted in you making $";
        cout << retroactive_Pay;
        cout << ".\n";
        cout << "That means that your salary for the past year was $";
        cout << new_annual_Salary;
        cout << ".\n";
        cout << "So your monthly salary was $";
        cout << new_monthly_Salary;
        cout << ".\n";
        cout << "There you go!\n";
        
        string Donestring;
        cout << "Did you want to try that again?\n";
        cin >> Donestring;
        if ((Donestring == "no") || (Donestring == "No"))
            {
            cout << "I hope I have served you well!\n";
            Done = 1;
            }
        }
    
    return 0;
}

