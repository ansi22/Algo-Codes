#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
lli a[10000000];
lli mod=1e9+7;

lli ter(vector<lli>& v,lli tar){
   
   lli st=0,en=v.size()-1;
   while(st<=en){
    lli mid1=st+(en-st)/3;
    lli mid2=en-(en-st)/3;
    if(v[mid1]==tar)
        return mid1;
    if(v[mid2]==tar)
        return mid2;
    if(tar<v[mid1])
        en=mid1-1;
    else if(tar>v[mid2])
        st=mid2+1;
    else{
        st=mid1+1;
        en=mid2-1;
    }
   }
  return -1;
}

void solve(){
   
   lli n,s;
   cin>>n>>s;
   vector<lli> v(n);
   for(lli i=0;i<n;i++)
    cin>>v[i];
   sort(v.begin(),v.end());
   lli tempo=ter(v,s);
   if(tempo==-1)
    cout<<"NOT PRESENT"<<"\n";
   else 
    cout<<"PRESENT AT "<<tempo+1<<"\n";
}


int main(){
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    fastio
    lli t=1;
    // cin>>t;
    while(t--){
     solve();
    }
    return 0;
}