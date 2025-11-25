#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(mp.count(need)){
                return {mp[need],i};
            }
            mp[nums[i]]=i;
        }
        return {};   
    }
};
int main(){
    Solution sol;
    vector<int> nums={3,3};
    int target=6;

    vector<int> ans=sol.twoSum(nums,target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}