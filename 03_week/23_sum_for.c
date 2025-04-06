//
// Created by onesion on 2025/4/6.
//

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    int fact = 1;

    for ( int i=1; i<=n; i++ ) {
        fact *= 1;
    }

    printf("%d!=%d\n", n, fact);

    return 0;
}