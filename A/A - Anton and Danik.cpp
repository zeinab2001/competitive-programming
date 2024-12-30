#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n,d=0,a=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='D')
        d++;
        else if(s[i]=='A')
        a++;
    }
    if(a>d)
    cout<<"Anton";
    else if(a<d)
    cout<<"Danik";
    else
    cout<<"Friendship";
    
   
        return 0;
}
 