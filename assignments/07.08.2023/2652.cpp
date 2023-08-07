<<<<<<< HEAD
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i = 3; i <= n; i++){
            if(((i%3)==0)||((i%5)==0)||((i%7)==0))ans += i;
        }
        return ans;
    }
=======
class Solution {
public:
    int sumOfMultiples(int n) {
        int ans = 0;
        for(int i = 3; i <= n; i++){
            if(((i%3)==0)||((i%5)==0)||((i%7)==0))ans += i;
        }
        return ans;
    }
>>>>>>> 03918a7bf5745508a75f36596207e8fe6bbb83dd
};