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
    for ( i=1; i<=n; i++) {  // 初始条件 循环继续的条件 循环每轮要做的动作
        fact *= i;
    }

    printf("%d!=%d\n", n, fact);

    return 0;
}