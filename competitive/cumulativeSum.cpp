#include<iostream>

using namespace std;

int main(){
	int size;
	cin>>size;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cin>>arr[i];
	}
	for (int i = 1; i < size; i++)
	{
		arr[i]=arr[i]+arr[i-1];
	}
	int l,r;
	cin>>l>>r;
	cout<<arr[r]-(l==0?0:arr[l-1])<<endl;
	return 0;
}