class Solution
{
public:
    string lookandsay(int n)
    {
        // code here
        if (n == 0)
            return "";
        string result;
        result = "1";
        while (--n)
        {
            string curr = "";
            for (int i = 0; i < result.size(); i++)
            {
                int count = 1;
                while (i + 1 < result.size() && result[i] == result[i + 1])
                {
                    count++;
                    i++;
                }

                curr += to_string(count) + result[i];
            }
            result = curr;
        }
        return result;
    }
};
