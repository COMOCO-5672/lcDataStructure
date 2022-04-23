#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
       int len = nums.size();
        vector<int> a;
        a.push_back(nums[0]);
        for(int i = 1; i < len;++i)
        {
            if(nums[i] != nums[i-1]) {
                a.push_back(nums[i]);
            }
        }
        nums.swap(a);
        return nums.size();
}

int main()
{
    vector<int> nums = {1,1,2};
    int lens = removeDuplicates(nums);
    printf("%d",lens);
    return 0;
}