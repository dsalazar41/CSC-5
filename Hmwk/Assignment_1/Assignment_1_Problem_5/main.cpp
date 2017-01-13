#include <iostream>
using namespace std;

int main()
{
    /*
    This problem is from Savitch's textbook and is practice program problem #5. 
     */
    int length, width, totalLength;
    
    cout << "Hello. \n";
            
    cout << "Press return after entering a number.\n";
    cout << "Enter the length (in feet) of the enclosed area:\n";
    
    cin >> length;
    
    cout << "Enter the width (in feet) of the enclosed area:\n";
    cin >> width;
    totalLength = 2 * length + 2 * width;
    cout << "If your enclosed area is ";
    cout << length;
    cout << " feet long\n";
    cout << "and ";
    cout << width;
    cout << " feet wide, then\n";
    cout << "you need ";
    cout << totalLength;
    cout << " feet of fence.\n";
    
    cout << "Good-bye.\n";
    
    return 0;
    
}
