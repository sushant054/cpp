#include<bits/stdc++.h>
using namespace std;
/*word 1="abc"
word 2="pqr"...here we print alternate word like "apcq..."*/
int main()
{
int i=0,j=0;
string ans;
string s1="abc";
string s2="pqr";
int sz1=s1.size();
int sz2=s2.size();
while(i<sz1||j<sz2)
{
    if(i<sz1)
    ans+=s1[i++];
    if(j<sz2)
    ans+=s2[j++];
}
cout<<"answer:"<<ans<<endl;
return 0;
}


