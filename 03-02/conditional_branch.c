#include <stdio.h>

int main(void)
{
    int age = 20;
    if (age < 18) {
        printf("まだ選挙権はありません\n");
    } else {
        printf("投票に行きましょう\n");
    }
}