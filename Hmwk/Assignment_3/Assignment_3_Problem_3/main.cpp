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
        cout << "This program is for people who don't like the changing\n";
        cout << "world and prefer things the old-fashioned way!\n";
        cout << "If you tell me a year in the Arabic numeral way,\n";
        cout << "I'll return it to you in the more correct Roman numeral way.\n";
        cout << "I will assume that the year is between M and MMM.\n";
        cout << "If it is past MMM, then I am sure there is an updated\n";
        cout << "version of me.\n";
        cout << "Long live Caesar salad!\n";
        cout << "Please remember to hit Enter after each response.\n";
    
        int year;
    
        cout << "What year is it?\n";
        cin >> year;
        cout << "Okay, let's see.\n";
        
        if ((year > 3000) || (year < 1000))
        {
            cout << "Woah woah woah! That won't work!\n";
        }
        else
        {
            int yearIntermission;
            string Romanyear = "";
            yearIntermission = year;
            while (yearIntermission >= 1000)
            {   
                Romanyear = Romanyear + "M";
                yearIntermission = yearIntermission - 1000;
            }
            if (yearIntermission == 999)
            {
                Romanyear = Romanyear + "IM";
                yearIntermission = yearIntermission - 999;
            }
            else if (yearIntermission >= 995)
            {
                Romanyear = Romanyear + "VM";
                yearIntermission = yearIntermission - 995;
            }
            else if (yearIntermission >= 990)
            {
                Romanyear = Romanyear + "XM";
                yearIntermission = yearIntermission - 990;
            }
            else if (yearIntermission >= 950)
            {
                Romanyear = Romanyear + "LM";
                yearIntermission = yearIntermission - 950;
            }
            else if (yearIntermission >= 900)
            {
                Romanyear = Romanyear + "CM";
                yearIntermission = yearIntermission - 900;
            }
            else if (yearIntermission > 500)
            {
                Romanyear = Romanyear + "DM";
                yearIntermission = yearIntermission - 500;
            }
            else if (yearIntermission == 500)
            {
                Romanyear = Romanyear + "D";
                yearIntermission = yearIntermission - 500;
            }
            
            if (yearIntermission == 499)
            {
                Romanyear = Romanyear + "ID";
                yearIntermission = yearIntermission - 499;
            }
            else if (yearIntermission >= 495)
            {
                Romanyear = Romanyear + "VD";
                yearIntermission = yearIntermission - 495;
            }
            else if (yearIntermission >= 490)
            {
                Romanyear = Romanyear + "XD";
                yearIntermission = yearIntermission - 490;
            }
            else if (yearIntermission >= 450)
            {
                Romanyear = Romanyear + "LD";
                yearIntermission = yearIntermission - 450;
            }
            else if (yearIntermission >= 400)
            {
                Romanyear = Romanyear + "CD";
                yearIntermission = yearIntermission - 400;
            }
            
            while (yearIntermission >= 100)
            {
                Romanyear = Romanyear + "C";
                yearIntermission = yearIntermission - 100;
            }
            if (yearIntermission == 99)
            {
                Romanyear = Romanyear + "IC";
                yearIntermission = yearIntermission - 100;
            }
            else if (yearIntermission >= 95)
            {
                Romanyear = Romanyear + "VC";
                yearIntermission = yearIntermission - 95;
            }
            else if (yearIntermission >= 90)
            {
                Romanyear = Romanyear + "XC";
                yearIntermission = yearIntermission - 90;
            }
            else if (yearIntermission >= 50)
            {
                Romanyear = Romanyear + "LC";
                yearIntermission = yearIntermission - 50;
            }
            
            if (yearIntermission == 49)
            {
                Romanyear = Romanyear + "IL";
                yearIntermission = yearIntermission - 49;
            }
            else if (yearIntermission >= 45)
            {
                Romanyear = Romanyear + "VL";
                yearIntermission = yearIntermission - 45;
            }
            else if (yearIntermission >= 40)
            {
                Romanyear = Romanyear + "XL";
                yearIntermission = yearIntermission - 40;
            }
            
            while (yearIntermission >= 10)
            {
                Romanyear = Romanyear + "X";
                yearIntermission = yearIntermission - 10;
            }
            if (yearIntermission == 9)
            {
                Romanyear = Romanyear + "IX";
                yearIntermission = yearIntermission - 9;
            }
            else if (yearIntermission >= 5)
            {
                Romanyear = Romanyear + "V";
                yearIntermission = yearIntermission - 5;
            }
            
            if (yearIntermission == 4)
            {
                Romanyear = Romanyear + "IV";
                yearIntermission = yearIntermission - 4;
            }
            
            while (yearIntermission >= 1)
            {
                Romanyear = Romanyear + "I";
                yearIntermission = yearIntermission - 1;
            }
            
            cout << "The year is ";
            cout << Romanyear;
            cout << ".\n";
        }
        
        string Donestring;
        cout << "Try again?\n";
        cout << "Please type in yes or no.\n";
        cin >> Donestring;
        if ((Donestring == "No") || (Donestring == "no"))
        {
            Done = 1;
            cout << "See ya later!\n";
        }
    }
    
    return 0;
}