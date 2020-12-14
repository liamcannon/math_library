/**
 * @file math_driver.cpp
 * @brief math library driver
 * 
 * @author Liam Cannon
 * @date 12/13/2020
 */

#include "math_.h"
#include <iostream>
//#include <boost/algorithm/string.hpp>

using namespace std;
//using namespace boost;


int main()
{
    // displays functionality basically a tldr man page
    string function;
    cout << "Available Functions & Format:\n"
         << "GCD:\n gcd\n 12 8\n"
         << "LCM:\n lcm\n 12 20\n"
         << "Check if n is Prime\n p 2\n"
         << "List all primes to N\n lp 50\n"
         << "Pythagorean Theorem\n pythag\n 4 5\n"
         << "Derivatives\n deriv\n 3x^2\n"; 

    while (1)
    {
        // selects and uses desired function
        string selected, param;
        int a, b, c;
        cin >> selected;
        cin.clear();

        if(selected == "gcd") {
            cin >> a;
            cin >> b;
            cin.clear();
            cout << gcd(a, b) << endl;
        }
        else if(selected == "lcm") {
            cin >> a;
            cin >> b;
            cin.clear();
            cout << lcm(a, b) << endl;;
        }
        else if(selected == "p") {
            cin >> a;
            cin.clear();
            if(isPrime(a))
                cout << "Prime" << endl;
            else
            {
                cout << "Not Prime" << endl;
            }
        }
        else if(selected == "lp") {
            cin >> a;
            cin.clear();
            listPrimes(a);
        }
        else if(selected == "pythag") {
            cin >> a;
            cin >> b;
            cin.clear();
            cout << pythag(a, b) << endl;;
        }
        else if(selected == "deriv") {
            cin >> param;
            cin.clear();
            derivative(param);
        }
        else {
            cout << "Invalid" << endl;
        }
    }
}
