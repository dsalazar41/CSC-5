#include <iostream>
using namespace std;

int main()
{
    int c1 = 0, c2 = 0, c3 = 0, c4 = 1;
    bool Found = 0;
    bool test1 = 0, test2 = 0, test3 = 0, test4 = 0;
    while (!Found)
    {
        if ((c1 != c2) && (c1 != c3) && (c1 != c4) && (c2 != c3) && (c2 != c4) && (c3 != c4))
        {
            test1 = 1;
        }
        if (c1 == c3 * 3)
        {
            test2 = 1;
        }
        if (c4 % 2 == 1)
        {
            test3 = 1;
        }
        if (c1 + c2 + c3 + c4 == 27)
        {
            test4 = 1;
        }
    
        if ((test1) && (test2) && (test3) && (test4))
        {
            Found = 1;
        }
        else 
        {
            test1 = 0;
            test2 = 0;
            test3 = 0;
            test4 = 0;
            if (c4 < 9)
            {
                c4 = c4 + 2;
            }
            else
            {
                c4 = 1;
                
                if (c3 < 9)
                {
                    c3 = c3 + 1;
                }
                else
                {
                    c3 = 0;
                
                    if (c2 < 9)
                    {
                        c2 = c2 + 1;
                    }
                    else
                    {
                        c2 = 0;
                        c1 = c1 + 1;
                    }
                }
            }
        }
    }
    
    float number = (c1 * 1000) + (c2 * 100) + (c3 * 10) + (c4 * 1);
    cout << "The Riddler will strike at \n";
    cout << number;
    cout << " on Pennsylvania!\n";
}