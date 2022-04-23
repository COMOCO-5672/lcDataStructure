#include <cstdio>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

using namespace std;

int main(){

    vector<int> nums = {1,2,3,4,5,6};
    int n = nums.size();
    if(n<3) return 0;
    vector<int> dp(n,0);
    for(int i=2;i<n;++i){
        if(nums[i]-nums[i-1]==nums[i-1]-nums[i-2]) {
            dp[i] = dp[i-1]+1;
        }
    }
    int cout = accumulate(dp.begin(),dp.end(),0);
    return cout;
}