bool isPalindrome(int x) {
    int original =x;
    long long int rev=0;
    if(x<0)
    return false;
    while(x){
        long long int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    if(rev==original)
    return true;
    else
    return false;
    
}