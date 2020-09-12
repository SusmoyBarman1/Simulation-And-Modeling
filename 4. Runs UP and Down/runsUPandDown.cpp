#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the value of N: ";
	cin>>n;
	
	int a = 0;
	double firstNum, secondNum;
	char prev, now;
	prev = '*';
	
	freopen("randSeq.txt","r",stdin);
	freopen("result.txt","w",stdout);
	
	cin>>firstNum;
	
	int count = 0;
	
	while(cin>>secondNum)
	{
		if(firstNum < secondNum)
		{
			now = '-';
			cout<<"- ";
			
		}
		else if(firstNum > secondNum)
		{
			now = '+';
			cout<<"+ ";
		}
		
		if (now != prev || count == 0)
		{
			//cout<<"It is a run, Prev: "<<prev<<" Now: "<<now<<endl;
			a++;
		}
		
//		else
//		{
//			cout<<"Not run, Prev: "<<prev<<" Now: "<<now<<endl;
//		}
		
		prev = now;
		firstNum= secondNum;
		count++;
	}
	cout<<"\n\nTotal Runs: "<<a<<endl;
	
	double N = (int) n;
	double miu = (2*N - 1)/3;
	double var = (16*N - 29)/90;
	double sqrtVar = sqrt(var);
	double Zalpha = 1.96;
	
	double Zo = (a - miu)/sqrtVar;
	
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
