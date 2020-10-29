#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int s = nums.size();
        sort(nums.begin(),nums.end());
        auto u = unique(nums.begin(),nums.end());
        auto diff = u-nums.begin();
        if(s == diff)  // Compare the total elements and unique elements of the array.
            return false;
        else
            return true;
    }
};

int main()
{
    vector<int> v = {1,2,8,5};
    Solution s;
    bool ans = s.containsDuplicate(v);
    cout<<ans<<endl;
    return 0;
}