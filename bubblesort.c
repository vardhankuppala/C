#include<stdio.h>
void swap(int *var1,int *var2)
{
    int temp;
    temp = *var1;
    *var1=*var2;
    *var2=temp;
}
void bubblesort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}
int main()
{
    int arr[]={12,45,89,56,78};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,size);
    display(arr,size);
    return 0;
}
