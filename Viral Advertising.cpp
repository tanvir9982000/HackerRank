#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int sum=0;
    int like=0;
    int dislike=0;
    int init=5;
    int received=init;
    
    for(int i=1;i<=n;i++){
        like = floor(received/2);
        dislike= received-like;
        sum = sum+like;
        received=like*3;
        //cout<<like<<" ";
    }
    
    cout<<sum;
    return 0;
}
