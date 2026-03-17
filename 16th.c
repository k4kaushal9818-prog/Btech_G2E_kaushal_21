#include<stdio.h>
int main(){
    int a[3][2],i,j;
    printf("enter matrix element\n");
    for(i=0;i<3;i++){
     for(j=0;j<2;j++){
        scanf("%d",&a[i][j]);
     }
    }
    printf("\n matrix elements\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
