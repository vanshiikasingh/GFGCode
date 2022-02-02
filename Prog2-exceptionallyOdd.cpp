// Prob 1: All the elements in an unsorted array appears even no of times except one. Find that element.

#include <iostream>
using namespace std;

class Solution
{
public:
    int getOddOccurrence(int arr[], int n)
    {
        // code here
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res = res ^ arr[i];
        }
        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getOddOccurrence(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
