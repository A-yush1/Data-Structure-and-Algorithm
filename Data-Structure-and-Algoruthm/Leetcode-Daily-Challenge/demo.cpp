#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

ios_base::sync_with_stdio(false); 
    cin.tie(NULL);    

  #ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  #endif

 ll n;
 cin>>n;
 int arr[n];
 for(int i=0; i<n; i++)
 {
  cin>>arr[i];
 }

 for(int i=0; i<n; i++)
 cout<<arr[i]<<"* ";

  
return 0;  
}