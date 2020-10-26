// O(n) time and O(1) space

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution
{
public:
	int removeDuplicates(vector<int>& nums)
	{
		int n; // Number of elements remaining in the vector
		auto u = unique(nums.begin(),nums.end()); // Doesn't alter the size of the vector
		n = u - nums.begin();
		nums.resize(n);
		return(n);
	}
};

int main()
{
	vector<int> v = {1,1,1,2,2,5,5,5,8,8};
	Solution s;
	int ans = s.removeDuplicates(v);
	cout<<"Number of elements remaining: "<<ans<<endl;
	for(auto x:v)
		cout<<x<<" ";
	cout<<endl;
	return 0;
}
