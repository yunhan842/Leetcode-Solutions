class Solution {
public:
    int getLucky(string s, int k) {
        string initSum = "";
        for(char ch : s){
            initSum += to_string(ch - 'a' + 1);
        }
        for(int i = 0; i < k; i++){
            int temp = 0;
            for(char ch : initSum){
                temp += (ch - '0');
            }
            initSum = to_string(temp);
        }
        return stoi(initSum);
    }
};