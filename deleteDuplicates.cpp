#include <iostream>
using namespace std;

class Solution
{
public:
    int remove_duplicate(int a[], int n)
    {
        // code here
        if (n == 0 || n == 1)
            return n;

        int j = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                a[j++] = a[i];
            }
        }
        a[j++] = a[n - 1];
        return j;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int a[N];
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        int n = ob.remove_duplicate(a, N);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
