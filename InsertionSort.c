#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertionSort(int arr[], int n)
{
    int curr, prev, temp ;
    for(int i=1;i<n;i++)
    {
        curr= i;
        temp = arr[curr];
        prev = i-1;
        for( ; prev>=0&&arr[prev]>temp; prev--)
        {
            arr[prev+1] = arr[prev];
        }
        arr[prev+1]=temp;
    }
}

void scanArray(int arr[], int n)
{
    srand(time(0));
    for(int i=0;i<n;i++)
    arr[i] = rand()%10+1;
}

int printArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int num[n];
    scanArray(num,n);
    insertionSort(num,n);
    printArray(num,n);
}