#include<bits/stdc++.h>
using namespace std;

long long int n;

void solve()
{
    //cout << "Allahu Akbar" << endl;


    cin >> n;
    priority_queue<long long, vector<long long>, greater<long long> > pq;
	long long S = 0;

	for(int i = 1;i <= n;i++){
		long long x; cin >> x;
		S += x;
		pq.push(x);

		while(S < 0){
			S -= pq.top();
			pq.pop();
		}
	}

	cout << (int) pq.size();


}

int main()
{
    int t=1;


    //cin >> t;
    while(t--)
    {
        solve();
    }
}

