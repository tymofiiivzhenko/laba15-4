#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, N, sum = 0;

    printf("Enter the size of the massif: ");
    scanf("%d", &N);

    int* A = (int*)malloc(N * sizeof(int));

    printf("Enter the elements of the massif:\n");
    for (i = 0; i < N; ++i) {
        printf("Element %d: ", i + 1);
        scanf("%d", &A[i]);
        sum = sum + A[i];
    }

    printf("The sum is %d\n", sum);

    free(A);

    return 420;
}