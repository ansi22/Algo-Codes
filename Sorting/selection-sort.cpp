#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
lli a[10000000];
lli mod=1e9+7;

void selection_sort(vector<lli>& v){
   
   lli n=v.size();
   for(lli i=0;i<n;i++){
    lli mini=i;
    for(lli j=i+1;j<n;j++)
        if(v[j]<v[mini])
            mini=j;
    swap(v[mini],v[i]);
   }
   
}

void solve(){
   
   lli n;
   cin>>n;
   vector<lli> v(n);
   for(lli i=0;i<n;i++)
    cin>>v[i];
   selection_sort(v);
   for(lli i=0;i<n;i++)
    cout<<v[i]<<" ";
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
// TC: O(n*n)
// AS: O(1)