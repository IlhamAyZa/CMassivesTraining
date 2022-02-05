#include <iostream>
using namespace std;

int main()
{
    int code_of_A = 65;
    int arr[5] = { 7, 9, -12, 0, 18};
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    char alphabet[26];

    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = code_of_A;
        cout << alphabet[i] << " ";
        code_of_A++;
    }
    
    //1
    int massProb1[20] ={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    for(int c : massProb1){
        cout << c << " ";
    }
    
    cout << endl;

    //2
    int massProb2[20];
    for (int i = 0; i < 20; i++){
        massProb2[i] = rand() % 100;
    }
    
    for(int c : massProb2){
        cout << c << " ";
    }
    
    cout << endl;

    //3
    char massProb3[9] = {'a', 'b', 'c', 'a', 'b', 'c', 'a', 'b', 'c'};
    char temp_char ;

    temp_char = massProb3[0];
    massProb3[0] = massProb3[ sizeof(massProb3) -1];
    massProb3[sizeof(massProb3) -1] = temp_char;
    
    for(char c : massProb3){
        cout << c << " ";
    }
    
    cout << endl;

    //4
    double massProb4[5], sum = 0, prod = 1;

    for (int i = 0; i < 5; i++)
    {
        massProb4[i] = (rand()%10)/10.0;
    }

    for (int i = 0; i < 5; i++)
    {
        sum += massProb4[i];
        prod *= massProb4[i];
    }

    cout << "Sum :" << sum << " , Product " << prod << endl;

    //5
    int massProb5[20];

    for (int i = 0; i < 20; i++)
    {
        massProb5[i] = massProb1[i] + massProb2[i];
    }
    
    for(int c : massProb5){
        cout << c << " ";
    }
    
    cout << endl;

    return 0;
}