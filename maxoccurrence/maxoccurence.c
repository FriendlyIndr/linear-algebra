#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            printf("Enter [%d][%d] element: ", i,j);      //taking a matrix input
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEntered matrix: \n");
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){                           //printing entered matrix
            printf("\t%d", a[i][j]);
        }
        printf("\n");
    }

    int count;
    int maxoccur = a[0][0];
    int maxcount = 0;
    for(int i=0; i<m; i++){                                //accessing each element
        for(int j=0; j<n; j++){
            count = 1;
            for(int p=0; p<m; p++){                        //checking for repetitions
                for(int q=0; q<n; q++){
                    if(i == p && j == q){                  //skipping the element being checked
                        continue;
                    }
                    else{
                        if(a[i][j] == a[p][q]){            //incrementing the count
                            count++;
                        }
                    }
                }
            }
            if(count > maxcount){
                maxoccur = a[i][j];                        //comparing the current element with the incumbent most occurring element
                maxcount = count;
            }
        }
    }
    printf("\nThe most frequently occurring element is %d, occurring %d times.", maxoccur, maxcount);
    return 0;
}

// Note: The program does not account for ties between elements.
