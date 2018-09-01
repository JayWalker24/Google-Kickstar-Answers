#include <bits/stdc++.h>
using namespace std;


string uniqueChar(const vector<string>& names){
  unordered_map<string,int> numChar;
  for( const string& name:names){
      unordered_map<char,bool> occur;
      for(char ch:name){
        if(ch!=' ')
          occur[ch] = true;
      }
      numChar[name] = occur.size();
      //cout<<occur.size()<<endl;
  }
  string maxName;
  int MaxCount = -1;
  for(auto keys:numChar){
    if(keys.second>MaxCount){
      MaxCount = keys.second;
      maxName = keys.first;
    }
    if(keys.second==MaxCount){
      if(keys.first<maxName){
        maxName = keys.first;
      }
    }
  }
  return maxName;
}


int main(){
  freopen("data.in","r",stdin);
  freopen("doctordoom.txt","w",stdout);
  //cout<<"Juice World"<<endl;
  int numCase;
  cin>>numCase;
  //for each case #
  for(int num = 0; num<numCase; num++){
    int numNames = 0;
    cin>>numNames;
    vector<string> llama;
    for(int i = 0; i<numNames;i++){
      string name;
      cin>>name;
      llama.push_back(name);
    }
    string Unique = uniqueChar(llama);
    cout<<"Case #"<<num+1<<": "<<Unique<<endl;
  }

}
