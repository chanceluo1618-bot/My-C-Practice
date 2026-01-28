/*#include <stdio.h>
int findMCD(int x,int y){
    int MCD;
    if(x>y)MCD=x;
        else MCD=y;
        for(MCD;MCD>=1;MCD--){
            if(x%MCD==0 && y%MCD==0){
                return MCD;
            }
        }
    }
int findLCM(int x,int y){
    int LCM;
    if(x>y)LCM=x;
        else LCM=y;
        for(LCM;LCM<=x*y;LCM++){
            if(LCM%x==0 && LCM%y==0){
                return LCM;
            }
        }
}
int main(){
    int MCD=1,LCM=1,x,y;
    scanf("%d %d",&x,&y);
    MCD=findMCD(x,y);
    LCM=findLCM(x,y);
    printf("%d %d",MCD,LCM);
    return 0;
}*/
/*#include <stdio.h>
int gcdf(int x,int y){
    while (y!=0)
    {   int temp=y;
        y=x%y;
        x=temp; 
    }return x;
}
int main(){
    int x,y,gcd,gcm;
    scanf("%d %d",&x,&y);
    gcd=gcdf(x,y);
    printf("%d %d",gcd,x*y/gcd);
    return 0;
}*/
/*#include <stdio.h>
int devf(int x){
    int y;
    y=x%10;
    if(x>100){
    x/=10;
    y+=(x%10)*10;
    }
    if(x>10000){
    x/=10;
    y+=(x%10)*100;
    }
    return y;
}
int main(){
    int x,dev;
    for(x=1;x<=999;x++){
        dev=devf(x*x);
        if(dev==x){
            printf("%d ",dev);
        }
    }
}*/
/*#include <stdio.h>
int main(void){
    double h=100,sum=0;
    int i=0;
    for(i=0;i<10;i++){
        sum+=h;
        h/=2;
    }
    printf("%.2f %.2f",sum*2-100,h);
    return 0;
}*/
#include <stdio.h>
int main(){
    printf("a:z b:x c:y");
    return 0;
}