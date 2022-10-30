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
    vector<int> a(n);
    for(int i=0; i<n; ++i){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; ++i){
        cout<<a[i]<<" ";
    }
    cout<<endl;

// return next element if given value
    auto it = upper_bound(a.begin(), a.end(), 5);
    if(it == a.end()){
        cout<<"Not Found";
        return 0;
    }
    cout<<(*it)<<endl;
    // in case of 26 it return "Not Found"
}