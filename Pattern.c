#include<stdio.h>
int main(){

    int a,i,n;
    printf("Enter a value: ");
    scanf("%d", &a);
    for(i=0; i<a; i++){
        for(n=1;n<=i; n++){
        printf("* ");


    }
    printf("\n");
    }

return 0;
}
