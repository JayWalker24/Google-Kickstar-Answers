#include <bits/stdc++.h>
using namespace std;

int SherlockParen(int l, int r){
  int num = min(l,r);
  if(num==0){
    return 0;
  }
  return ceil((.5*pow(num,2))+(.5*num));
}


int main(){
  int t,l,r;

  freopen("C-small-practice.in", "r", stdin); // redirects standard input
  freopen("C-small-practice-out.txt", "w", stdout);


  cin>>t;

  for(int i = 0; i<t;i++){
    cin>>l;
    cin>>r;
    int ans = SherlockParen(l,r);
    cout<<"Case #"<<i+1<<": "<<ans<<endl;
  }


  return 0;
}
