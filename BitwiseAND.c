int rangeBitwiseAnd(int left, int right) {
    int cnt=0;
    while(left!=right){
        left>>=1;  //right shift by 1 and assign to itself
        right>>=1;
        cnt++;
    }
    return left<<cnt; //bitwise and by shifting left by cnt shifts to the left
}
