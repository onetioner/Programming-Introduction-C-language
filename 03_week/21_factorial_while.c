//
// Created by onesion on 2025/4/6.
//

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int fact = 1;

    int i = 1;
    while ( i <= n ) {
        fact *= i;
        i++;
    }

    printf("%d!=%d\n", n, fact);

    return 0;
}