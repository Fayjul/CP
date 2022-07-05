// verdict: Accepted

#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a, lowest, position=0;

        cin >> n;
        cin >> a;
        lowest = a;
        for(int i = 0; i<n-1; i++)
        {
            cin >> a;
            if(a< lowest)
            {
                lowest = a;
                position = i+1;
            }
        }
        if(n%2 == 1)
        {
            cout << "Mike" << endl;
        }
        else{
            if(position%2 == 1)
                cout << "Mike" << endl;
            else
                cout << "Joe" << endl;
        }

    }
    return 0;
}
