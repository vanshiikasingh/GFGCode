class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long sum = 0;
        long long maxSum = 0;
        int count = 0;
        int maxVal = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            maxSum = max(sum, maxSum);
            if (sum < 0)
            {
                sum = 0;
            }
            if (arr[i] < 0)
            {
                count++;
            }
            maxVal = max(maxVal, arr[i]);
        }
        if (count == n)
        {
            maxSum = maxVal;
        }
        return maxSum;
    }
};
