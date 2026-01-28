#include <stdio.h>
int main(){
    int h1,m1,s1,h2,m2,s2,t=0,h3=0,m3=0,s3=0;
    scanf("%d:%d:%d %d:%d:%d",&h1,&m1,&s1,&h2,&m2,&s2);
    t=h2*3600+m2*60+s2-h1*3600-m1*60-s1;
    h3=t/3600;
    m3=(t%3600)/60;
    s3=(t%3600)%60;
    if(t<=7200){
        printf("%02d:%02d:%02d OK\n",h3,m3,s3);
    }else{
        printf("%02d:%02d:%02d NO\n",h3,m3,s3);
    }
    return 0;
}