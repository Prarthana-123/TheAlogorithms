#include<iostream>
using namespace std;
int bs(int* arr, int n, int x){
	int high=n,low=0;
	int mid;

	while(high>=low){
		mid = low+((high-low)/2);
		if(arr[mid]==x){
			return mid;
		}
		else if(arr[mid] > x){
			high = mid-1;
		}
		else if(arr[mid] < x){
			low = mid+1;
		}
	}
	return -1;
}

int main(){

	int arr[]={1,2,3,4,6,7,8};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<bs(arr,n,7);
	return 0;
}