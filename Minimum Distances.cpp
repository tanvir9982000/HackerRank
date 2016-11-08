#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    vector<int> D(n,n+1);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(A[i]==A[j]){
                D[i]=min(D[i],j-i);
                break;
            }
        }
    }
    int minD=n+1;
    for(int i=0;i<n;i++){
        if(minD>D[i]){
            minD=D[i];
        }
    }
    if(minD!=n+1)   cout<<minD;
    else            cout<<-1;
    return 0;
}
