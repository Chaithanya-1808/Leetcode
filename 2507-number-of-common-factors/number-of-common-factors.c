int commonFactors(int a, int b) {
    int count =0;
    int i;
    for(i=1 ;i<=a && i<=b ;i++){
        if(a%i ==0 && b%i==0){
            count++;
        }
    }
    return count;
}