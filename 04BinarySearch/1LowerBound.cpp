/*
Input:
6 
4 5 5 25 7 8
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    sort(a, a+n);
    for(int i=0; i<n; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;

// return next element if given value is not in list 
    int *ptr = lower_bound(a, a+n, 5);
// in case of lower bound of 26 it gives Not Found insted of some garbage value
    if(ptr == (a+n)){
        cout<<"Not Found";
        return 0;
    }
    cout<<(*ptr)<<endl; // 5
}