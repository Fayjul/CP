// verdict : Need to try more

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n, k, ans=0, a,b,c;

        cin >> n >> k;
        vector<int> mod;
        for(int i = 0; i<k ;i++)
        {
            mod.push_back(0);
        }
        for(int i = 0; i<n; i++)
        {
            cin >> a;
            ans += a/k;
            mod[a%k]++;
        }
//        cout << ans << endl;
//        for(int i = 0; i<k ; i++){
//            cout << mod[i] << " ";
//
//        }
//        cout << endl;
        for(int i = 1; i<k; i++)
        {
            //cout << i << " mod i" << mod[i] << " ans " << ans << endl;
            if(k-i == i)
            {
                a = mod[i]/2;
                ans+= a;
                break;
            }
            a = min(mod[i], mod[k-i]);
            ans += a;
            mod[i] -= a;
            mod[k-i] -= a;
            if(k-i > i){
                    if(i+1 != k-i)
                        mod[k-i-1] += mod[k-i];
               // mod[k-i] =0;
            }
            if(i > k-i)
            {
                a = mod[i]/2;
                ans+= a;
                break;
            }
          //   cout << i << " " << ans << endl;

        }

        cout <<ans <<  endl;
    }
}
