#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, c, x;
	double r;
	int m = 1000;
	
	cout<<"Enter the value of n: ";
	cin>>n;
	
	cout<<"Currently working on LCM"<<endl;
	cout<<"Enter seed, constant multiplier, increment: ";
	cin>> x >> a >> c;
		
	freopen("randSeq.txt","w",stdout);
		
	for(int i=0; i<n; i++)
	{
		x = (a * x + c) % m;
		r = (double) x / (double)m;
		cout<<r<<" ";
	}
	cout<<endl;
	

	return 0;
}
