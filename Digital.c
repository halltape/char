#include <stdio.h>

int main ()
{
    char N;
    scanf("%c", &N);

    if (N > 47 && N < 58){
        printf("digit");
    } else if (N > 64 && N < 91 || N > 96 && N < 123){
        printf("en");
    } else printf("error");

    return 0;
}