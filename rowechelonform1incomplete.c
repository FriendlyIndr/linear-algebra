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
            printf("Enter the element: ");
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    int leadingent = 0;
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(a[i][j] != 0) {
                leadingent++;
                for(int k=i+1; k<m; k++) {
                    if(a[k][j] != 0) {
                        for(int l=0; l<n; l++) {
                            a[k][l] = (a[i][j]) * a[k][l] - (a[k][l]) * a[i][l];
                        }
                    }
                }
            }
        }
    }

    printf("\n");
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

