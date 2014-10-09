#include<stdio.h>

int main(void)
{
    char *mesg = "dont sb";
    char *copy;

    copy = mesg;

    printf("%s\n",copy);

    //指针指向同一块内存更加的节约空间，而且效率更加的高
    printf("mesg = %s,&mesg= %p,value = %p\n",mesg,&mesg,mesg);
    printf("copy = %s,&copy= %p,value = %p\n",copy,&copy,copy);

    return 0;
}
