#include<stdio.h>

int main(void)
{
    char *mesg = "dont sb";
    char *copy;

    copy = mesg;

    printf("%s\n",copy);

    //ָ��ָ��ͬһ���ڴ���ӵĽ�Լ�ռ䣬����Ч�ʸ��ӵĸ�
    printf("mesg = %s,&mesg= %p,value = %p\n",mesg,&mesg,mesg);
    printf("copy = %s,&copy= %p,value = %p\n",copy,&copy,copy);

    return 0;
}
