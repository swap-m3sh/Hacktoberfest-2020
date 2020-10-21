#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0)
    {
      long long int m,r,l,sum,sum1;
      string s,k;
      cin >> s>>k;
      m=s.size();
      sum1=0;
      for(long long int i=0;i<m;i++)
       {
        l=pow(2,m-i-1);
        s[i]=(s[i]-48)*l;
        sum1 = sum1 + s[i];
      }
      cout << sum1<<endl;
      sum=0;
      r=k.size();
      for(long long int i=0;i<r;i++)
      {
          l=pow(2,r-i-1);
          k[i]=(k[i]-48)*l;
          sum = sum + k[i];

      }
      cout << sum<<endl;
    }
    t--;


}
