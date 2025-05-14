#include <bits/stdc++.h>
using namespace std;

int f[1<<26],m,l,i;
string s;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    memset(f,-1,sizeof f);f[0]=-1;
    cin>>i>>s;
    for(i=0;i<s.size();++i){
        m^=1<<(s[i]-'a');
        if(f[m]!=-1)l=max(l,i-f[m]);
        else f[m]=i;
        for(int t=m;t;t&=t-1)
            if(f[m^(t&-t)]!=-1)
                l=max(l,i-f[m^(t&-t)]);
    }
    cout<<max(l,1);
}