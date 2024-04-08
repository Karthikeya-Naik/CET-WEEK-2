//Consecutive 1's
#include <stdio.h>

int main()
{
    int c=0,n=15;
    int r=0;
    int a[15]={1,1,1,1,0,1,1,0,1,1,1,1,1,1,0};
    for(int i=0;i<n;i++){
        if(a[i]==0){
            c=0;
        }
        else{
            c++;
            r=r>c?r:c;
        }
    }
    printf("%d",r);

    return 0;
}
