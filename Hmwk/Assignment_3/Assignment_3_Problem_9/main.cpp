#include <iostream>
using namespace std;
#include <cstdlib>
using namespace std;
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int SadPrize;
    int count1 = 0;
    int count2 = 0;
    float win1 = 0;
    float win2 = 0;
    
    while (count1 < 10000)
    {
        int door = (rand() % 3) + 1;
        int choice = (rand() % 3) + 1;
    
        if (((choice == 1) && (door == 2)) || ((choice == 2) && (door == 1)))
        {
            SadPrize = 3;
        }
        else if (choice == door)
        {
            SadPrize = door + (rand() % 2) + 1;
        }
        else if (((choice == 1) && (door == 3)) || ((choice == 3) && (door == 1)))
        {
            SadPrize = 2;
        }
        else if (((choice == 2) && (door == 3)) || ((choice == 3) && (door == 2)))
        {
            SadPrize = 1;
        }
    
        if (door == choice)
        {
            //Not switching was the right choice.
            win1++;
        }
        else
        {
            //Switching was the right choice.
            win2++;
        }
        count1++;
    }
    
    cout << "The probability of not switching and winning is ";
    cout << win1 / 10000;
    cout << ",\n";
    cout << "and the probably of switching and winning is ";
    cout << win2 / 10000;
    cout << ".\n";
    
return 0;
}