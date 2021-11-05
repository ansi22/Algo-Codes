#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define lli long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
lli a[10000000];
lli mod=1e9+7;

void merge(lli l, lli r, lli mid){
   
   lli ls=mid-l+1;
   lli la[ls+1];

   lli rs=r-mid;
   lli ra[rs+1];

   for(lli i=0;i<ls;i++)
      la[i]=a[i+l];
   for(lli i=0;i<rs;i++)
      ra[i]=a[i+mid+1];

   // condition may occur such that some part of left array or right array
   // remains while merging two, in that case we have to consume them at last 
   // to avoid that we kept INT_MAX at last position of both the arrays.
   la[ls]=INT_MAX; 
   ra[rs]=INT_MAX;

   lli li=0;
   lli ri=0;
   // code for merging
   for(lli i=l;i<=r;i++){
      if(la[li]<=ra[ri]){
         a[i]=la[li];
         li++;
      }
      else{
         a[i]=ra[ri];
         ri++;
      }
   }

}

void merge_sort(lli l,lli r){

   if(l==r) return;

   lli mid=l+(r-l)/2;
   merge_sort(l,mid);
   merge_sort(mid+1,r);
   merge(l,r,mid);
}

void solve(){
   
   lli n;
   cin>>n;
   for(lli i=0;i<n;i++)
    cin>>a[i];
   merge_sort(0,n-1);
   for(lli i=0;i<n;i++)
      cout<<a[i]<<" ";
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
// TC: O(n*logn): 
// AS: O(n)
// paradigm: divide and conquer