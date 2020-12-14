/**
 * @file math.h
 * @brief Math Library declaration
 * 
 * @author Liam Cannon
 * 
 * @assignment final project
 */
#ifndef MATH_H
#define MATH_H

#include <string>
int gcd(int a, int b);
/**
 * @brief finds the greatestCommonDenominator of two numbers 
 * @date 12/12/2020
 * @return returns the greatest common devisor of two numbers
 * @param a is the first number for the gcd
 * @param b is the second number for the gcd
*/
int lcm(int a, int b);
/**
 * @brief finds least common multiple of two numbers
 * @date 12/12/2020
 * @return returns least common multiple of two numbers
 * @param a is first input
 * @param b is second input
*/
bool isPrime(int n);
/**
 * @brief finds whether the number is prime or not
 * @date 12/12/2020
 * @return returns true or false
 * @param n is number to check for prime
*/
void listPrimes(int n);
/**
 * @brief lists prime numbers to n
 * @date 12/12/2020
 * @return returns list of prime numbers to n
 * @param n is the number the function will list primes up to
*/
double pythag(int a, int b);
/**
 * @brief finds c in the pythagorean theorem
 * @date 12/12/2020
 * @return returns c in the pythag theorem
 * @param a first line on triangle
 * @param b second line of triangle
*/

void derivative(std::string deriv);
/**
 * @brief quick derivative calculator
 * @date 12/12/2020
 * @return returns derivative of input
 * @param deriv input derivative
*/
#endif