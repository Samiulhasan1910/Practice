#include<iostream>
#include <limits.h>
using namespace std;

int main()
{
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    int mx=INT_MIN;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mx=max(mx,arr[i][j]);
        }
    }
    cout<<"the max number is :"<<mx;

    return 0;
}
