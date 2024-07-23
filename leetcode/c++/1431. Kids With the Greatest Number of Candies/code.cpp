class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<int> sortedArray = candies;
        sort(sortedArray.begin(), sortedArray.end());

        int n = candies.size(); 
        vector<bool> result(n);

        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= sortedArray[n - 1]) {
                result[i] = true;
            } else {
                result[i] = false;
            }
        }

        return result;
    }
};