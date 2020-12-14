/**
 * @file math.cpp
 * @brief Math Implimentation
 * 
 * @author Liam Cannon
 */

#include "math_.h"
#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

stringstream ss;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    if (a == 0)
    {
        return b;
    }

    if (a == b)
    {
        return a;
    }

    if (a > b)
    {
        return gcd(a - b, b);
    }
    return gcd(a, b - a);
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void listPrimes(int n)
{
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i) == 1)
        {
            ss << i << " ";
        }
    }
    cout << ss.str();
    ss.str(" ");
}

double pythag(int a, int b)
{
    return (sqrt((a ^ 2)) + (b ^ 2));
}

void derivative(std::string deriv) {
    int count = 0;
    int coeff;
    int expo;
    for(char c : deriv) {
        if(c == 'x') {
            //cout << deriv.substr(0, count);
            coeff = stoi(deriv.substr(0, count));
            // accounting for x and ^
            expo = stoi(deriv.substr(count+2, deriv.length()-1));
            break;
        }
        count++;
    }
    if(expo == 1) {
        ss << to_string(coeff*expo) << endl;
    }
    else if(expo == 0) {
        ss << to_string(coeff*expo) << endl;
    }
    else{
        ss << to_string(coeff * expo) << "x^" << expo - 1 ;
    }

    cout << ss.str() << endl;
}