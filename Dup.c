//Duplicates
#include <stdio.h>

int main()
{
    int a[10]={2,2,2,2,2,3,3,4,4,1};
    for(int i=0;i<10;i++){
        if(a[i]!=a[i+1]){
            printf("%d ",a[i]);
        }
    }
    return 0;
}
