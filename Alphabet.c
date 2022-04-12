#include <stdio.h>

int main ()
{
    int N;
    scanf("%d", &N);
    char str[N*2];                                  //char str[20]; //fgets (str, 20, stdin); //fflush(stdin);

    for(int i = 0; i < N*2; i++){
        scanf("%c", &str[i]);
    }
    int sum = 0, k = 65; N = 26;
        for(int j = 0; j < N; j++) {
            for (int i = 0; i < N; i++) {
                if (str[i] == k || str[i] == k + 32) {
                    sum += 1;
                }
            }
            printf("%d ", sum);
            sum = 0;
            k += 1;
        }
    return 0;
}