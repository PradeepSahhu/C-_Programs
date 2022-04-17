#include<iostream>
using namespace std;

void subsets(int arr[], int n){
    //(1<<n) means 2 raise to the power n.
    //Example - 100 = 2**2 (1<<2), 1000 = 2***3(1<<3) and 10000 = 2**4(1<<4)
    int count = 0;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            cout<<i<<j<<"--This is i and J"<<endl;
            if( i & (1<<j)){
                cout<<(1<<j)<< " this is (i<<j)"<<endl;
                cout<<arr[j]<<" This is number";
            }
            count++;

        }cout<<endl;

    }
}

int main(){
    int arr[2] = {1,2};
    subsets(arr,2);
    return 0;

}