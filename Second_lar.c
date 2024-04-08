//SECOND LARGEST ELEMENT
#include <stdio.h>
int main()
{
    int a[6]={10,60,5,67,49,34};
    int f=a[0],i,s,n=6;
    for(i=0;i<n;i++){
        if(a[i]>f){
            s=f;
            f=a[i];
        }
    }
    printf("%d",s);

    return 0;
}
