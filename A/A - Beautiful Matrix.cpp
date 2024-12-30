#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
 
int main()
{
    int t[5][5],a=-1,b=-1,n=0;
    
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
{
    cin>>t[i][j];
}

}

for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
{
    if(t[i][j]==1)
    {
        a=i;
        b=j;
    }
}
}

n=abs(a-2)+abs(b-2);
cout<<n;
    
    
   
        return 0;
}