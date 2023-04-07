#include <stdio.h>

void printmat(int m, int n, int a[m][n]);

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int a[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("Enter the [%d][%d] element: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEntered matrix:\n");
    printmat(m, n, a);

    int b[n][m];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    printmat(n, m, b);

    return 0;
}

void printmat(int m, int n,int a[m][n]) {
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return;
}
