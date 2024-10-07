#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name: "<<endl;
    getline(cin,name);
    int age;
    cout<<"Enter your age: "<<endl;
    cin>> age;
    int num;
    cout<<"Enter your favourite number: "<<endl;
    cin>> num;
    cout<< "Hello "<<name<<" ,you are "<< age<<" years old and your favourite number is "<< num <<endl;
    return 0;

}