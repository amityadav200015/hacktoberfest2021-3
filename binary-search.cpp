#include<iostream>
using namespace std;


int binarysearch(int a[],int l,int h,int data){  // binary search algorithm
    while(l <=h){
        int mid = (l+h)/2;

        if(a[mid]==data){
            return mid;
        }
        if(data > a[mid]){
            l = mid+1;
        }
        else{
            h = mid - 1;
        }

        }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int data;   //element to find
    cin>>data;
    int a[n];
    for(int i=0;i<n;i++){       //input sorted array only
        cin>>a[i];
    }


    int low = 0;
    int high = n-1;
    int t = binarysearch(a,low,high,data);
    cout<<t;
        
}