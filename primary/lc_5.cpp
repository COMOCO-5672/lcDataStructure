
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int singleNumber(vector<int>& nums) {
        int len = nums.size();  // len 至少为3
        sort(nums.begin(),nums.end(),less<int>());
        for(int i = 1 ; i <= len-1;++i)
        {
            if(i == len-1)
            {
                if(nums[i]!=nums[i-1])
                {
                    return nums[i];
                }
                else
                    break;
            }

            if(i == 1)
            {
                if(nums[i]!=nums[i-1])
                {
                    return nums[i-1];
                }
            }

            if(nums[i]!= nums[i-1] && nums[i]!= nums[i+1])
            {
                return nums[i];
            }
        }
        return 0;
}

int main()
{
    vector<int> nums = {2,2,1};
    int lens = singleNumber(nums);
    printf("%d",lens);
    return 0;
}