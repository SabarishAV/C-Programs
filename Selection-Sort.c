#include <stdio.h>

int main()
{
int a[5] = {2,54,13,1,5};
int i,j,min;
for(i=0;i<4;i++){
    min = i;
    for(j=i+1;j<5;j++){
        if(a[j] < a[min]){;
            min = j;
        }
    }
    a[i] = a[min]+a[i];
    a[min] = a[i] - a[min];
    a[i] = a[i] - a[min];
    
}
for(i=0;i<5;i++){
    printf("%d\t",a[i]);
}
}
