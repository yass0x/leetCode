#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleNum=nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            singleNum ^= nums[i];
        }
        
        return singleNum;
    }
};

int main (void)
{
    Solution sol;
    vector n = {2,2,1};
    cout << sol.singleNumber(n) << endl;
    n = {4,1,2,1,2};
    cout << sol.singleNumber(n) << endl;
    n = {1};
    cout << sol.singleNumber(n) << endl;
}