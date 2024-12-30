#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n,a,b,c,num=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if(!((a==0&&b==0)||(a==0&&c==0)||(b==0&&c==0)))
        num++;
    }
    
   cout<<num;
        return 0;
}