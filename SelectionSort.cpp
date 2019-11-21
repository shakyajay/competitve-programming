#include<iostream>

using namespace std;

void printArray(int a[],int n){

    for(int i=0;i<n;i++)
      cout<< a[i]<<" ";
    cout<< endl;
}

void swap(int *i,int *j)
{
    int tmp=*i;
    *i=*j;
    *j=tmp;
}

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex])minIndex=j;
        }
        swap(&arr[minIndex],&arr[i]);
    }
}

int main()
{
    int arr[]={64, 25, 12, 22, 11};
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);

    return 0;
}