#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
        {
        int people_Room, people_Allowed;
        cout << "Hello!\n";
        cout << "This program can tell you whether or not it is legal\n";
        cout << "or not to hold that amount of people.\n";
        cout << "Furthermore, I can tell how many more people fit in the room.\n";
        cout << "All you have to do is tell me how many people are in the room,\n";
        cout << "as well as the legal amount of people in the room.\n";
    
        cout << "So how many people are in this room?\n";
        cin >> people_Room;
        cout << "Great! How many people are allowed to be in the room?\n";
        cin >> people_Allowed;
        cout << "Alright!\n";
        
        cout << "You said that there are ";
        cout << people_Room;
        cout << " in the room,\n";
        cout << "and ";
        cout << people_Allowed;
        cout << " people allowed in the room.\n";
        
        string Info_Correct;
        cout << "Is that correct? Please type yes or no.\n";
        cin >> Info_Correct;
        while ((Info_Correct == "no") || (Info_Correct == "No"))
            {
            cout << "Whoops... Let's try that again then!\n";
            cout << "How many people are in the room?\n";
            cin >> people_Room;
            cout << "Alright. And how many people are allowed in the room?\n";
            cin >> people_Allowed;
            cout << "Great!\n";
            
            cout << "You said that there are ";
            cout << people_Room;
            cout << " in the room,\n";
            cout << "and ";
            cout << people_Allowed;
            cout << " people allowed in the room.\n";
            cout << "Is that correct? Please type in yes or no.\n";
            cin >> Info_Correct;
            }
        
        cout << "Fantastic!\n";
        
        int people_Difference;
        if (people_Room > people_Allowed)
            {
            cout << "Uh oh... There's already too many people in the room!\n";
            people_Difference = people_Room - people_Allowed;
            cout << "It is advised that ";
            cout << people_Difference;
            cout << " people leave the room!";
            }
        else
            {
            if (people_Room == people_Allowed)
                {
                cout << "The room is filled to capacity!\n";
                }
            else
                {
                people_Difference = people_Allowed - people_Room;
                cout << "The room is able to hold ";
                cout << people_Difference;
                cout << " more people!\n";
                }
            }
        
        string DoneString;
        cout << "Would you like to check another room? Please type yes or no.\n";
        cin >> DoneString;
        if ((DoneString == "no") || (DoneString == "No"))
            {
            cout << "Have a great day!\n";
            Done = 1;
            }
        }
        
        return 0;
}

