#include<stdio.h>

#define MSG "You must have many talents.Tell me some."
#define LIM 5
#define LINELEN 81

int main(void)
{
    char name[LINELEN];
    char talents[LINELEN];

    int i;
    const char m1[40] = "我是m1";

    const char m2[] ="我是m2";

    const char * m3 = "我是m3";

    const char * mytal[LIM] = {
      "111111",
      "222222",
      "333333",
      "444444",
      "555555"
    };

    for(i=0;i<LIM;i++)
    {
        puts(mytal[i]);
    }

    puts(m3);
    gets(name);
    printf("%s,%s\n",name,MSG);
    printf("%s\n%s\n",m1,m2);
    gets(talents);
    puts(talents);
    printf("%s\n",name);
    return 0;
}
