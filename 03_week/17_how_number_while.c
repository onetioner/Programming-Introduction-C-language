//
// Created by onesion on 2025/4/6.
//

#include <stdio.h>

int main()
{
    int x;
    int n = 0;

    scanf("%d", &x);

    n++;
    x /= 10;
    while ( x > 0 ) {
        n++;
    }

    printf("%d\n", n);

    return 0;
}