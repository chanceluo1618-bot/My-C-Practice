int isArmstrong(int num){
    int temp = num; //定义num的替身用于计算num的次方数
    int n = 0;  //num的次方数
    while(temp != 0){
        temp /= 10;
        n++;
    }
    int sum = 0;
    temp = num; //重置temp为num
    while(temp != 0){
        int digit = temp % 10;  //分离temp的每一位数
        int power = 1;  //定义power, power是每一位的n次方
        temp /= 10; //去除num的最后一位
        for(int i = 1; i <= n; i++){
            power *= digit; //计算power,循环n-1次，比如n = 3, digit = 2, 
        }                   //power = 2*2*2 = 8
        sum += power;
    }
    int ret = 0;    //定义返回值ret，初始为0（即num不是Armstrong数）
    if(sum == num)  //比较最终sum与num的值
        ret = 1;    //如果num是Armstrong数，ret = 1
    return ret;
}