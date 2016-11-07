#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

bool check(string s)
{
    for(int i=0;i<s.length()-1;i++)
    {
       if(s[i]==s[i+1]) 
       {
           return true;
       }
    }
    return false;
}

int main() {
    string s;
    getline (std::cin,s);
    while(s.length() !=0 && check(s))
    {
       for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                s.erase(i,2);
				if (s.length() ==0) break;
                i=i-1;
            }
        } 

    }
    if (s.length() !=0)   cout << s;
    else cout<<"Empty String";
    return 0;
}