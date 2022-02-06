#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a1[100], a_char = 64; 
    char c1[50];  

    for(int i=0; i < 100; i++) {
        a1[i] = 0;   
        printf("%d " ,a1[i] );
    }
    printf("\n");

    for(int i=0; i < 50; i++) {
        c1[i] = 'a';   
        printf("%c " ,c1[i]);
    }

    printf("\n");

    int *din_arr;
    din_arr = (int *)malloc(sizeof(int)*50);

    if(din_arr == NULL) {
        printf("malloc of size %d failed!\n", 50);   
        exit(1);  
    }

    for(int i=0; i < 50; i++) {
        din_arr[i] = 0;
    }

    int N, M;

    scanf("%d",&N);
    scanf("%d",&M);

    int *dim2_din_arr;

    dim2_din_arr = (int *)malloc(sizeof(int)*N*M);

    for(int i=0; i < N; i++) {
        for(int  j=0; j < M; j++) {
            dim2_din_arr[i*M +j] = 0;
        }
    }

    return 0;
}
