#include <stdio.h>
int main(){
    /*int num,reverse_num=0,sub_num=0;
    int power=1;
    int count=0;
    int t=0;
    scanf("%d",&num);
    sub_num=num;
    while (sub_num>9)
    {sub_num/=10;
     power*=10;
     count++;
    }
    for ( int i = 0; i <= count; i++)
    {   t=num/power;
        printf("%d\n",t);
        reverse_num=reverse_num*10+t;printf("%d\n",reverse_num);
        num=num%power;
        power=power/10;
    }
    printf("%d\n",reverse_num);
    return 0;   */
    //以上思路错误
    int num,revnum=0,t=0;
    scanf("%d",&num);
    while (num>0)
    {   t=num%10;
        revnum=revnum*10+t;
        num/=10;
    }
    printf("%d\n",revnum);
    return 0;
}