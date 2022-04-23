#include <cstdio>
#include <vector>
using namespace std;

// 辅函数
void backtracking(vector<int> &nums, int level, vector<vector<int>> &ans) {
    if (level == nums.size() - 1) {
        ans.push_back(nums);
        return;
    }
    for (int i = level; i < nums.size(); i++) {
        swap(nums[i], nums[level]); // 修改当前节点状态
        backtracking(nums, level+1, ans); // 递归子节点
        swap(nums[i], nums[level]); // 回改当前节点状态
    }
}

// 主函数
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    backtracking(nums, 0, ans);
    return ans;
}

int main()
{
    vector<int> a= {1,2,3};
    auto ret = permute(a);
    for (int i = 0; i < ret.size(); i++)
    {
        for(int j=0;j <ret[i].size();j++)
        {
            printf("%d",ret[i][j]);
            if(j = ret[i].size()-1){
                printf("\r\n");
            }
        }
    }
    return 0;
}