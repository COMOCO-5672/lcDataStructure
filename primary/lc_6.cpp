    #include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> a;
        a.resize(nums1.size()+nums2.size());
        auto resEndpos = set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),a.begin());
        a.resize(resEndpos - a.begin());
        return a;
    }

    int main()
{
    vector<int> nums1 = {1,2,2,1};
    vector<int> num2 = {2,2};
    vector<int> lens = intersect(nums1,num2);
    printf("%d",lens);
    return 0;
}