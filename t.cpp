#include <stdio.h>
int main()
{
    int i;
    char ch;
    FILE *fp;
    fp=fopen("a.txt","w+");
    for(i=0;i<128;i++)
    {
        fprintf(fp,"%c",i);
    }
    fseek(fp,0,SEEK_SET);
    while(fread(&ch, sizeof(char), 1, fp))
        printf("%d\n",ch);
    return 0;
}
