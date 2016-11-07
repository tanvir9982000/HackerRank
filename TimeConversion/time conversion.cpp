#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int main(){
    string time;
    int carry=0, hh=0,h1,h2;
    //cin >> time;
	time="07:05:45PM";
    int len = time.length();
    if (time.at(len-2)=='P')
    {
        
        h2 = (int)time.at(1)-'0';
        h1 = (int)time.at(0)-'0';
        if(h1==1 && h2 ==2) 
            time.replace(len-2,2,2,'\0');
        else
        {
            hh=(h1*10+h2+12)%24;
            h1 = hh/10 + '0';
            h2=hh%10 + '0';
            time.replace(0,1,1, (char)h1);
            time.replace(1,1,1, (char)h2);
            time.replace(len-2,2,2,'\0');
        }

    }
    else
    {
        h2 = (int)time.at(1)-'0';
        h1 = (int)time.at(0)-'0';
        hh=(h1*10+h2+12)%12;
        h1 = hh/10 + '0';
        h2=hh%10 + '0';
        time.replace(0,1,1, (char)h1);
        time.replace(1,1,1, (char)h2);
        time.replace(len-2,2,2,'\0');
		
    }
	time=time.substr(0,len-2);
    cout<<time<<endl;
	cout<<time.length();
	cout<<"*********\n";
	system("pause");
    return 0;
}