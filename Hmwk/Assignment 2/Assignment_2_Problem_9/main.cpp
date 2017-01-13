#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    cout << "Hello! I am here to serve you.\n";
    cout << "If you input 10 integers, I can return the sum of all\n";
    cout << "the positive numbers from the set, the sum of all\n";
    cout << "of the nonpositive numbers, which includes zero, and the sum\n";
    cout << "of all of the numbers.\n";
    cout << "After each response, please hit Enter.\n";
    
    int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth;
    
    cout << "Please enter your first number.\n";
    cin >> first;
    cout << "Please enter your second number.\n";
    cin >> second;
    cout << "Please enter your third number.\n";
    cin >> third;
    cout << "Please enter your fourth number.\n";
    cin >> fourth;
    cout << "Please enter your fifth number.\n";
    cin >> fifth;
    cout << "Please enter your sixth number.\n";
    cin >> sixth;
    cout << "Please enter your seventh number.\n";
    cin >> seventh;
    cout << "Please enter your eighth number.\n";
    cin >> eighth;
    cout << "Please enter your ninth number.\n";
    cin >> ninth;
    cout << "Please enter your tenth number.\n";
    cin >> tenth;
    
    string Correct_info;
    cout << "To be sure, these are the numbers you chose right?\n";
    cout << first << ",\n" << second << ",\n" << third << ",\n"
            << fourth << ",\n" << fifth << ",\n" << sixth << ",\n" 
            << seventh << ",\n" << eighth << ",\n" << ninth <<
            ",\n" << "and " << tenth << ".\n";
    cout << "Is that correct? Please type yes or no.\n";
    cin >> Correct_info;
    while ((Correct_info == "No") || (Correct_info == "no"))
        {
        cout << "Whoops, let's try that again\n";
        cout << "Please enter your first number.\n";
        cin >> first;
        cout << "Please enter your second number.\n";
        cin >> second;
        cout << "Please enter your third number.\n";
        cin >> third;
        cout << "Please enter your fourth number.\n";
        cin >> fourth;
        cout << "Please enter your fifth number.\n";
        cin >> fifth;
        cout << "Please enter your sixth number.\n";
        cin >> sixth;
        cout << "Please enter your seventh number.\n";
        cin >> seventh;
        cout << "Please enter your eighth number.\n";
        cin >> eighth;
        cout << "Please enter your ninth number.\n";
        cin >> ninth;
        cout << "Please enter your tenth number.\n";
        cin >> tenth;
        
        cout << "To be sure, these are the numbers you chose right?\n";
        cout << first << ",\n" << second << ",\n" << third
             << ",\n" << fourth << ",\n" << fifth
             << ",\n" << sixth << ",\n" << seventh << ",\n"
             << eighth << ",\n" << ninth <<
            ",\n" << "and " << tenth << ".\n";
        cout << "Is that correct? Please type yes or no.\n";
        cin >> Correct_info;
        }
    
    cout << "Great!\n";
    
    int sum_Pos = 0;
    int sum_Neg = 0;
    int sum;
    
    if (first > 0)
        sum_Pos = sum_Pos + first;
    else
        sum_Neg = sum_Neg + first;
    if (second > 0)
        sum_Pos = sum_Pos + second;
    else
        sum_Neg = sum_Neg + second;
    if (third > 0)
        sum_Pos = sum_Pos + third;
    else
        sum_Neg = sum_Neg + third;
    if (fourth > 0)
        sum_Pos = sum_Pos + fourth;
    else
        sum_Neg = sum_Neg + fourth;
    if (fifth > 0)
        sum_Pos = sum_Pos + fifth;
    else
        sum_Neg = sum_Neg + fifth;
    if (sixth > 0)
        sum_Pos = sum_Pos + sixth;
    else
        sum_Neg = sum_Neg + sixth;
    if (seventh > 0)
        sum_Pos = sum_Pos + seventh;
    else
        sum_Neg = sum_Neg + seventh;
    if (eighth > 0)
        sum_Pos = sum_Pos + eighth;
    else
        sum_Neg = sum_Neg + eighth;
    if (ninth > 0)
        sum_Pos = sum_Pos + ninth;
    else
        sum_Neg = sum_Neg + ninth;
    if (tenth > 0)
        sum_Pos = sum_Pos + tenth;
    else
        sum_Neg = sum_Neg + tenth;
    
    sum = first + second + third + fourth + fifth + sixth + seventh
          + eighth + ninth + tenth;
    cout << "The sum of all of your positive numbers are ";
    cout << sum_Pos;
    cout << ",\n";
    cout << "and the sum of your nonpositive numbers are ";
    cout << sum_Neg;
    cout << ".\n";
    cout << "And the sum of all of your numbers is ";
    cout << sum;
    cout << ".\n";
    cout << "I hope I have served you well!\n";
    
    return 0;
}
            
           