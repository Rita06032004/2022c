# 2022c
資傳一甲程式倉庫

# Week01
(中秋節放假)

# Week02



# Week06
##step01-1
九九乘法表考試
##step01-2
金字塔
#include <stdio.h>
int main()
{
    for(int i=1;i<=5;i++){
        int space=5-i;
        int star=i*2-1;
        for(int k=0; k<space; k++){
            printf(" ");
        }
        for(int k=0; k<star; k++){
            printf("*");
        }

        printf("ÆN¬[:%d¼Ó  %dªÅ®æ %d¬P\n",i,space,star);
    }
}

##step01-3
輾轉相除法

##step01-4

##step01-5
#include<stdio.h>
int main()
{
    printf("請輸入2個數字:");
    int a,b,c;
    scanf("%d%d",&a,&b);

    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}
