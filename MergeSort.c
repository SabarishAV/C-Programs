#include <stdio.h>

void MergeSort(int *array,int length){
    if(length<=1){
        return;
    }
    int mid = length/2;
    int leftArray[mid];
    int rightArray[length-mid];
    int i=0,j=0;
    for(i=0;i<length;i++){
        if(i<mid){
            leftArray[i] = array[i];
        }else{
            rightArray[j] = array[i];
            j++;
        }
    }
    MergeSort(leftArray,mid);
    MergeSort(rightArray,length-mid);
    Merge(array,leftArray,rightArray,length);
}

void Merge(int *array,int *leftArray,int *rightArray,int length){
    int leftSize = length/2;
    int rightSize = length - leftSize;
    int left=0,right=0,arr=0;
    while(left<leftSize && right<rightSize){
        if(leftArray[left]<rightArray[right]){
            array[arr] = leftArray[left];
            arr++;
            left++;
        }else{
            array[arr] = rightArray[right];
            arr++;
            right++;
        }
    }
    while(left<leftSize){
        array[arr] = leftArray[left];
        arr++;
        left++;
    }
    while(right<rightSize){
        array[arr] = rightArray[right];
        arr++;
        right++;
    }
}

int main(){
    int a[] = {8, 2, 5, 3, 4, 7, 6, 1};
    int l = sizeof(a)/sizeof(a[0]);
    MergeSort(a,l);
    for(int i=0;i<l;i++){
        printf("%d ",a[i]);
    }
}
