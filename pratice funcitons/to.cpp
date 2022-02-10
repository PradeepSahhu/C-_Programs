#include<iostream>
using namespace std;

/*

int decimalToBinary(int num)
{
    int x = 1;
    int ans = 0;

    while(x <= num)
        x*=2;
    x/=2;

    while(x>0)
    {
        int lastDigit = num/x;
        num -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }

    
    return ans;
}
*/

int decimalToOctal(int num)
{
    int x = 1;
    int ans = 0;

    while(x <= num)
        x*=8;
    x/=8;

    while(x>0)
    {
        int lastDigit = num/x;
        num -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;
    }

    
    return ans;
}
string decimalToHexadecimal(int num){

    int x = 1;
    string ans = "";
    while(x<=num)
        x*=16;
    x/=16;

    while(x>0){
        int lastDigit = num/x;
        num-= lastDigit*x;
        x/=16;

        if(lastDigit <= 9)
            ans = ans + to_string(lastDigit);
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);

        }

    }
    return ans;

}

//Decimal to binary...
int main(){
    //int n;
    int n;
    cin>>n;

    //cout<< decimalToBinary(n) << endl;
    //cout<< decimalToOctal(n) << endl;
    cout << decimalToHexadecimal(n) << endl;
}