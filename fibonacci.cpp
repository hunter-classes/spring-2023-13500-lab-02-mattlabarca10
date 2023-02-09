//This program outputs the first 60 fibonacci numbers, or at least tries to... (check comment at the bottom)

#include <iostream>

int main()
{
    const int SIZE = 60;
    int fib[SIZE];
    fib[0] = 0;
    std::cout<<fib[0]<<std::endl;
    fib[1] = 1; //0 & 1 are the first two fibonacci numbers
    std::cout<<fib[1]<<std::endl;
    for(int i = 2; i < SIZE; i++)
    {
        fib[i]=fib[i-1]+fib[i-2]; //fibonacci numbers are the sum of the last two
        std::cout<<fib[i]<<std::endl;
    }
    return 0;
}
/* When you approach the two billions, you are going out of the range of what
the data type of an integer (int) can store hence why the output becomes 
incorrect when in that range.*/