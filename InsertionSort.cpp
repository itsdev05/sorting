#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
            
        }
        arr[j+1]=temp;
    }
}

int main()
{
  int arr[]={7,2,5,6,4,3,1};
    InsertionSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
return 0;
}