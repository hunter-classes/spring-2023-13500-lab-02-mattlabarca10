//Includes a function print_interval(int L,int U) that prints each integer in the range L-U
#include <iostream>
#include "funcs.h"
void print_interval(int L,int U)
{
    for(int i = L; i<U; i++)
    {
        std::cout<<i<<" ";
    }
}