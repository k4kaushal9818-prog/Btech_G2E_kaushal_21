#include <stdio.h>
int main(){
    int a[10],size, i, largest, position;
    printf("\n please enter the size of an array\n");
    scanf("%d", &size);
    printf("\nplease enter %d element of an array: \n", size);
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=1; i<size; i++){
        if(largest<a[i]){
            largest=a[i];
            position=i;
        }
    }
    printf("\nlargest element in an array=%d", largest);
    printf("\nindex position of the largest element=%d", position);
    return 0;

}
