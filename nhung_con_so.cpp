#include<bits/stdc++.h>

using namespace std;

int timmin(int a[],int n)
{
    int min =a[0];
    for(int i=1 ; i< n; i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}
int main()
{
    int n;
    cin>>n;
    set<int> s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=2; j<=timmin(a,n); j++){
            if(a[i] %j == a[i+1]%j){
                s.insert(j);
        }
    }
    }
    for(set<int>::iterator it = s.begin(); it != s.end(); it++)
        cout<<*it<<" ";



    return 0;
}
