class Solution {
public:
    int rob(vector<int>& nums) {
        int rob = 0;
        int norob =0;
        for(int i =0; i<nums.size(); i++){
            int newRob = norob + nums[i];
            int newNoRob = max(norob, rob);
            rob = newRob;
            norob = newNoRob;
        }
        return max(rob, norob);
    }
};

//https://leetcode.com/problems/house-robber/description/?envType=daily-question&envId=2024-01-21
