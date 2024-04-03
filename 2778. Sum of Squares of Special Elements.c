int sumOfSquares(int* nums, int numsSize){
    int a=0;
    for(int i=1;i<=numsSize;i++){
        if(numsSize%i==0){
            a=a+(nums[i-1]*nums[i-1]);
        }
    }
    return a;
}
