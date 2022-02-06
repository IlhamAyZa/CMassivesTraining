#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a1[100], a_char = 64; 
    char c1[50];  

    for(i=0; i < 100; i++) {
        a1[i] = rand() % 100 + 1 ;   
    }

    for (int a : a1){
        printf("%d " ,a );
    }
    printf("\n");

    for(i=0; i < 50; i++) {
        c1[i] = a_char + rand() % 26 ;   
    }

    for(char c : c1){
        printf("%c " ,c);
    }

    printf("\n");

    int matrix[50][50];

    for(i=0; i < 50; i++) {
        for(j=0; j < 50; j++) {
            matrix[i][j] = rand()%100;
        }
    }

    int *din_arr;
    din_arr = (int *)malloc(sizeof(int)*50);

    if(p_array == NULL) {
        printf("malloc of size %d failed!\n", 50);   
        exit(1);  
    }

    for(i=0; i < 50; i++) {
        p_array[i] = rand() % 100;
    }

    int N, M;

    scanf("%d",&N);
    scanf("%d",&M);

    int *dim2_din_arr;

    dim2_din_arr = (int *)malloc(sizeof(int)*N*M);

    for(i=0; i < N; i++) {
        for(j=0; j < M; j++) {
            dim2_din_arr[i*M +j] = 0;
        }
    }

    return 0;
}
