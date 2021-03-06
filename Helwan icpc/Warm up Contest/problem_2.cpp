/**
 * Problem Describtion:
 * Recently, a chaotic virus Hexadecimal advanced a new theorem which will shake the Universe.
 * She thinks that each Fibonacci number can be represented as sum of three not necessary different Fibonacci numbers.
 * Let's remember how Fibonacci numbers can be calculated. F0 = 0, F1 = 1, and all the next numbers are Fi = Fi - 2 + Fi - 1.
 * So, Fibonacci numbers make a sequence of numbers: 0, 1, 1, 2, 3, 5, 8, 13, ...
 * If you haven't run away from the PC in fear, you have to help the virus.
 * Your task is to divide given Fibonacci number n by three not necessary different Fibonacci numbers or say that it is impossible.
 */

/// Solution:

#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;
    cout<<0<<" "<<0<<" "<<n;
    return 0;
}