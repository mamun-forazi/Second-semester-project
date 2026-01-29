#include<stdio.h>
int main()
{
    int first[10][10], second[10][10], result[10][10],r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enter rows and column for first matrix:  ");
    scanf("%d %d", &r1,&c1);

    printf("Enter rows and column for second matrix:  ");
    scanf("%d %d", &r2,&c2);


    while(c1!=r2)
    {
        printf("Error !! Column of first matrix not equal to row of second\n");

        printf("Enter rows and column for first matrix:  ");
        scanf("%d %d", &r1,&c1);

        printf("Enter rows and column for first matrix:  ");
        scanf("%d %d", &r2,&c2);
    }

//first matrix input
    printf("\nEnter element for first matrix\n");

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("First matrix [%d][%d]=\t",i,j);

            scanf("%d",&first[i][j]);
        }
    }

//Second matrix input
    printf("\nEnter element for second matrix\n");


    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Second matrix [%d][%d]=\t",i,j);
            scanf("%d",&second[i][j]);
        }
    }

//Multiplying matrix
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<c1; k++)
            {
                sum=sum+first[i][k] * second[k][j];

            }
            result[i][j] = sum;
                sum=0;
        }

    }



//First matrix print
    printf("\n\nFirst matrix \n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c1; j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }

//Second matrix print
    printf("\n\nFirst matrix \n");
    for(i=0; i<r2; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }


    //Print Result of matrix
    printf("\n\nResult of matrix \n");
    for(i=0; i<r1; i++)
    {

        for(j=0; j<c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }



    return 0;
}
