bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int original = x;
    long long  rev = 0;
    while(x>0){
        int dig = x % 10;
        rev = rev*10 + dig;
        x/=10;
    }
    if(original == rev){
        return true;
    }
    return false;
}