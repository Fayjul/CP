#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Iterative function to find the length of the longest increasing subsequence
// of a given array
int LIS(vector<int> const &arr)
{
    int n = arr.size();

    // base case
    if (n == 0)
    {
        return 0;
    }

    // array to store subproblem solution. `L[i]` stores the length
    // of the longest increasing subsequence that ends with `arr[i]`
    int L[n] = { 0 };

    // the longest increasing subsequence ending at `arr[0]` has length 1
    L[0] = 1;

    // start from the second array element
    for (int i = 1; i < n; i++)
    {
        // do for each element in subarray `arr[0…i-1]`
        for (int j = 0; j < i; j++)
        {
            // find the longest increasing subsequence that ends with `arr[j]`
            // where `arr[j]` is less than the current element `arr[i]`

            if (arr[j] < arr[i] && L[j] > L[i])
            {
                L[i] = L[j];
            }
        }

        // include `arr[i]` in LIS
        L[i]++;
    }

    // find the longest increasing subsequence (having maximum length)
    int lis = INT_MIN;
    for (int x: L)
    {
        lis = max(lis, x);
    }

    return lis;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<int> arr;
        int n,a;
        cin >> n;
        for(int i = 0; i<n; i++)
        {
            cin >> a;
            arr.push_back(a);
        }

        int ans = LIS(arr);
        if(ans == n && n != 1)
            ans--;
        cout << ans << endl;
    }


    return 0;
}
