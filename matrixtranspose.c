#include <stdio.h>

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
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int b[n][m];

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix:\n");
    for(int j=0; j<n; j++) {
        for(int i=0; i<m; i++) {
            printf("%d ", b[j][i]);
        }
        printf("\n");
    }

    return 0;
}


