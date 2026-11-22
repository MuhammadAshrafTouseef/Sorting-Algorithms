#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void scanArray(int arr[], int n)
{
    srand(time(0));
    for(int i=0;i<n;i++)
    arr[i] = rand()%10+1;
}
void selectionSort(int arr[],int n)
{
    int s;
    for(int i=0;i<n-1;i++)
    {
        s= i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[s])
            {
                s = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[s];
        arr[s] = temp;
    }
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
    selectionSort(num,n);
    printArray(num,n);
}