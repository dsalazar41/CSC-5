#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
        {
        cout << "Hello!\n";
        cout << "For me to work, please hit Enter after each response.\n";
        cout << "My purpose is to serve you! If you tell me how many hours\n";
        cout << "you worked this week, as well as how many dependents you\n";
        cout << "have, I can tell you your gross pay, how much is withheld\n";
        cout << "for Social Security tax, federal income tax, state income\n";
        cout << "tax, and union dues, and your net take-home pay.\n";
        cout << "Not bad, huh?\n";
        
        double hours_Worked, dependents;
        double gross_Pay, SS_tax, federal_income_Tax, state_income_Tax;
        double total_Pay;
        const double pay_Rate = 16.78;
        const double union_dues = 10;
        
        cout << "First, why don't you tell me how many hours you\n";
        cout << "have worked, in hours?\n";
        cin >> hours_Worked;
        cout << "Great! And how many dependents do you have? \n";
        cin >> dependents;
        cout << "Perfect.\n";
        
        string Info_correct;
        cout << "You said that you have worked ";
        cout << hours_Worked;
        cout << " hours,\n";
        cout << "and have ";
        cout << dependents;
        cout << " dependents. Is that correct?\n";
        cout << "Please type yes or no.\n";
        cin >> Info_correct;
        
        while ((Info_correct == "no") || (Info_correct == "No"))
            {
            cout << "Whoops! Let's try that again.\n";
            cout << "How many hours have you worked?\n";
            cin >> hours_Worked;
            cout << "Great. And how many dependents do you have?\n";
            cin >> dependents;
            cout << "Perfect.\n";
            
            cout << "You said that you have worked ";
            cout << hours_Worked;
            cout << " hours,\n";
            cout << "and have ";
            cout << dependents;
            cout << " dependents. Is that correct?\n";
            cout << "Please type yes or no.\n";
            cin >> Info_correct;
            }
        
        cout << "Fantastic!\n";
        
        if (hours_Worked > 40)
            {
            gross_Pay = (40 * pay_Rate) + ((hours_Worked - 40) * pay_Rate * 1.5);
            }
        else
            {
            gross_Pay = hours_Worked * pay_Rate;
            }
        
        int dependents_fee;
        if (dependents > 3)
            {
            dependents_fee = 35;
            }
        else
            {
            dependents_fee = 0;
            }
        
        SS_tax = gross_Pay * .06;
        federal_income_Tax = gross_Pay * .14;
        state_income_Tax = gross_Pay * .05;
        
        int total_withheld;
        total_withheld = SS_tax + federal_income_Tax + state_income_Tax
            + dependents_fee + union_dues;
        total_Pay = gross_Pay - total_withheld;
        
        cout << "Your gross pay is $";
        cout << gross_Pay;
        cout << ".\n";
        cout << "The social security tax took off $";
        cout << SS_tax;
        cout << ".\n";
        cout << "The federal and state income tax took off $";
        cout << federal_income_Tax;
        cout << "\n";
        cout << "and $";
        cout << state_income_Tax;
        cout << " respectively. Union dues were an additional $10.\n";
        
        if (dependents > 3)
            {
            cout << "And since you have more than 3 dependents, an\n";
            cout << "35 dollars were taken off.\n";
            }
        
        string Donestring;
        cout << "Did you want to do that again?\n";
        cout << "Please type yes or no.\n";
        cin >> Donestring;
        if ((Donestring == "no") || (Donestring == "No"))
            {
            cout << "Alright, have a great day!\n";
            Done = 1;
            }
        
        }
    
    return 0;
    
}