#include<iostream>
using namespace std;
int main()
{
int x,c,q=-1,p;
cin>>c>>p;
int i,s=0;
while(q)
{
q=(c*p)/100;
s+=c;
c=c-q;
}
cout<<s;
return 0;
}
