#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
// for ith iteration (counter<n) = (n-1) 
    int counter = 1;
    while(counter<n){  //n-1 iteration. 
    //and with each new iteration their is one less row to swap.
        for(int i=0;i<n-counter;i++){ 
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }

        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}