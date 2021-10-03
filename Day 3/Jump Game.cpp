class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        const int N = nums.size();
        int last = N - 1;
        for(int i = N - 2; i >= 0; i--){
            if(nums[i] + i >= last){
                last = i;
            }
        }
       return last == 0;
    }
};
