//Rotation
#include <stdio.h>

int main()
{
    int n,t,j;
    printf("Size of an array : ");
    scanf("%d",&n);
    int a[10]={1,2,3,4,5,6,7};
    int d=3;
    for(int i=0;i<d;i++){
        t=a[0];
        for(j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[j]=t;
    }
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
    return 0;
}
