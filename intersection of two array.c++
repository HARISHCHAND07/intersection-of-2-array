#include<iostream>
#include<vector>
using namespace std;
vector<int> intersection(vector<int> v,vector<int> t){
   vector<int>ans;
   int i=0,j=0;
   while(i<v.size() && j<t.size()){
    if(v[i]==t[j]){
        ans.push_back(v[i]);j++;
    }
    else if(v[i]<t[j]){
        i++;
    }else{
        j++;
    }
   }
  return ans;
}
int main(){
    vector<int>v;
    vector<int>t;
    t.push_back(5);
    t.push_back(0);
    t.push_back(1);
    v.push_back(4);
    v.push_back(8);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
   vector<int>c=intersection(v,t);
    for(int i=0;i<c.size();i++){
        cout<<v.at(i)<<" ";//-------------------at----------------------
    }
    return 0;
}