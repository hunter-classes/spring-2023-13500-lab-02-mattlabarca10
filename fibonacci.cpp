#include <iostream>

int main()
{
    const int SIZE = 60;
    int fib[SIZE];
    fib[0] = 0;
    std::cout<<fib[0]<<std::endl;
    fib[1] = 1;
    std::cout<<fib[1]<<std::endl;
    for(int i = 2; i < SIZE; i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
        std::cout<<fib[i]<<std::endl;
    }
    return 0;
}
// When you approach the two billions, you are going out of the range of what
// an integer can store.