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
    string s;
    cin >> s;
    long n;
    cin >> n;
    
    int length = s.length();
    long int count = 0;
    if(n<length)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a') count++;
        }
        cout<<count;
    }
    else
    {
       for(int i=0;i<length;i++)
       {
            if(s[i]=='a') count++;
       }
       long int d = n/length;
       count = count*d;
       for(int i=0;i<n%length ;i++)
       {
           if(s[i]=='a') count++;
       }
       cout<<count;
    }
    return 0;
}
