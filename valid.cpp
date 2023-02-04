/*
Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/

#include <iostream>

int main()
{
    int n;
    std::cout << "Enter a number between 0 and 100: ";
    std::cin >> n;
    while(n<=0||n>=100)
    {
        std::cout<<"\nPlease re-enter: ";
        std::cin>>n;
    }
    int n_squared = n*n;
    std::cout<<"\nNumber Squared is "<<n_squared<<std::endl;
    return 0;
}