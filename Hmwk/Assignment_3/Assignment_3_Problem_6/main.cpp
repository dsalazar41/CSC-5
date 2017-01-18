#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
    {
        int initialSize, duration;
        int FinalSize;
        
        cout << "Hello!\n";
        cout << "I am all about the Fibonacci sequence!\n";
        cout << "If you tell me the original size, in pounds\n";
        cout << "of any green crud population, and a certain\n";
        cout << "number of days, I can tell you how large the\n";
        cout << "population of crud will be by that day.\n";
        cout << "Remember to hit Enter after each response.\n";
        
        cout << "What is the size, in pounds, of your green crud population?\n";
        cin >> initialSize;
        cout << "Now how many days would you like to simulate?\n";
        cin >> duration;
        
        int durationRounded;
        durationRounded = duration / 5;
        int count = durationRounded;
        
        int f_nminus1, f, fIntermission;
        f_nminus1 = initialSize;
        f = initialSize;
        while (count > 1)
        {
            fIntermission = f;
            f = fIntermission + f_nminus1;
            f_nminus1 = fIntermission;
            count--;
        }
        FinalSize = f;
        cout << "The final size of your green crud population will be ";
        cout << FinalSize;
        cout << ".\n";
        
        string DoneString;
        cout << "Try again? Please type yes or no.\n";
        cin >> DoneString;
        if ((DoneString == "No") || (DoneString == "no"))
        {
            Done = 1;
            cout << "Have a great day!\n";
        }
    }
}