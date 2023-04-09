class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
//         int n = nums.size();
        
//         for(int i = 1; i<n ; i++){
//             if(nums[i] > 0){
//                 nums[i]--;
//                 nums[i-1]++;
//             }
        // }
        long long answer = 0, prefixSum = 0;
        
        // Iterate over nums, update prefix sum and answer.
        for (int i = 0; i < nums.size(); ++i) {
            prefixSum += nums[i];
            answer = max(answer, (prefixSum + i) / (i + 1));
        }
        
        return answer;
    }
};