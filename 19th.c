#include <stdio.h>

int main()
{
    char x;
    printf("ENTER THE CHARACTER :- ");
    scanf("%c",&x);
    if(x=='a'||x=='A' || x=='e'||x=='E' || x=='i'||x=='I' || x=='o'||x=='O' || x=='u'||x=='U' ) {
        printf("CHARACTER ENTERED IS VOWEL.");
    }
    else{
        printf("CHARACTER ENTERED IS CONSONANT.");
    }
    

    return 0;
}
