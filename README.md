# 2022c
資傳一甲程式倉庫

# Week01
(中秋節放假)

# Week02



# Week06
##step01-1
九九乘法表考試
```
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
```cpp
```
##step01-3
輾轉相除法

#include <stdio.h>
int main()
{
    printf("½Ð¿é¤J2­Ó¼Æ¦r:");
    int a,b,ans;
    scanf("%d %d",&a, &b);
    for(int i=1; i,a; i++){
        if( a%i==0 && b%i==0) ans=i;
    }
    printf("§ä¨ìans:%d", ans);
}
```cpp
```
##step01-4

#include<stdio.h>
int main()
{
    printf("½Ð¿é¤J2­Ó¼Æ¦r:");
    int a,b,c;
    scanf("%d%d",&a,&b);

    while(1){
        c=a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if(c==0)break;
        a=b;
        b=c;
    }
    printf("¤¤ªº¬O:%d",b);
}
```cpp
```
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
```
##step01-1
陣列
#include <stdio.h>
int main()
{
    int a[4]={10,20,30,40};

    printf("a[0]:%d\n",a[0]);
    printf("a[1]:%d\n",a[1]);
    printf("a[2]:%d\n",a[2]);
    printf("a[3]:%d\n",a[3]);
}
```

##step01-2

#include <stdio.h>
int main()
{
  int a[4]={10,20,30,40};

  for(int i=0;i<4;i++){
        printf("a[%d]: %d\n",i,a[i]);

  }

  for(int i=3;i>=0;i--){
    printf("%d ", a[i]);
  }
}
```
