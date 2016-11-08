#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n, k;
    cin>>n>>k;
    int sum=0;
    int temp;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(i!=k)
            sum=sum+temp;
    }
    int b;
    cin>>b;
    int r = b-(sum/2.0);
    if(r==0) cout<<"Bon Appetit";
    else cout<<r;
    return 0;
}
