/*
Problem description: https://www.hackerrank.com/challenges/manasa-and-stones
Tanvir Rahman
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void removeDuplicate(vector<int> &temp)
{
	for(int j=0;j<temp.size()-1;j++)
    {
        if(temp[j]==temp[j+1])
            temp.erase(temp.begin()+j);
    }
}
void print(vector<int> current)
{
	for(int i=0;i<current.size();i++)
		cout<<current[i]<<" ";
	cout<<endl;
}

int main() 
{
    int test;
    cin>>test;
    for(int ti=0;ti<test;ti++)
    {
        int n,a,b;
        cin>>n>>a>>b;

        int s=0;
        vector<int> current, temp;
        current.push_back(s);
        for(int k=0;k<n-1;k++)
        {
            for(int i=0;i<current.size();i++)
            {
                temp.push_back(current[i]+a);
                temp.push_back(current[i]+b);
            }
			sort(temp.begin(),temp.end());
			removeDuplicate(temp);
			current.clear();
            current=temp;
            temp.clear(); 
			//cout<<"******current****** :";
			//print(current);
            
        }
        //cout<<"************\n";
        print(current);
    }
	//system("pause");
    return 0;
}
