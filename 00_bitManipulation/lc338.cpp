#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> bitsCountVector;
        for (int  i = 0; i <= n; i++)
        {
            bitsCountVector.push_back(hammingWeight(i));
        }
        return bitsCountVector; 
    }
private:
    static int hammingWeight(int n)
    {
        int sum = 0;
        while (n)
        {
            n&=(n-1);
            sum++;
        } 
        return sum;
    }
};

int main (void)
{
    Solution sol;
    int n = 5;
    vector<int> countingBitsArr = sol.countBits(n);
    cout << "[";
    for (int i = 0; i <= n; i++)
    {
        cout << countingBitsArr[i] << ",";
    }
    cout << "]" << endl;
}