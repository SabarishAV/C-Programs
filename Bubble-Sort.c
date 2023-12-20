#include <stdio.h>

int main()
{
int a[5] = {2,54,13,1,5};
int i,j;
for(i=0;i<4;i++){
    for(j=0;j<4-i;j++){
        if(a[j+1] < a[j]){
    
    a[j] = a[j]+a[j+1];
    a[j+1] = a[j] - a[j+1];
    a[j] = a[j] - a[j+1];
        }
    
}
}
for(i=0;i<5;i++){
    printf("%d\t",a[i]);
}
}
