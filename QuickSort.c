#include <stdio.h>

void Qsort(int a[],int low,int high){
    if(low<high){
        int pivot = partition(a,low,high);
        Qsort(a,low,pivot-1);
        Qsort(a,pivot+1,high);
    }
}

int partition(int a[],int low,int high){
    int i = low-1,temp;
    for(int j=low;j<high;j++){
        if(a[j]<a[high]){
            i++;
            temp = a[j];
            a[j] = a[i];
            a[i] = temp;
        }
    }
    i++;
    temp = a[i];
    a[i] = a[high];
    a[high] = temp;
    
    return i; //pivot
}

int main(){
    int a[] = {10, 7, 8, 9, 1, 5};
    Qsort(a,0,5);
    for(int i=0;i<=5;i++){
        printf("%d\t",a[i]);
    }
}
