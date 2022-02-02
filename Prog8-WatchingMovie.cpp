class Solution
{
public:
    int solve(int N, int K, vector<int> heights)
    {
        // code here
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            int total = heights[i];
            bool view = true;
            for (int j = 1; j <= K && (j + i) < N; j++)
            {
                if (total <= heights[i + j])
                {
                    view = false;
                    break;
                }
            }
            if (view)
                count++;
        }
        return count;
    }
};
