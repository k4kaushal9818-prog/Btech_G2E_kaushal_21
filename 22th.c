#include <stdio.h>
int main() {
    int num, sum = 0, onesPlace;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) {
        onesPlace = num % 10;   
        sum += onesPlace;       
        num = num / 10;         
    }
    printf("Sum of digits = %d\n", sum);

    return 0;
}
