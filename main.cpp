/*Write a program that consists of two files, main.cpp and funcs.cpp. 
You will also need a header file named funcs.h.
In funcs.cpp write a void function named print_interval(int L,int U) that will accept two integer parameters and will print the output as specified in the main lab. Test this function by calling it from the main function which should be defined in main.cpp.

Make sure to include sufficient tests to from main to show that this works.

Recall that you can compile this program by typing g++ main.cpp
  funcs.cpp and then running ./a.out.*/
  
  #include <iostream>
  #include "funcs.h"
  
  int main()
  {
    print_interval(-5,10);
    return 0;
  }