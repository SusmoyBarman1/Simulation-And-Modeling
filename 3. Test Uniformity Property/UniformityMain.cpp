#include<bits/stdc++.h>
using namespace std;

int main()
{
   	cout<< "\nStarting Segment 2: Uniformity Test......"<<endl;
   	
   	int n;
   	cout<<"\nEnter the value of N: ";
   	cin>>n;
   	
	int V = 9;
	int K = V + 1;
	int Ei = n/K;
	int steps = 1000/K;
	int start = 0;
	int end = 99;
	int tempStart = start;
	int tempEnd = end;
	
	int Oi[K] = {0};
	
	//cout<<"Ei: "<<Ei<<endl<<endl;
	
    freopen("randSeq.txt","r",stdin);
    freopen("result.txt","w",stdout);
    
    int count = 0;
    for(int i=0; i<n; i++)
    {
    	double val;
    	cin>> val;
    	val = val * 1000;
    	int num = (int) val;
    	//cout<<"Num: "<<num<<endl;
    	
    	for(int j=0; j<K; j++)
    	{
    		if ( num>=start && num<=end)
    		{
    			Oi[j]++;
    			//cout<<num<<endl;
    			//cout<<"Oi["<<j<<"] : "<<Oi[j]<<endl;
			}
			start += steps;
			end += steps;
		}
		start = tempStart;
		end = tempEnd;	

		count ++;
	}
	//cout<<"Count: "<<count<<endl;
	double chi2 = 0;
	cout<<"\n\n Range\t\t Oi \t Ei \t (Oi - Ei)^2 \t (Oi - Ei)^2 / Ei "<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	for(int j=0; j<K; j++)
    {
    	//cout<<"Oi["<<j<<"] : "<<Oi[j]<<endl;
    	int cal1 = pow((Oi[j] - Ei), 2);
    	double cal2 = (double) cal1 / (double) Ei;
    	chi2 += cal2;
    	cout<<start<<"-"<<end<<"\t|\t"<<Oi[j]<<"\t|"<<Ei<<"|\t\t"<<cal1<<"\t|\t"<<cal2<<"\t|"<<endl;
    	
		start += steps;
		end += steps;
	}
	cout<<"\nChi^2 : "<<chi2<<endl;
	
	if (chi2>= 1.73 && chi2<=23.6)
	{
		cout<<"\nACCEPTED"<<endl;
	}
	else
	{
		cout<<"\nNOT ACCEPTED"<<endl;
	}

	return 0;
}
