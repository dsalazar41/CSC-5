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
        cout << "This program approximates pi to the extent that you decide.\n";
        cout << "Please remember to hit Enter after each response.\n";
    
        int Extent;
        cout << "To what term of the approximation function would you like to\n";
        cout << "see?\n";
        cin >> Extent;
    
        float Approx = 0;
        int count = 0;
        float flipper = 0;
        while (count <= Extent)
        {
            if (count % 2 == 0)
            {
                flipper = 1;
            }
            else
            {
                flipper = -1;
            }
            Approx = Approx + (flipper / ((2 * count) + 1));
            count++;
        }
        Approx = Approx * 4;
        
        cout << "Pi is approximately ";
        cout << Approx;
        cout << ".\n";
        
        string DoneString;
        cout << "Try again? Please type in yes or no.\n";
        cin >> DoneString;
        if ((DoneString == "No") || (DoneString == "no"))
        {
            Done = 1;
            cout << "Have a great day!\n";
        }
    }
    
    return 0;
}