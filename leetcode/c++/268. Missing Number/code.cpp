/*/
TEMPO DE RESPOSTA = 4 minutos e 30 segundo aproximadamente!!!
/*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int count = 0;
        int aux;
        int numeros[nums.size()];

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i; j < nums.size(); ++j) {
                if (nums[i] > nums[j]) {
                    aux = nums[i];
                    nums[i] = nums[j];
                    nums[j] = aux;
                }
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != i) {
                return i;
            }
        }

        return nums.size();
    }
};
