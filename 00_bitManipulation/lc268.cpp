#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int lenght = nums.size();
        int sum = lenght * (lenght + 1);
        sum /=2;
        for (int i = 0; i < lenght; i++)
        {
            sum -= nums[i];
        }
        return sum;
        
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