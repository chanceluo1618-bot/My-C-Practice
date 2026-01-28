/*#include <stdio.h>
int main()
{
    int a,b,c;
    int max=0;

    scanf("%d %d %d",&a,&b,&c);

    if(a>b){
        if(a>c){max=a;
        }else{max=c;
        }
    }else{
        if(b>c){
        max=b;
         } else{
            max=c;
        }
        

    }
    printf("最大值是：%d\n",max);
    return 0;

}*/
#include <stdio.h>
int main(void){
    char c;
    int letter=0,number=0,space=0,other=0;
    c=getchar();
    while (c!='\n')
    {if(c>='A' && c<='z'){
        letter++;
    }else if(c>='0' && c<='9'){
        number++;
    }else if(c==' '){
        space++;
    }else{
        other++;
    }
    }
    printf("字母=%d 数字=%d 空格=%d 其他=%d\n",letter,number,space,other);
    return 0;
}
