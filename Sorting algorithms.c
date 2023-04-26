#include <stdio.h>

void Bubble(int a[], int n){
    int passes, comparisions, i, j;
    int temp;
    passes = n-1;
    comparisions = n-1;
    
    for(i=0; i<passes; i++)
    {
        for(j=0;j<comparisions-i;j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

void Insertion(int a[], int n)
{
    int i, j, small;
    for (i=1;i<n;i++)
    {
        small = a[i];
        for (j = i-1; j>=0 && small < a[j]; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=small;
    }
}

void Selection(int a[], int n)
{
    int i, j, s, t;
    for (i = 0; i<n;i++)
    {
        s = i;
        for (j=i+1;j<n;j++)
        {
            if (a[s]>a[j])
            {
                s = j;
            }
        }
        if (i!=s)
        {
            t = a[i];
            a[i] = a[s];
            a[s] = t;
        }
    }
}

void del(int arr[],int n,int k)
{
    int i, j, temp;
    for(i=0;i<n;i++)
    {
        if (arr[i] == k)
        {
            for (j=i;j<n-1;j++)
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main()
{
    int i;
    int arr[9] = {45, 35, 86, 14, 82, 44, 62, 16, 24};
    del(arr, 9, 14);
    //Selection(arr, 8);
    for(i=0;i<8;i++){
        printf("\n%d", arr[i]);
    }
}
