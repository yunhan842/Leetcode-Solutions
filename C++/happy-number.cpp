class Solution {
public:
    bool isHappy(int n) {
        if(n == 1) return true;
        int sum = 0;
        while(n > 1){
            while(n > 0){
                int digit = n % 10;
                sum += (int) digit * digit;
                n /= 10;
            }
            if(sum == 1) return true;
            n = sum;
            sum = 0;
            if(n == 4) return false;
        }
        return false;
    }
};