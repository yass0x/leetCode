#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
        {
            return false;
        }
        return (n&(n-1))? false:true;
    }
};

int main (void)
{
    Solution sol;
    int n = 1;
    cout << sol.isPowerOfTwo(n) << endl;
     n = 16;
    cout << sol.isPowerOfTwo(n) << endl;
     n = 3;
    cout << sol.isPowerOfTwo(n) << endl;
}