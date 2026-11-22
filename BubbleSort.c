#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubbleSort(int arr[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1]) // descending order sorting 
            {
                temp = arr[j];
                arr[j] = arr[j+1]; /*For ascending order just use > symbol between arr[j] and arr[j+1]*/
                arr[j+1] = temp;
            }
        }
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
    srand(time(0));
    int n;
    scanf("%d",&n);
    int num[n];
    for(int i=0; i<n; i++)
    {
        num[i] = rand()%10+1;
    }
    bubbleSort(num,n);
    printArray(num,n);

}