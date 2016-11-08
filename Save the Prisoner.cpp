#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,m,s;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>m>>s;
        int m1=m%n; 
        //cout<<m1;
        int id = (m1+s-1);
        if(id==0){id=id+n;}
        else if(id>n){
            id = id - n;
        }
        cout<<id<<endl;
    }
        
    return 0;
}
