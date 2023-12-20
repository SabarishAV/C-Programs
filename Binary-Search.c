#include <stdio.h>

int main()
{
int size,i,j;
printf("Enter array size\n");
scanf("%d",&size);
int a[size];
printf("Enter array elements\n");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);
}
for(i=0;i<size;i++){
    for(j=0;j<size-i;j++){
        if(a[j+1] < a[j]){
    
    a[j] = a[j]+a[j+1];
    a[j+1] = a[j] - a[j+1];
    a[j] = a[j] - a[j+1];
        }
    
}
}
printf("Sorted array =>\t");
for(i=0;i<size;i++){
    printf("%d\t",a[i]);
}
int key;
printf("Enter key\t");
scanf("%d",&key);
i=0;
j=size-1;
int mid;
while(i<=j){
    mid = (i+j)/2;
    if(a[mid]==key){
        printf("%d found at %d\n",key,mid+1);
        break;
    }else if(key<a[mid]){
        j = mid-1;
    }else if(key>a[mid]){
        i = mid+1;
    }
}
if(i>j){
    printf("%d not found\n",key);
}
}
