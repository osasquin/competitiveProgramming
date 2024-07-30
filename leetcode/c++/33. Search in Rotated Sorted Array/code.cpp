class Solution {
public:
    int search(vector<int>& nums, int target) {
        int esquerda = 0;
        int direita = nums.size() - 1; 

        //[direita, [...], meio, [...], esquerda]

        while (esquerda <= direita) {
            int metade = esquerda + (direita - esquerda) / 2;

            if (nums[metade] == target) {
                return metade;
            }

            if (nums[esquerda] <= nums[metade]) { //quer dizer que preciso ir para a parte da esquerda
                if (nums[esquerda] <= target && target < nums[metade]) { //esquerda para a metade
                    direita = metade - 1; //limita para parte a esquerda
                } else {
                    esquerda = metade + 1; 
                }
            } else { //outra parte
                if (nums[metade] < target && target <= nums[direita]) { //metade para a direita
                    esquerda = metade + 1; //limita pra parte a direita
                } else {
                    direita = metade - 1; 
                }
            }
        }

        return -1;
    }
};


/*/
definir os primeiros limites
esquerda
direita

loop esquerda <= direita

meio

verifica se a ordem esquerda ta em ordem crescente
muda os limites pra ficar só na parte esquerda

pega a outra parte
muda os limites pra ficar só na parte direita
/*/