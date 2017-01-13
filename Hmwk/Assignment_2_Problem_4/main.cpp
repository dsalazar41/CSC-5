#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
        {
        cout << "Hello! They call me the negotiator.\n";
        cout << "The negotiator of consumer loans, that is!\n";
        cout << "If you tell me the amount the consumer needs,\n";
        cout << "the interest rate, and the duration of the loan,\n";
        cout << "I can tell you the face value of the loan as well as\n";
        cout << "how much the monthly payments will be.\n";
        cout << "Please make sure to hit Enter after each response.\n";
    
        double amount_Needed, interest_Rate, duration_Loan;
        double face_Value, month_Pay;
    
        cout << "So why don't you start off by telling me how much the\n";
        cout << "consumer needs!\n";
        cin >> amount_Needed;
        cout << "Great! And what will the interest rate be, as a percentage?\n";
        cin >> interest_Rate;
        cout << "Sounds good to me. And finally, what is the\n";
        cout << "duration of the loan, in months?\n";
        cin >> duration_Loan;
        cout << "Fantastic!";
    
        string Info_Correct;
        cout << "So the consumer needs $";
        cout << amount_Needed;
        cout << " with an interest rate of ";
        cout << interest_Rate;
        cout << "%, and\n";
        cout << "a duration of ";
        cout << duration_Loan;
        cout << " months.\n";
        cout << "Is that correct? Please type yes or no.\n";
        cin >> Info_Correct;
        while ((Info_Correct == "no") || (Info_Correct == "No"))
            {
            cout << "Whoops! Let's try that again then.\n";
            cout << "How much does the consumer need?\n";
            cin >> amount_Needed;
            cout << "Alright, and what is the interest rate?\n";
            cin >> interest_Rate;
            cout << "Great. And what is the duration, in months of the loan?";
            cin >> duration_Loan;
        
            cout << "So the consumer needs $";
            cout << amount_Needed;
            cout << " with an interest rate of ";
            cout << interest_Rate;
            cout << "%, and\n";
            cout << "a duration of ";
            cout << duration_Loan;
            cout << " months.\n";
            cout << "Is that correct? Please type yes or no.\n";
            cin >> Info_Correct;
            }
    
        cout << "Fantastic!\n";
    
        double interest_Rate_use;
        double duration_Loan_years;
        interest_Rate_use = interest_Rate / 100;
        duration_Loan_years = duration_Loan / 12;
        face_Value = amount_Needed / (1 - (interest_Rate_use * duration_Loan_years));
        month_Pay = face_Value / duration_Loan;
    
        cout << "The face value of this loan will be $";
        cout << face_Value;
        cout << ",\n";
        cout << "and the monthly payments will be $";
        cout << month_Pay;
        cout << ".\n";
        
        string Done_String;
        cout << "Would you like to calculate another loan?\n";
        cout << "Type in yes or no.\n";
        cin >> Done_String;
        if ((Done_String == "no") || (Done_String == "No"))
            {
            Done = 1;
            }
   
    }
    
    return 0;
}
