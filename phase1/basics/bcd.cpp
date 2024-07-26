#include <iostream>
#include <math.h>
using namespace std;
class numberConversion
{
public:
    int binary, decimal;

    void decimalToBinary1(int num) // approach 1-->by divison method
    {
        binary = 0;
        int r, i = 0;
        while (num != 0)
        {
            r = num % 2;
            binary = binary + r * pow(10, i);
            i++;
            num = num / 2;
        }
        cout << "binary with first appraoch: " << binary;
    }
    void decimalToBinary2(int num) // second method-->btwise & and shift
    {
        binary = 0;
        int r, i = 0;
        while (num != 0)
        {
            r = num & 1;
            binary = binary + r * pow(10, i);
            i++;
            num = num >> 1;
        }
        cout << "\nbinary with second appraoch: " << binary;
    }
    void binaryToDecimal1(int input)
    {
        decimal = 0;
        int i = 0;
        while (input != 0)
        {
            int digit = input % 10;

            if (digit == 1)
            {
                decimal = decimal + pow(2, i);
                // cout << "\ndecimal " << i << ":" << decimal;
            }
            i++;
            input = input / 10;
        }
        cout << "decimal:" << decimal;
    }
};
int main()
{
    numberConversion aa;
    // aa.decimalToBinary1(8);
    // aa.decimalToBinary2(8);
    aa.binaryToDecimal1(1111);
    return 0;
}
