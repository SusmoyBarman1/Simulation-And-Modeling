#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,x, m=1000;
	double r;
	
	cout<<"Enter the value of n: ";
	cin>>n;
	
    cout << "Using builtin C function"<<endl;
    freopen("randSeq.txt","w",stdout);
        
    for(int i = 0; i < n; i++) 
	{
        x =  rand() % m;
        r = (double) x / (double) m ;
        cout<<r<<" ";
    }
}
