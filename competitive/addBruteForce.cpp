#include<iostream>
using namespace std;

int main(){
  int size;
  cin>>size;
  
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  int l,r;
  cin>>l>>r;
  if(l < 0 || r >= size || r<l){
  cout<<"invalid range"<<endl;
  }
  else{
    int sum = 0;
    for(int i = l;i<=r;i++){
      sum+=arr[i];
     }
     cout<<"sum is: "<<sum<<endl;
  }
  return 0;
  
}
