#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int i,j,k;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        char non_t=s[0];
        bool flag = false;
        for(i=3;i<s.size();i++)
        if(s[i]==non_t)
        {
            flag=true;
            break;
        }
        if(flag==0)
            cout<<"This grammer has no Left factoring"<<s<<endl;
        else
        {
            cout<<"After eliminating Left Factoring Of "<<s<<endl;
            int pos=0;
            string p1,p2,mg,ng;
            for(j=3;s[j]!='|';j++)
                p1.pb(s[j]);
            for(k=j+1;k<s.size();k++)
                p2.pb(s[k]);
            for(j=0;j<p1.size() || j < p2.size(); j++)
                if(p1[j]==p2[j])
            {
                mg.pb(p1[j]);
                pos=j+1;
            }
            mg.pb(non_t);
            mg.pb(' `');
            for(j=pos;j<p1.size();j++)
                ng.pb(p1[j]);
            for(j=pos;j<p2.size();j++)
            {
                if(p2[j] !='|')
                   ng.pb(p2[j]);

                    else
                    while(j<p2.size())
                {
                    mg.pb(p2[j]);
                    j++;
                }
            }
            cout<<non_t<<"->"<<mg<<endl;
            cout<<non_t<<"->"<<ng<<endl;
        }

    }
    return 0;
}
