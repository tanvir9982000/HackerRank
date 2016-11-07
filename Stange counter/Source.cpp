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
    long long int t;
    cin >> t;
	cout<<t<<endl;
    long long int initvalue = 3;
    long long int time=1;
    long long int value = initvalue;
	bool hasShortCut=true;
    for(;time<t;)
    {
		//cout<<time<<" "<<value<<endl;
        if( (time+value)< t && hasShortCut== true) 
        {
            time= time+value;
			value = value*2;
            initvalue = value;
			continue;
        }
        //cout<<time<<" "<<value<<endl;
        if(value==1)
        {
            //cout<<time<<" "<<value<<endl;
            value = initvalue*2;
            initvalue = value;
			time++;
			hasShortCut=false;
            continue;
        }
        value--;
        time++;
		hasShortCut=false;
    }
    cout<<value<<endl;
	system("pause");
    return 0;
}