#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  long long n,k;
  cin>>n>>k;
  long long p=n*(n-1)/2;
  vector<long long> mang(n);
  vector <long long> mang2(p);
  for(auto &i:mang){
    cin>>i;
  }
  sort(mang.begin(),mang.end());
  int count=0;
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      mang2.push_back(mang[j]-mang[i]);
    }
  }
  sort(mang2.begin(),mang2.end());
  // vector<long long> it;
  // for (std::vector<long long>::iterator it=mang2.begin(); it!=mang2.end(); ++it){
  //     if(*it>=k) break;
  //     count++;
  //   }
  for(auto i:mang2){
    if(i<k) count++;
    else break;
  }
    cout<<count<<endl;
  }
  return 0;
}
