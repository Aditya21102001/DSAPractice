class Solution {
public:
    int happy(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int sum=0;
        if(n==1111111)return true;
        int hap=happy(n);
        if(hap==1)return true;
        else{
            while(hap>9){
                hap=happy(hap);
                if(hap==1)return true;
                else if(hap<10 && hap>1)return false;
            }
        return false;
        }
    }
};