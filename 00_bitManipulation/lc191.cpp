#include <iostream>
using namespace std;

class Solution {
public:
    int hammingWeight(int n) {
        int setBits=0;
        while (n != 0)
        {
            setBits += n&1;
            n >>=1;
        }
        
        return setBits;
    }
};

int main (void)
{
    Solution sol;
    int n = 11;
    cout << sol.hammingWeight(n) << endl;
}