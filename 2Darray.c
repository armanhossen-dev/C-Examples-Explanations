#include<stdio.h>
int main(){
    int matrixA[3][3] = {10,10,10,
                         20,20,20,
                         30,30,30};
    
    int matrixB[3][3] = {1,1,1,
                         2,2,2,
                         3,3,3};
    int sum[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum[i][j]=matrixA[i][j]+matrixB[i][j];
        }
    }
    printf("\nSum:\n");
    printf("\t");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d",sum[i][j]);
            if(j!=2){
                printf(", ");
            }else{
                printf("\n");
                printf("\t");
            }
        }
    }
    return 0;
}


/*
    printf("Matrix A:\n");
    printf("\t");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d",matrixA[i][j]);
            if(j!=2){
                printf(", ");
            }else{
                printf("\n");
                printf("\t");
            }
        }
    }

    printf("\nMatrix B:\n");
    printf("\t");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d",matrixB[i][j]);
            if(j!=2){
                printf(", ");
            }else{
                printf("\n");
                printf("\t");
            }
        }
    }
*/