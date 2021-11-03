#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
lli a[10000000];
lli mod=1e9+7;

void bubble_sort(vector<lli>& v){
   
   lli n=v.size();
   bool swapped;
   for(lli i=0;i<n-1;i++){
    swapped=0;
    for(lli j=0;j<n-i-1;j++)
        if(v[j]>v[j+1]){
            swap(v[j],v[j+1]);
            swapped=1;
        }
        if(swapped==0)
            break;
   }
   
}

void solve(){
   
   lli n;
   cin>>n;
   vector<lli> v(n);
   for(lli i=0;i<n;i++)
    cin>>v[i];
   bubble_sort(v);
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
// TC: 
// best:O(n)
// avg:O(n*n)
// AS: O(1)
// sorted inplace