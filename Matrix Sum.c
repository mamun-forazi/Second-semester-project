#include<stdio.h>
int main(){
int a[10][10], b[10][10], c[10][10];
int i, j, RowNumber, ColsNumber;
printf("Enter the number of Rows and Cols: ");
scanf("%d %d", &RowNumber, &ColsNumber);

//For A
printf("\n Enter Elyments for A \n");
for(i=0; i<RowNumber; i++){
    for(j=0;j<ColsNumber; j++){
        printf("Enter : A[%d] [%d]= ", i, j);
        scanf("%d", &a[i][j]);
    }

}
for(i=0; i<RowNumber; i++){
    for(j=0;j<ColsNumber; j++){
        printf(" %d ", a[i][j]);
    }
    printf("\n");
}
// For B

printf("\n Enter Elyments for B \n");
for(i=0; i<RowNumber; i++){
    for(j=0;j<ColsNumber; j++){
        printf("Enter : B[%d] [%d]= ", i, j);
        scanf("%d", &b[i][j]);
    }

}
for(i=0; i<RowNumber; i++){
    for(j=0;j<ColsNumber; j++){
        printf(" %d ", b[i][j]);
    }
    printf("\n");
}
//Sum of A&B
for(i=0; i<RowNumber; i++){

    for(j=0;j<ColsNumber; j++){
        c[i][j]=a[i][j]+b[i][j];
    }
}
printf("\n\n Sum of A and B is \n");
for(i=0; i<RowNumber; i++){
    for(j=0;j<ColsNumber; j++){
        printf(" %d ", c[i][j]);
    }
    printf("\n");
}

return 0;
}
