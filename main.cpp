#include<iostream>
#include<string>
#include<string.h>
using namespace std;
string str;

char deal(int x)
{
    bool list[100];
    memset(list,0,sizeof(list));
    if(x==0)
    {
        if(str[x+1]!='?')
            list[str[x+1]-'a']=1;
    }
    else if(x==str.length())
    {

        if(str[x-1]!='?')
        list[str[x-1]-'a']=1;
    }
    else if (x+1<str.length())
    {

        if(str[x-1]!='?')
        list[str[x-1]-'a']=1;

        if(str[x+1]!='?')
        list[str[x+1]-'a']=1;
    }
    for(int i=0;i<3;i++)
    {
        if(list[i]==0)
        {
            return 'a'+i;
        }
    }
}



bool check()
{
    cin>>str;
    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i]==str[i+1])
            return false;
    }
    return true;
}





int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str;
        for(int j=0;j<str.length();j++)
        {
            if(str[j]=='?')
            {
                str[j]=deal(j);
            }
        }
        if(check())
        {
            cout<<str<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}
