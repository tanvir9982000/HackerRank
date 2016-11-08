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
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    
    vector<int> d(n);
    int index=0;
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++)
    {
        if(index==m-1) {
            d[i]= abs(i-c[index]);
        }
        else{
            int d1 = abs(i-c[index]);
            int d2 = abs(i-c[index+1]);
            if(d2<d1) index++;
            d[i]=min(d1,d2);
        }
        //cout<<d[i]<<" ";
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<d[i]) max=d[i];
    }
    cout<<max;
    return 0;
}
