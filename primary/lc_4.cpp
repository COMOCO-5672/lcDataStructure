#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    int num_len=nums.size();
    sort(nums.begin(),nums.end(),less<int>());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    int rm_dup_len = nums.size();
    return rm_dup_len!=num_len;
}

int main()
{
    vector<int> nums = {1,2,3,1};
    bool lens = containsDuplicate(nums);
    printf("%d",lens);
    return 0;
}