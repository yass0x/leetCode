#include <iostream>
using namespace std;

class Solution {
public:
    int hammingDistance(int x, int y) {

        return numberOfSetBits(x^y);
    }
private:
    static int numberOfSetBits(int n)
    {
        int setBits = 0;
        while(n)
        {
            n &=(n-1);
            setBits++;
        }
        return setBits;
    }
};

int main (void)
{
    Solution sol;
    int n = 1;
    cout << sol.hammingDistance(1,4) << endl;
     n = 16;
    cout << sol.hammingDistance(3, 1) << endl;
     n = 3;
    /* cout << sol.hammingDistance(n) << endl; */
}