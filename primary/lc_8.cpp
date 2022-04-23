#include <iostream>
#include <vector>
using namespace std;

    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        while(i!=len)
        {
            if(nums[i]==0)
            {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                continue;
            }
            ++i;
        }
    }

    int main()
    {
        vector<int> nums = {0,1,0,2,3};
        moveZeroes(nums);
        return 0;
    }