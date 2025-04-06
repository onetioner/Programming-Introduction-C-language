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
        printf("in loop\n");  // 表示程序到这了
        n++;
        x /= 10;
        printf("x=%d, n=%d\n", x, n);  // 输出变量
    }

    printf("%d\n", n);

    return 0;
}