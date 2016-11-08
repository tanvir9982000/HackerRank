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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    
    int aout=0,oout=0;
    for(int i=0;i<m;i++)
    {
        int temp=a+apple[i];
        if(temp >=s && temp<=t ) aout++;
    }
    for(int i=0;i<n;i++)
    {
        int temp=b+orange[i];
        if(temp >=s && temp<=t ) oout++;
    }
    cout<<aout<<endl;
    cout<<oout;
    return 0;
}
