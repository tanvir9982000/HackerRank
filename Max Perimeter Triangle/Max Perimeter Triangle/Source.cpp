#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long int isDegenarete(vector<int> a)
{ //if degenerate return -1, else return perimeter;
    if(a[0]+a[1]>a[2])
    {
        for(int i=0;i<3;i++)
            cout<<a[i]<<" ";
        cout<<endl;
        return (long int)a[0]+a[1]+a[2];
    }
    else 
        return -1;
}


int main()
{
    int n;
	cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long int maxPeri=-1;
    vector<int> maxTriangle(3);
    vector<int> tempTriangle(3);
    for(int i=0;i<n-2;i++)
    {
		tempTriangle[0]=a[i];
		tempTriangle[1]=a[i+1];
		tempTriangle[2]=a[i+2];
        
        long int tempPeri=isDegenarete(tempTriangle);
        if(tempPeri!= -1)
        {
            if(tempPeri>maxPeri)
            {
                maxPeri=tempPeri;
                maxTriangle[0]=tempTriangle[0];
				maxTriangle[1]=tempTriangle[1];
				maxTriangle[2]=tempTriangle[2];
            }
            else if(tempPeri==maxPeri)
            {
                if(tempTriangle[2]>maxTriangle[2])
                {  
                    maxTriangle[0]=tempTriangle[0];
					maxTriangle[1]=tempTriangle[1];
					maxTriangle[2]=tempTriangle[2];
                }
                else if(tempTriangle[2]==maxTriangle[2])
                {
					if(tempTriangle[0]>maxTriangle[0])
					{
						maxTriangle[0]=tempTriangle[0];
						maxTriangle[1]=tempTriangle[1];
						maxTriangle[2]=tempTriangle[2];
					}
                }
            }
        }
        //tempTriangle.clear();
    }
	if(maxPeri==-1) cout<<maxPeri;
	else
	{
		cout<<"\nmax: ";
		for(int i=0;i<3;i++)
			cout<<maxTriangle[i]<<" ";
	}
    system("pause");
    return 0;
}
