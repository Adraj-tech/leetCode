class Solution {
public:
    int mul(int x){
        int product=1;
        while(x>0){

            product=product*(x%10);
            x=x/10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        
        while(true){
            int x = mul(n);
            if(x%t==0){
                return n;
            }
            n++;

        }
        return 0;
    }
};