#include<iostream>

using namespace std;

int lb(int a[], int n, int x) {
    int l = 0;
    int h = n-1;
    int mid,ans;
    if(a[l]>=x){
    	return -1;
    }
    while (l <=h) {
        int mid = (l + h) / 2;
        if (x <= a[mid]) {
            ans=mid;
            h=mid-1;
        } else {
            l=mid+1;
        }
    }
    return ans;
}
int main()
{
	int a[]={2,5,8,11,23};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<lb(a,n,20);
	return 0;
}