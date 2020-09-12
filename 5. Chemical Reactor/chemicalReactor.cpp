#include<bits/stdc++.h>
using namespace std;

int main()
{
    double T = 5, dt = 0.1;
    int N = ceil(T / dt);
    double a[N + 2], b[N + 2], c[N + 2];
    double k1, k2;

    cout << "Enter k1: ";
    cin >> k1;
    cout << "Enter k2: ";
    cin >> k2;
    cout << "Enter initial amount of A: ";
    cin >> a[0];
    cout << "Enter initial amount of B: ";
    cin >> b[0];
    c[0] = 0;
    
    for(int i = 1; i <= N; i++)
	 {
        a[i] = a[i - 1] + (k2 * c[i-1] - k1 * a[i-1] * b[i-1]) * dt;
        b[i] = b[i - 1] + (k2 * c[i-1] - k1 * a[i-1] * b[i-1]) * dt;
        c[i] = c[i - 1] + (2 * k1 * a[i-1] * b[i-1] - 2 * k2 * c[i-1]) * dt;
    }

    cout << "TIME\tA(I)\tB(I)\tC(I)\n";
    
    for(int i = 0; i <= N; i++) 
	{
        cout << i * dt << "\t" << a[i] << "\t" << b[i] << "\t" << c[i] <<endl;
    }
    
    freopen("result.txt", "w", stdout);
    
    for(int i = 0; i <= N; i++) 
	{
        cout << i * dt << "\t" << a[i] << "\t" << b[i] << "\t" << c[i] <<endl;
    }
    
    return 0;
}
