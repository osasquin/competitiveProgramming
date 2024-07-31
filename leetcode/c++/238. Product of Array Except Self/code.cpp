class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int answer[nums.size()];
        int j;
        int a;

        for(int i = 0; i < nums.size(); i++) {
            a = 1;  
            for(int j = 0; j < nums.size(); j++) {
                if(i != j) {
                    a *= nums[j];
                }
            }
            answer[i] = a;
        }

        return vector<int>(answer, answer + nums.size());
    }
};
