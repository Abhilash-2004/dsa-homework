#include <stdio.h>

int main() {
    int num , reversed = 0, originalNum, remainder;
    printf("enter num");
    scanf("%d",&num);
    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversed)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
    return 0;
}
