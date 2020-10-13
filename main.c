#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int array[10];
    int i;
    for(i=0;i<10;++i){
        array[i]=rand();
    }
    array[9]=0;
    
    printf("array = [");
    for(i=0;i<10;++i){
        printf("%d, ",array[i]);
    }
    printf("\b\b] \n");

    int copy[10];
    int *a1p = array;
    int *a2p = copy;
    for(i=0;i<10;++i){
        *(a2p+i) = *(a1p + 9 - i);
    }
    
    printf("copy = [");
    for(i=0;i<10;++i){
        printf("%d, ",copy[i]);
    }
    printf("\b\b] \n");
}