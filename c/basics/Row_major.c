#include <stdio.h>

int main()
{
    int base, w, i, j, address, m, n;

    printf("No. of rows: ");
    scanf("%d", &m);

    printf("No. of columns: ");
    scanf("%d", &n);

    printf("Enter Base Address: ");
    scanf("%d", &base);

    printf("Enter the element size in bytes: ");
    scanf("%d", &w);

    printf("Enter row index and column index: ");
    scanf("%d %d", &i, &j);

    address = base + w * ((i * n) + j);

    printf("Address of A[%d][%d] = %d\n", i, j, address);

    return 0;
}