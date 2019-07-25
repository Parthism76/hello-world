#include<stdio.h>
int swap(int* a,int* b)
{
    int temp;
    temp = *a;
     *a = *b;
     *b = temp;

}

    void bubblesort(int arr[],int n)
    {
        int i,j;
        for(i=0;i<n-1;i++)
            for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }
    }
    void printarray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d   ",arr[i]);
    }
}
    int main()
    {
        int arr[]={5,8,9,6,1,4,3};
        int n=sizeof(arr)/sizeof(arr[0]);
        bubblesort(arr,n);
        printf("The sorted array is:\n");
        printarray(arr,n);
        return 0;
    }
