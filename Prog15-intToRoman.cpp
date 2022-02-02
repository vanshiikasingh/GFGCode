class Solution
{
public:
    string convertToRoman(int n)
    {
        // code here
        int number[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
        string rom[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};
        int i = 12; // start from last number;
        string result = "";
        while (n > 0)
        {
            int div = n / number[i]; // getting quotient
            n = n % number[i];       // getting remainder

            while (div--)
            {
                result += rom[i];
            }
            i--;
        }
        return result;
    }
};
