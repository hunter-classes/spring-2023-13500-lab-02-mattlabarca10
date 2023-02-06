/*
This program asks the user to input an integer in the range 0 < n < 100. 
If the number is out of range, the program keeps asking to re-enter until a valid 
number is input. After a valid value is obtained, number n squared is printed.
*/
#include <iostream>
int main()
{
    int n;
    std::cout << "Enter a number between 0 and 100: ";
    std::cin >> n;
    while(n<=0||n>=100) //will not square n until n is in range
    {
        std::cout<<"\nPlease re-enter: ";
        std::cin>>n;
    }
    int n_squared = n*n;
    std::cout<<"\nNumber Squared is "<<n_squared<<std::endl;
    return 0;
}