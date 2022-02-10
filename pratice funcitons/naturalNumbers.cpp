#include<iostream>
using namespace std;

//using for loop.
/*int sum(int num){
    int natural = 0;
    for(int i=1;i<=num; i++){
        natural+=i;
    }
    return natural;
}*/

//using sum formula.
int value(int num){
    int natural = num*(num + 1)/2;
    return natural;
}
int main(){
    int n;
    cin>>n;
    cout<<value(n)<<endl;
}