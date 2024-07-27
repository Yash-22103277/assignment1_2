#include<bits/stdc++.h>

using namespace std;


int main(){


    int n;
    cout<<"Enter the number of elements in array: ";
    cin>>n;

    int ar[n];

    for(int i=0; i<n; i++){
        cin>>ar[i];
    }

    int res;
    for(int i=0; i<n; i++){
        res = (res+ar[i]);
    }

    cout<<"\n"<<res/n;
}






