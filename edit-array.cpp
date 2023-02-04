/*Write a program edit-array.cpp that creates an array of 10 integers, 
and provides the user with an interface to edit any of its elements. 
Specifically, it should work as follows:

Create an array myData of 10 integers.
Fill all its cells with value 1 (using a for loop).
Print all elements of the array on the screen.
Ask the user to input the cell index i, and its new value v.
If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, 
and go back to the step 3. Otherwise, if index i is out of range, the program exits.*/

#include <iostream>
int main()
{
    const int SIZE = 10;
    int myData[SIZE];
    for(int i = 0; i < SIZE; i++){
        myData[i] = 1;
    } 
    int i;
    int v;
    for(int i = 0; i < SIZE; i++)
        std::cout << myData[i] << " ";
    do{
    std::cout << std::endl;
    std::cout<<"\nInput index: ";
    std::cin>>i;
    std::cout<<"\nInput value: ";
    std::cin>>v;
    if(i<0||i>SIZE-1){
        std::cout<<"\nIndex out of range. Exit.";
        return 0;
    }
    else
        myData[i] = v;
        std::cout<<std::endl;
        for(int i = 0; i < SIZE; i++)
            std::cout << myData[i] << " ";
    } while (i>=0 || i<=SIZE-1);
    return 0;
}