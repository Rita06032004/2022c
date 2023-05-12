#include<stdio.h>
int main(){
  int a,c;
  scanf("%d",&c);
  for(int b=0;b<c;b++){
  scanf("%d",&a);
  a*=a;
  printf("%d,",a);}
  printf("\n");
  return 0;
}

