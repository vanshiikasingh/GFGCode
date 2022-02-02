class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
        vector<int> v(100001, 0);
        for (int i = 0; i < n; i++)
        {
            v[arr[i]]++;
        }
        int ans = INT_MIN;
        int cnt = 0;
        for (auto x : v)
        {
            if (x > 0)
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        return max(ans, cnt);
    }
};
