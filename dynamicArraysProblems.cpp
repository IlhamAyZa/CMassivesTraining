#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    //1
    int num;

    cout << "How many names would you like to enter? " << endl;
    cin >> num;

    string *Name = new string[num];

    for (int i = 0; i < num; ++i)
    {
        cout << "Enter name # " << i+1 << ": ";
        cin >> Name[i];
    }

    for (int idx = 0; idx < num - 1; ++idx)
    {
        int smallest = idx;

        for (int currIdx = idx + 1; currIdx < num; ++currIdx)
        {
            if (Name[currIdx] < Name[smallest])
                smallest = currIdx;
        }

        swap(Name[idx], Name[smallest]);
    }

    cout << "\nHere is your sorted list:" << endl;

    for (string name : Name){
        cout << name << endl;
    }

    //2
 
    int rows, columns;
 
    cout << "Enter rows number: " << endl;
    cin >> rows; 
    cout << "Enter columns number" << endl;
    cin >> columns;
 
    int** apples = new int* [rows];
 
    for (int i = 0; i < rows; i++) {
 
        apples[i] = new int [columns];
    }
     
    for (int i = 0; i < rows; i++) {
 
        for (int j = 0; j < columns; j++) {
 
            apples[i][j] = rand() % 10 + 1;
        }
    }
 
    cout << "Here is what we got: " << endl;
    for (int i = 0; i < rows; i++) {
         
        for (int j = 0; j < columns; j++) {
 
            cout << apples[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] apples[i];
    }
 
    cout << endl;
 
    return 0;
}