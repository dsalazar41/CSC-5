#include <iostream>
using namespace std;
#include <string>
using namespace std;

int main()
{
    cout << "Hello!\n";
    cout << "If you are looking for the roots of any quadratic equation,\n";
    cout << "you have come to the right place.\n";
    cout << "All you have to tell me are the coefficients of each term.\n";
    cout << "For example, if you said a=1, b=2, and c=3,\n";
    cout << "I would think that you were talking about the quadratic equation:\n";
    cout << "x^2 + 2x + 3.\n";
    cout << "Let's get started!\n";
    cout << "After each response, please hit Enter.\n";
    
    int a, b, c;
    double x1, x2;
    cout << "Why don't you tell me the coefficient of x squared?\n";
    cin >> a;
    cout << "Great! Now, what is the coefficient of x?\n";
    cin >> b;
    cout << "And the constant?\n";
    cin >> c;
    
    string CorrectInfo;
    cout << "So to be sure, you are looking for the roots of the\n";
    cout << "quadratic equation:\n";
    cout << a;
    cout << "* x^2 + ";
    cout << b;
    cout << " * x + ";
    cout << c;
    cout << ".\n";
    cout << "Is that correct? Please type yes or no.\n";
    cin >> CorrectInfo;
    while ((CorrectInfo == "No") || (CorrectInfo == "no"))
    {
        cout << "Okay, let's try that again then.\n";
        cout << "What is the coefficient of x squared?\n";
        cin >> a;
        cout << "Great! Now, what is the coefficient of x?\n";
        cin >> b;
        cout << "And the constant?\n";
        cin >> c;
        cout << "So to be sure, you are looking for the roots of the\n";
        cout << "quadratic equation:\n";
        cout << a;
        cout << "* x^2 + ";
        cout << b;
        cout << " * x + ";
        cout << c;
        cout << ".\n";
        cout << "Is that correct? Please type yes or no.\n";
        cin >> CorrectInfo;
    }
    
    cout << "Awesome!\n";
    cout << "Allow me to crunch some numbers.\n";
    
    int discriminant;
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        cout << "I don't yet know how to square root, so I will leave them\n";
        cout << "as such, for you.\n";
        cout << "The roots of your equation are x = ";
        cout << (-1 * b) / (2 * a);
        cout << " + (sqrt(";
        cout << discriminant;
        cout << ") / ";
        cout << 2 * a;
        cout << "),\n";
        cout << "and x = ";
        cout << (-1 * b) / (2 * a);
        cout << " - (sqrt(";
        cout << discriminant;
        cout << ") / ";
        cout << 2 * a;
        cout << ").\n";
        cout << "It is important to note that the divisor 2a only\n";
        cout << "applies to the square root term.\n";
    }
    else if (discriminant == 0)
    {
        cout << "The root of your equation is x = ";
        cout << (-1 * b) / (2 * a);
        cout << ".\n";
    }
    else
    {
        cout << "Well, well, well... complex roots I see!\n";
        cout << "No matter! However,\n";
        cout << "I do not yet know how to square roots, so I will leave\n";
        cout << "them as such, for you.\n";
        cout << "The roots of your equation are x = ";
        cout << (-1 * b) / (2 * a);
        cout << " + i(sqrt(";
        cout << (-1 * discriminant);
        cout << ") / ";
        cout << 2 * a;
        cout << ").\n";
        cout << "It is important to note that the divisor 2a only\n";
        cout << "applies to the square root term.\n";
    }
    
    cout << "I hope I have served you well!\n";
    
    
    return 0;
}