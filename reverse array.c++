#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[]={20,10,40,80,45,60};
	int n=sizeof(a)/sizeof(a[0]);
	int i=0,j=n-1;
	while(i<j){
	    int t=a[i];
	    a[i]=a[j];
	    a[j]=t;
	    i++;
	    j--;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	

}
