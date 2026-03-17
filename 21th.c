#include <stdio.h>
#include <math.h>
int main() {
    int num1, num2, num3, num4, num5;
    int sum,percentage;
    printf("Enter marks of 5 subjects (OUT OF 100):-\n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    sum = num1 + num2 + num3 + num4 + num5;
    percentage = sum / 5 ;
    printf("Sum of marks = %d\n", sum);
    printf("Percentage = %d\n", percentage);
    
    if (100>=percentage >=90){
        printf("Congratulations! You got 'A' Grade.");
    }
     else if (percentage >=80){
        printf("You got 'B' Grade.");
    }

 else if (percentage >=60){
        printf("You got 'C' Grade.");
    }

 else if (60>=percentage ){
        printf("You got 'D' Grade.");
    }

    return 0;
}
