#include<iostream>
using namespace std;
//Binary Searching using sorted array in c++.

int binarySearching(int arr[],int n, int key){
    int s=0;
    int e=n;
    while(s<=n){
        int mid= (s+e)/2;
        cout<<"mid value is:"<<mid<<endl;

        if(arr[mid]==key){
            return mid;
        }
        else if( arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;

    cout<<binarySearching(arr,n,key)<<endl;


    return 0;
}
//Time comlexity - 0(log n base 2)  -----better because it takes less time.