#include<iostream>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pi = arr[high];
    int i=low-1;
    for(int j=low;j<high;j++)
    {
        if(arr[j]<pi)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    i++;
    int temp=arr[i];
    arr[i]=pi;
    arr[high]=temp;
    return i;
}
void QuickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pidx = partition(arr,low,high);
        QuickSort(arr,low,pidx-1);
        QuickSort(arr,pidx+1,high);
    }
}


int main()
{
int arr[]={6,3,9,5,2,8};
int n= 6;

QuickSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i];
}
return 0;
}