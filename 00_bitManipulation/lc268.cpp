#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int numsXor = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            /* code */
            numsXor ^= (i+1);
            numsXor ^=nums[i];
        }
        return numsXor;        
        
    }
};

int main (void)
{
    Solution sol;
    vector n = {3,0,1};
    cout << sol.missingNumber(n) << endl;
    n = {0,1};
    cout << sol.missingNumber(n) << endl;
    n = {9,6,4,2,3,5,7,0,1};
    cout << sol.missingNumber(n) << endl;
}