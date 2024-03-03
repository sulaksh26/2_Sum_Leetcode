class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int x,y;
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums.size();j++){
            if(i==j){
                continue;
            }
            if(nums[i]+nums[j]==target){
                x=i;
                y=j;
            }
            
        }
    }
    vector<int>arr;
    arr.push_back(x);
    arr.push_back(y);
    
    return arr;    
    }
};