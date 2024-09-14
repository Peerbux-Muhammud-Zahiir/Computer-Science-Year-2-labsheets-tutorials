#include <stdio.h>
#include <string.h>

int main(){

    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int size= sizeof(array)/sizeof(int);

    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }






    printf("\n");
    int array2[2][3]={
        {1,2,3},
        {4,5,6}
    };

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",array2[i][j]);
        }
    }


    printf("\n");



    char cars[3][10] = {"Toyota","BMW","Porsche"};
    int size1 = sizeof(cars)/sizeof(cars[0]);
    for(int i=0;i<size1;i++){
        printf("%s\n",cars[i]);
    }

    strcpy(cars[1],"Tesla");
    printf("\n");

    for(int i=0;i<size1;i++){
        printf("%s\n",cars[i]);
    }
    
    return 0;





}