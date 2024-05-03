int search(int* nums, int numsSize, int target) {
    int a=0;
    int b=numsSize-1;
    int f=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==target){
            f++;
            break;
        }
    }
    if(f==0){
        return -1;
    }
    while(nums[b]>=target){
        if(nums[a]==target){
            return a;
        }
        else if(nums[b]==target){
            return b;
        }
        else{
            int m=(a+b)/2;
            if(nums[m]==target){
                return m;
            }
            else{
                if(nums[m]<target){
                    a=m+1;
                }
                else{
                    b=m-1;
                }
            }
        }
    }
    return -1;
}
