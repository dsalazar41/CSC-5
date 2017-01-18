#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
    {
        string day;
        int time1, time2;
        int length;
        double cost;
        
        cout << "Hello!\n";
        cout << "I hope I can help you today,\n";
        cout << "I am a program that will tell you the cost of a\n";
        cout << "long term call.\n";
        cout << "All you have to tell me is what day of the week\n";
        cout << "the call took place\n";
        cout << "and length of the call.\n";
        cout << "After each response, please hit Enter.\n";
        
        cout << "So first, let me know what day of the week the call\n";
        cout << "took place. Please type your response as the first\n";
        cout << "two letters of the day, such as Mo, Tu, We,\n";
        cout << "Th, Fr, Sa, or Su.\n";
        
        cin >> day;
        cout << "Great!\n";
        string dayFull;
        if ((day == "Mo") || (day == "mo"))
        {
            dayFull = "Monday";
        }
        else if ((day == "Tu") || (day == "tu"))
        {
            dayFull = "Tuesday";
        }
        else if ((day == "We") || (day == "we"))
        {
            dayFull = "Wednesday";
        }
        else if ((day == "Th") || (day == "th"))
        {
            dayFull = "Thursday";
        }
        else if ((day == "Fr") || (day == "fr"))
        {
            dayFull = "Friday";
        }
        else if ((day == "Sa") || (day == "sa"))
        {
            dayFull = "Saturday";
        }
        else if ((day == "Su") || (day == "su"))
        {
            dayFull = "Sunday";
        }
        
        cout << "Now, at what time did this call take place?\n";
        cout << "Please type your answer in military times, and after\n";
        cout << "typing in the hour, hit Enter and then\n";
        cout << "type in the minutes.\n";
        cin >> time1;
        cout << "Okay great! Now the minutes.\n";
        cin >> time2;
        cout << "Great!\n";
        cout << "Finally, how long was the phone call, in minutes?\n";
        cin >> length;
        
        string CorrectInfo;
        cout << "So you said that the call took place on ";
        cout << dayFull;
        cout << ",\n";
        cout << "at ";
        cout << time1;
        cout << ":";
        cout << time2;
        cout << ".\n";
        cout << "And the length of the call was ";
        cout << length;
        cout << " minutes.\n";
        cout << "Is that correct?\n";
        cin >> CorrectInfo;
        while ((CorrectInfo == "No") || (CorrectInfo == "no"))
        {
            cout << "Okay then, let's try that again.\n";
            cout << "Please type in the day of the week the call took place.\n";
            cin >> day;
            if ((day == "Mo") || (day == "mo"))
            {
                dayFull = "Monday";
            }
            else if ((day == "Tu") || (day == "tu"))
            {
                dayFull = "Tuesday";
            }
            else if ((day == "We") || (day == "we"))
            {
                dayFull = "Wednesday";
            }
            else if ((day == "Th") || (day == "th"))
            {
                dayFull = "Thursday";
            }
            else if ((day == "Fr") || (day == "fr"))
            {
                dayFull = "Friday";
            }
            else if ((day == "Sa") || (day == "sa"))
            {
                dayFull = "Saturday";
            }
            else if ((day == "Su") || (day == "su"))
            {
                dayFull = "Sunday";
            }
            cout << "Okay, and what time did the call take place,\n";
            cout << "in military time? Please type in the hour first.\n";
            cin >> time1;
            cout << "Now the minute.\n";
            cin >> time2;
            cout << "Great!\n";
            cout << "Now please type in the duration of the call.\n";
            cin >> length;
            
            cout << "So you said that the call took place on ";
            cout << dayFull;
            cout << ",\n";
            cout << "at ";
            cout << time1;
            cout << ":";
            cout << time2;
            cout << ".\n";
            cout << "And the length of the call was ";
            cout << length;
            cout << " minutes.\n";
            cout << "Is that correct?\n";
            cin >> CorrectInfo;
        }
        
        cout << "Fantastic!\n";
        cout << "Now let me just crunch some numbers.\n";
        if ((day == "Sa") || (day == "sa") || (day == "Su") || (day == "su"))
        {
            cost = length * .15;
        }
        else
        {
            if ((time1 <= 8) || (time1 >= 18))
            {
                cost = length * .25;
            }
            else
            {
                cost = length * .40;
            }
        }
        
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        cout << "The cost of your phone call is $";
        cout << cost;
        cout << ".\n";
        
        string DoneString;
        cout << "I hope I have served you well!\n";
        cout << "Would you like to calculate the cost again?\n";
        cout << "Please type yes or no.\n";
        cin >> DoneString;
        if ((DoneString == "No") || (DoneString == "no"))
        {
            Done = 1;
        }
    }
    
    return 0;
}