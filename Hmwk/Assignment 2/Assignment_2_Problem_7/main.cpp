#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    cout << "Hello! I am here to serve you.\n";
    cout << "I am able to help gauge the price of an item after a specified\n";
    cout << "number of years.";
    cout << "Cool, right?\n";
    
    cout << "After each response, please make sure to hit Enter.\n";
    
    double original_Price, Years, rate_Inflation;
    double estimated_Cost;
    
    cout << "First, how much is this item currently?\n";
    cin >> original_Price;
    cout << "Great! And how far into the future, in years, will you\n";
    cout << "be purchasing this?\n";
    cin >> Years;
    cout << "Awesome. Finally, what is the rate of inflation for this?\n";
    cout << "Please type as a percentage.\n";
    cin >> rate_Inflation;
    
    string Correct_info;
    cout << "Just to be sure, the price of your item is $";
    cout << original_Price;
    cout << ",\n";
    cout << "you plan on purchasing the item ";
    cout << Years;
    cout << " years in the future,\n";
    cout << "and the rate of inflation is ";
    cout << rate_Inflation;
    cout << "%.\n";
    cout << "Is that correct?\n";
    cin >> Correct_info;
    if ((Correct_info == "no") || (Correct_info == "No"))
        {
        cout << "Whoops, let's try that again!\n";
        cout << "What is the price of your item?\n";
        cin >> original_Price;
        cout << "In how many years will you buy this?\n";
        cin >> Years;
        cout << "And what is the rate of inflation for this?\n";
        cin >> rate_Inflation;
        cout << "Just to be sure, the price of your item is $";
        cout << original_Price;
        cout << ",\n";
        cout << "you plan on purchasing the item ";
        cout << Years;
        cout << " years in the future,\n";
        cout << "and the rate of inflation is ";
        cout << rate_Inflation;
        cout << "%.\n";
        cout << "Is that correct?\n";
        cin >> Correct_info;
        }
    
    cout << "Great!\n";
    
    double rate_Inflation_use = rate_Inflation / 100;
    estimated_Cost = original_Price + (rate_Inflation_use * Years * original_Price);
    cout << "The estimated cost of your item is $";
    cout << estimated_Cost;
    cout << ".\n";
    cout << "Have a great day!";
    
    return 0;
}