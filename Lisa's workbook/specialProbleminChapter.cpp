#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k,t[101]={};
    int chapter=1;
    int special=0;
    int page=1;
    cin>>n>>k; //no of chapter, max num of problem per page
    for(int i=0;i<n;i++)
        cin>>t[i];
    for(int i=0;i<n;i++)
    {
        int startProblemIndex=1;
        int endProblemIndex;
        if(k<=t[i]) // we need more than 1 page
        {
            //handle startProblem, endProblem, page
            int problemLeftInChapter=t[i];
            while(problemLeftInChapter>0)
            {
                endProblemIndex=min(t[i],startProblemIndex+k-1);
                if(startProblemIndex<=page && page<=endProblemIndex)
                {
                    special++;
                    cout<<"found "<<special<<" in page"<<page<<endl;
                }
                page++;
                int problemInPage=endProblemIndex-startProblemIndex+1;
                problemLeftInChapter=problemLeftInChapter-problemInPage;
                if(problemLeftInChapter>0)
                    startProblemIndex=endProblemIndex+1;
            }
        }
        else
        {
            endProblemIndex = min(k, t[i]);
            if(startProblemIndex<=page && page<=endProblemIndex)
            {
                special++;
                cout<<"found "<<special<<" in page"<<page<<endl;
            }
            page++;
        }

    }
    cout<<special;
    system("pause");
    return 0;
}
