#include<iostream>
using namespace std;
int main(){
    int n;
    long long int sum=0;
    cout<< "Enter a number: "<<endl;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        sum+=i;
    }
    cout<< "The sum of numbers upto "<<n <<" is "<< sum;
    
}