#include <stdio.h>

int main() {
    int n, i, num, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
