//
// Created by onesion on 2025/4/6.
//

#include <stdio.h>

int main()
{
    int price = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);

    int change = 100 - price;

    printf("找您%d元。\n", change);

    return 0;
}