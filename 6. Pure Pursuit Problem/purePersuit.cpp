#include<bits/stdc++.h>
using namespace std;

int main() 
{
    double xf, yf, xb, yb, vf;
    double sint, cost, dist;
    
    cout << "Enter initial position of the fighter (XF, YF): ";
    cin >> xf >> yf;
    
    cout << "Enter velocity of the fighter: ";
    cin >> vf;
    
    int t = 0;
    bool esc = true;

    freopen("input.txt", "r", stdin);    
   	freopen("output.txt", "w", stdout);  
   	
    while(cin >> xb >> yb) 
	{
        cout<< xf << " " << yf <<endl;

        dist = sqrt(pow(yb - yf, 2) + pow(xb - xf, 2));
        sint = (yb - yf) / dist;
        cost = (xb - xf) / dist;
        
        if (dist <= 10) {
            esc = false;
            break;
        }
        xf += (vf * cost);
        yf += (vf * sint);
        t++;
    }
    
    if (esc) 
	{
        cout << "Target escaped\n";
    } 
	else 
	{
        cout << "Caught the bomber at " << t << " minute(s) " << "at a distance of " << dist << " km(s)\n";
    }
    
    return 0;
}
