//
// Created by onesion on 2025/4/6.
//

#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int n = 0;
    do {
        x /= 10;
        n ++;
    } while (x > 0);

    printf("%d", n);

    return 0;
}