#include <stdio.h>
int main()
{
    int a=10;
    printf("a�b����? %d\n",&a);

    int *p=&a;
    printf("�{�b�����ܼ�p�߸̩񪺭ȬO&a �]�N�O%d\n",p);
    printf("p�u�쪺���@�Ӳ��l���ȬO�G%d\n",*p);
}
