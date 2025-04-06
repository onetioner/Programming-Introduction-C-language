//
// Created by onesion on 2025/4/6.
//

#include <stdio.h>

int main()
{
    int a;
    a = 10;

    printf("a++=%d\n", a++);  // 10，表达式的值是count原来的值
    printf("a=%d\n", a);  // 11

    printf("++a=%d\n", ++a);  // 12，表达式的值是count++以后的值
    printf("a=%d\n", a);  // 12

    return 0;
}