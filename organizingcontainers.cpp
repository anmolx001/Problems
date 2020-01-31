#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main() 
{
  int t; 
  cin >> t;
 while( t--) 
  {
      int n;
      cin >> n;
      ll r[n], c[n];
      int i, j;
      for(i=0; i<n; i++) 
      r[i] = c[i] = 0;
      for(i=0; i<n; i++ ) 
      {
           for(j=0;j<n;j++) 
           {
                int x;
                cin >> x;
                r[i] += x;
                c[j] += x;
           }
       }
       sort(r, r+n);
       sort(c, c+n);
       bool o = true;
       for(i=0; i<n ;i++) 
       {
           if(r[i] != c[i])
            {
              o = false;
              break;
           }
       }
       if(o==true)
           cout<<"Possible"<<endl;
       else
           cout<<"Impossible"<<endl;
 }
 return 0;
}
