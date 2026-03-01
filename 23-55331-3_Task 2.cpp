#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter your 1st number : ";
    cin>>a;
    cout<<"Enter your 2nd number : ";
    cin>>b;
    cout<<"Enter your 3rd number : ";
    cin>>c;
    cout<<endl;
    if(a>b && a>c){
        cout<<a<< "is the largest number"<<endl;
        if(a%2==0){
            cout<<"The number is even"<<endl;
        }
        else{
            cout<<"The number is odd"<<endl;
        }
    }
    if(b>a && b>c){
        cout<<b <<"is the largest number"<<endl;
        if(b%2==0){
            cout<<"The number is even"<<endl;
        }
        else{
            cout<<"The number is odd"<<endl;
        }
    }
    if(c>a && c>b){
        cout<<c<<" is the largest number"<<endl;
        if(c%2==0){
            cout<<"The number is even"<<endl;
        }
        else{
            cout<<"The number is odd"<<endl;
        }
    }

}
