#include<iostream>
using namespace std;
 
void merge(int a[],int si,int mid,int ei){
    int i,j,k;
    int n1 = mid-si+1;
    int n2 = end-mid;

    int lar[n1],rar[n2];

    for(int i=0;i<n;i++){
        lar[i]=a
    }
}
void mergeSort(int a[],int si,int ei){
    if(si<ei){
        int mid = (si + ei)/2;
        mergeSort(a,si,mid);
        mergeSort(a,mid+1,ei);
        merge(a,si,mid,ei);
    }
}

int main()
{

return 0;
}