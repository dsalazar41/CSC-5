#include <iostream>
using namespace std;

int main()
{
    /* This is problem 4 of the programming projects from Savitch's textbook. */
    
    int time, distance, acceleration;
    
    acceleration = 32;
    
    cout << "Heyo!\n";
    cout << "This program will tell you how far an object will drop after a certain amount of seconds!\n";
    cout << "Pretty cool, huh?\n";
    cout << "How long (in seconds) has this mysterious object been falling for? \n";
    cin >> time;
    cout << "Great!\n";
    
    distance = (acceleration * time * time)/2;
    
    cout << "Alright! It looks like your object will have fallen ";
    cout << distance;
    cout << " feet.\n";
    cout << "Come back soon!";
    
    return 0;
}
