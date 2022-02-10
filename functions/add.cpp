#include<iostream>
using namespace std;

void print(int num){
    cout<<num<<endl;
}

int add(int n1, int n2){
    print(n1);
    print(n2);

    int sum = n1 + n2;
    return sum;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<add(a,b)<<endl;
}
//control flow is starting from main() to add() and inside add to print(). print() to add and finally to main()
