#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxNo=0; //max possible value.
    int minNo=0;  //min possible value.
    for(int i=0;i<n;i++){
        /*if(array[i]>maxNo){
            maxNo = arr[i];
        }
        if(array[i]<minNo)
        {
            minNo = arr[i];
        }*/

        //Alternative way for time complexity...
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);

    }
    cout<<maxNo<<" "<<minNo<<endl;
    return 0;
    
    
}