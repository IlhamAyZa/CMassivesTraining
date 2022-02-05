#include <iostream>
using namespace std;

int main()
{

    cout << "Enter a positive integer: ";
    int length;
    cin >> length; 

    int *arr = new int[length];

    int *array = new int[5];
    array[0] = 9;
    array[1] = 7;
    array[2] = 5;
    array[3] = 3;
    array[4] = 1; 
 
    delete[] array; 
    array = 0;
 
    return 0;
}