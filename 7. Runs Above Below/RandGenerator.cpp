#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	cout<<"Working on Segment 1: Random Number Generator......"<<endl<<endl;
	int n, a, c, x=0, controller;
	double r;
	int m = 1000;
	
	cout<<"Enter the value of N: ";
	cin>>n;
	
	cout << "\nEnter 1 to use LCM, 2 to use C builtin library: ";
    cin >> controller;
	
	if (controller == 1)
	{
		cout<<"\nCurrently working on LCM"<<endl;
		cout<<"Enter seed, constant multiplier, increment: ";
		cin>> x >> a >> c;
		
		freopen("randSeq.txt","w",stdout);
		//cout<<n<<endl;
		
		for(int i=0; i<n; i++)
		{
			x = (a * x + c) % m;
			r = (double) x / (double)m;
			cout<<r<<" ";
		}
		cout<<endl;
	}
	
	else if(controller == 2) 
	{
        cout << "Using builtin C function"<<endl;
        freopen("randSeq.txt","w",stdout);
        //cout<<n<<endl;;
        
        for(int i = 0; i < n; i++) 
		{
            x =  rand() % m;
            r = (double) x / (double) m ;
            cout<<r<<" ";
        }
    } 
    
	else 
	{
        cout << "Invalid option"<<endl;
    }
    
    return 0;
}
