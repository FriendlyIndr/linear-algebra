#include <stdio.h>

void printmat(int m, int n, int a[m][n]);

int main() {

    int m,n;
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);
    int a[m][n];
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("Enter the [%d][%d] element: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nFirst matrix entered:\n");
    printmat(m, n, a);

    int p,q;
    printf("Enter number of rows: ");
    scanf("%d", &p);
    printf("Enter number of columns: ");
    scanf("%d", &q);
    int b[p][q];
    for(int i=0; i<p; i++) {
        for(int j=0; j<q; j++) {
            printf("Enter the [%d][%d] element: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nSecond matrix entered:\n");
    printmat(p, q, b);

    int c[m][n+q];
    if(m == p) {
        for(int i=0; i<m; i++) {
            for(int j=0; j<n+q; j++) {
                if(j<n) {
                    c[i][j] = a[i][j];
                }
                if(j>=n && j<n+q) {
                    c[i][j] = b[i][j-n];
                }
            }
        }
    }

    printf("\nHorizontally merged:\n");
    printmat(m, n+q, c);
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
