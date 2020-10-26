// Given an array of prices of a particular stock, calculate the maximum profit that you can earn by buying and selling of stocks.
// Multiple stocks can only be bought serially and not parallely, i.e. you can only buy after you have sold the previously bought stock.

// O(n) time and O(1) space

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        for(auto it=prices.begin()+1; it!=prices.end(); it++)
        {
            auto prev_price = *(it-1);
            auto curr_price = *it;
            if(curr_price>prev_price)
            {
                auto curr_profit = curr_price-prev_price;
                max_profit += curr_profit;
            }
        }
        
        return max_profit;
    }
};

int main()
{
    vector<int> v = {7,2,5,2,3,7};
    Solution s;
    int ans = s.maxProfit(v);
    cout<<"Maximum profit is: "<<ans<<endl;
}
