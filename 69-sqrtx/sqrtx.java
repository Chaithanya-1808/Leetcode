class Solution {
    public int mySqrt(int x) {
        int res = 0;
        long i;
        for(i=1;i<=x;i++){
            if(i*i <= x){
                res = (int)i;
            }else{
                break;
            }
        }
        return res;
    }
}