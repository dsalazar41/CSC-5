#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    bool Done = 0;
    while (!Done)
    {
        double sweetener_Mouse_killer, mass_Mouse;
        double kill_proportion;
        double mass_Dieter_lb;
        double mass_Dieter_g;
        double total_Soda_allowed;
        double total_gram_allowed;
    
        const double percent_Sweetener_soda = 0.001;
        const double sweetener_per_soda = 350 * percent_Sweetener_soda;
        const double pounds_to_grams = 454;
    
        cout << "Hello!\n";
        cout << "After typing something in, make sure to hit Enter!\n";
    
        cout << "If you would like to find out how much diet soda you can drink \n";
        cout << "without keeling over, you are at the right place.\n";
        cout << "What I will need first is the amount of sweetener, in grams, that";
        cout << " the poor mouse consumed before dying.\n";
        cin >> sweetener_Mouse_killer;
        cout << "Ouch! Alright. And how much did the mouse weigh (in grams)?\n";
        cin >> mass_Mouse;
        cout << "Okay! Let's see...\n";
    
        cout << "Finally, may I ask how much you plan on weighing, in pounds, ";
        cout << "by the end of your diet?\n";
        cin >> mass_Dieter_lb;
    
        cout << "Alright, so you said that the mouse consumed ";
        cout << sweetener_Mouse_killer;
        cout << " grams of sweetener \n";
        cout << "and weighed ";
        cout << mass_Mouse;
        cout << " grams.\n";
        cout << "And you said that by the end of your diet, you will weigh ";
        cout << mass_Dieter_lb;
        cout << " pounds.\n";
    
        string Info_Correct;
        cout << "Is that correct? Please type yes or no.\n";
        cin >> Info_Correct;
    
        while ((Info_Correct == "no")||(Info_Correct == "No"))
            {
            cout << "Okay let's try that again then!\n";
            cout << "How many grams of sweetener did the mouse consume?\n";
            cin >> sweetener_Mouse_killer;
            cout << "And how much did the mouse weigh, in grams?\n";
            cin >> mass_Mouse;
            cout << "Okay great! And how much will you weigh by the end \n";
            cout << "by the end of your diet, in pounds?\n";
            cin >> mass_Dieter_lb;
     
            cout << "Alright, so you said that the mouse consumed ";
            cout << sweetener_Mouse_killer;
            cout << " grams of sweetener \n";
            cout << "and weighed ";
            cout << mass_Mouse;
            cout << " grams.\n";
            cout << "And you said that by the end of your diet,\n";
            cout << "you will weigh ";
            cout << mass_Dieter_lb;
            cout << " pounds.\n";
                
            cout << "Now, is that right? Please type in yes or no.\n";
            cin >> Info_Correct;
            }
            
        mass_Dieter_g = mass_Dieter_lb * pounds_to_grams;
        kill_proportion = sweetener_Mouse_killer / mass_Mouse;
        total_gram_allowed = (kill_proportion * mass_Dieter_g);
        total_Soda_allowed = total_gram_allowed / sweetener_per_soda;
    
        int Soda_allowed_roundeddown = 0;
        while (Soda_allowed_roundeddown < total_Soda_allowed)
            {
            Soda_allowed_roundeddown++;
            }
    
        Soda_allowed_roundeddown = Soda_allowed_roundeddown - 1;
        cout << "Okay, so you should be able to drink ";
        cout << Soda_allowed_roundeddown;
        cout << " without dying.\n";
        cout << "Enjoy!\n";
        
        string Donestring;
        cout << "Did you want to try again? Type yes or no.\n";
        cin >> Donestring;
        if ((Donestring == "no") || (Donestring == "No"))
            {
            Done = 1;
            }
                
    }
    return 0;
}