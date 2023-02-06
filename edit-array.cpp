/*This program creates an array of 10 integers, and provides the user with an interface
to edit any of its elements by inputing the index they want the change and the value
to replace it with. This continues until index i is out of range, then the program exits.*/
#include <iostream>
int main()
{
    const int SIZE = 10;
    int myData[SIZE];
    for(int i = 0; i < SIZE; i++){ //prints original array of 10 1's
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
        if(i<0||i>SIZE-1){  //accounts for indexes out of range
            std::cout<<"\nIndex out of range. Exit.";
        }
        else{ 
            myData[i] = v; //replaces the original myData[i] with v
            std::cout<<std::endl;
            for(int i = 0; i < SIZE; i++){
                std::cout << myData[i] << " "; //prints new array each time value is changed
            }
        }
    }while (i>=0 && i<=SIZE-1); //ends loop when index i is out of range
    return 0;
}