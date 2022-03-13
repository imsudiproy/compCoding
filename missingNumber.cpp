#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long sum = (n*(n + 1LL))/2;
    n--;
    while(n--)
    {
       
        int b;
        cin>>b;
        sum-=b;
    }
    cout<<sum;
}