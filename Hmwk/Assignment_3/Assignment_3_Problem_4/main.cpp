#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
    {
        int count;
        int countbackup;
        cout << "Hello! I love a good game of blackjack.\n";
        cout << "After each response, please hit Enter.\n";
        cout << "How many cards do you have?\n";
        cin >> count;
        countbackup = count;
    
        char c1 = '0', c2 = '0', c3 = '0', c4 = '0', c5 = '0';
        char cards [5] = {c1, c2, c3, c4, c5};
        int ic1, ic2, ic3, ic4, ic5;
        int icards [5] = {ic1, ic2, ic3, ic4, ic5};
        bool AceExist = 0;
        cout << "And what are the values of these cards?\n";
        cout << "For the face cards as well as the ten card,\n";
        cout << "please only type in the first letter\n";
        cout << "like t, j, q, k, or a.\n";
        cout << "First one?\n";
        cin >> cards[0];
        cout << "Great! ";
        count = count - 1;
        while (count >= 1)
        {
            cout << "Next one?\n";
            cin >> cards[(5-(count))];
            count--;
        }
    
        int count2 = 0;
        while (count2 <= (countbackup - 1))
        {
            if (cards[count2] == '1')
            {
                icards[count2] = 1;
            }
            else if (cards[count2] == '2')
            {
                icards[count2] = 2;
            }
            else if (cards[count2] == '3')
            {
                icards[count2] = 3;
            }
            else if (cards[count2] == '4')
            {
                icards[count2] = 4;
            }
            else if (cards[count2] == '5')
            {
                icards[count2] = 5;
            }
            else if (cards[count2] == '6')
            {
                icards[count2] = 6;
            }
            else if (cards[count2] == '7')
            {
                icards[count2] = 7;
            }
            else if (cards[count2] == '8')
            {
                icards[count2] = 8;
            }
            else if (cards[count2] == '9')
            {
                icards[count2] = 9;
            }
            else if (cards[count2] == 't')
            {
                icards[count2] = 10;
            }
            else if (cards[count2] == 'j')
            {
                icards[count2] = 10;
            }
            else if (cards[count2] == 'q')
            {
                icards[count2] = 10;
            }
            else if (cards[count2] == 'k')
            {
                icards[count2] = 10;
            }
            else if (cards[count2] == 'a')
            {
                AceExist = 1;
                icards[count2] = 1;
            }
            count2++;
        }
    
        int sum = 0;
        int count3 = 0;
        while (count3 <= (countbackup - 1))
        {
            sum = sum + icards[count3];
            count3++;
        }
        
        if ((AceExist) && (21 - sum >= 10))
        {
            sum = sum + 10;
        }
        
        if (sum > 21)
        {
            cout << "Busted!\n";
        }
        else
        {
            cout << "Your hand has a value of ";
            cout << sum;
            cout << ".\n";
        }
        
        string DoneString;
        cout << "Try again?\n";
        cout << "Please type in yes or no.\n";
        cin >> DoneString;
        if ((DoneString == "No") || (DoneString == "no"))
        {
            Done = 1;
            cout << "Have a great day!\n";
        }
    }
    
    return 0;
}