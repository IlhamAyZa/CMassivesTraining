#include <iostream>
#include <cmath>
using namespace std;

int findMinID(int arr[]){
    int min = arr[0], id = 0;
    for(int i = 1; i < sizeof(arr); i++){
        if(min > arr[i]){
            min = arr[i];
            id = i;
        }
    }

    return id;
}

int findMaxID(int arr[]){
    int max = arr[0], id = 0;
    for(int i = 1; i < sizeof(arr); i++){
        if(max < arr[i]){
            max = arr[i];
            id = i;
        }
    }

    return id;
}

int main()
{

    //1

    int array1[20];

    for (int i = 0; i < 20; i++){
        array1[i] = rand()%40 - 20;
    }

    for(int n : array1){
        cout << n << " ";
    }
    cout << endl;

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            if(i == j){
                j++;
            }

            if(abs(array1[i] - array1[j]) == 1){
                
                cout << array1[i] << " / " << array1[j] << endl;
                
                i = 20;
                j = 20;
            }
            
        }
        
    }

    for(int n : array1){
        cout << n << " ";
    }
    cout << endl;

    //2

    int count = 0;

    for (int i = 1; i < 19; i++){
        if (array1[i-1] < array1[i] && array1[i] > array1[i+1])
        {
            count ++;
        }
        
    }

    cout << count;

    //3

    int temp_num;

    for (int i = 0; i < 19; i+= 2)
    {
        temp_num = array1[i];
        array1[i] = array1[i+1];
        array1[i+1] = temp_num;
    }   
    

    for(int n : array1){
        cout << n << " ";
    }
    cout << endl;

    //4
    int id1, id2;

    id1 = findMaxID(array1);
    id2 = findMinID(array1);

    temp_num = array1[id1];
    array1[id1] = array1[id2];
    array1[id1] = temp_num;

    for(int n : array1){
        cout << n << " ";
    }
    cout << endl;

    //5 
    
    int code_of_Ch, ;
    char aChar;
    bool resume;
    char arrOfChars[100];
    
    for (int i = 0; i < 100; i++)
    {
        code_of_Ch = 65 + rand()%55;
        arrOfChars[i] = code_of_Ch;
    }
    
    for(char n : arrOfChars){
        cout << n << " ";
    }
    cout << endl;

    for (int i = 65; i < 120; i++)
    {
        char = i;
        resume = true;

        while (resume)
        {
            
            

        }
    }
    

    return 0;
}
