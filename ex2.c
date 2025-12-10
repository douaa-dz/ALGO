#include<stdio.h>

int main()
{
    printf("enter sizeof square matrix (n×n) ");
    scanf("%d",&n);
    printf("enter the élément of the matrix: \n");
    for (i=0;i<n;i++) ;
    for(j=0j<n;j++) {
    scanf("%d",&arr[i][j]);
    }
    }
    printf("\n matrix before swapping lower and upper triangles: \n");
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    
    }
    printf('%d',arr[i][j]);
    printf("\n");
    }
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++){
    int temp=arr[i][j];
    arr[i][j]=arr[j][i];
    arr[j][i]=temp;
    }
    }
    for(i=0;i<n;i++){
   for(j=0;j<n;j++){
   printf("%d",arr[i][j]);
   }
   printf("\n");
   }
    
    return 0;
}
