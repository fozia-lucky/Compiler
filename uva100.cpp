#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cctype>
#include<stack>
#include<queue>
#include<list>
#include<vector>
#include<map>
#include<sstream>
#include<cmath>
#include<bitset>
#include<utility>
#include<set>
#include<numeric>
#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define pi acos(-1.0)
#define N 1000000
#define long long LL

using namespace  std;

int main()
{
    int m,n;
    while(scanf("%d %d",&m,&n)!=EOF)
    {
        int temp_m=m;
        int temp_n=n;
        if (m>n)
        {
            swap(m,n);
        }
        int c,c_max=0;
        while(m<=n)
        {
            int l=m;
            c=1;
            while(l!=1)
            {
               if(l%2==1)
               {
                   l=(3*l)+1;
               }
               else
                l/=2;
               c++;
            }
            if(c_max<c)
            {
                c_max=c;
            }
            m++;
        }
        cout<<temp_m<<" "<<temp_n<<" "<<c_max<<endl;
    }
    return 0;
}
