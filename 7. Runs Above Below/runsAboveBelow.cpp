#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of N: ";
	cin>>n;
	
	int b = 0;
	int n1=0, n2=0;
	double mid = 999.0/2;
	double value;
	char prev, now;
	
	prev = '*';
	
	freopen("randSeq.txt","r",stdin);
	freopen("result.txt","w",stdout);
	
	int count = 0;
	
	while(cin>>value)
	{
		value = value * 1000;
		//cout<<"\nMid value: "<<mid<<"  Now value: "<<value<<endl<<endl;
		if(value < mid)
		{
			now = '-';
			cout<<"- ";
			n1++;
			
		}
		else if(value > mid)
		{
			now = '+';
			cout<<"+ ";
			n2++;
		}
		
		if (now != prev || count == 0)
		{
			//cout<<"It is a run, Prev: "<<prev<<" Now: "<<now<<endl;
			b++;
		}
		
//		else
//		{
//			cout<<"Not run, Prev: "<<prev<<" Now: "<<now<<endl;
//		}
		
		prev = now;
		count++;
	}
	cout<<"\n\nTotal Runs: "<<b<<endl;
	
	
	double N1 = (double) n1;
	double N2 = (double) n2;
	double N = N1 + N2;
	
	double miu = (2 * n1 * n2) / N + 0.5;
	double var = sqrt((2.0 * N1 * N2 * (2.0 * N1 * N2 - N)) / (double) (N * N * (N - 1)));
	double sqrtVar = sqrt(var);
	double Zalpha = 1.96;
	
	double Zo = (b - miu)/sqrtVar;
	
	cout<<"Total Observations: "<<N<<endl;
	cout<<"Miu: "<<miu<<endl;
	cout<<"varience: "<<var<<endl;
	cout<<"Zo : "<<Zo<<endl;
	
	if (Zo>= -Zalpha && Zo<=Zalpha)
	{
		cout<<"ACCEPTED"<<endl;
	}
	else
	{
		cout<<"NOT ACCEPTED"<<endl;
	}
	
	
	return 0;
}
