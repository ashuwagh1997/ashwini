#include<string.h>
#include<stdlib.h>
#include<stdio.h>

void main()
{
FILE *fp;
char *str;

fp=fopen("cdac.txt","w");
if(fp==NULL)
{
exit(0);
}

gets(str);

fputs(str.fp);
printf("Data written successfully \n");
fclose(fp);



fp=fopen("cdac.txt","r");
if(fp==NULL)
{
printf("File does not exist");
exit(0);
}


while((fgets(str,strlen(str)+1,fp))!=NULL)
printf("%s",str);
fclose(fp);
}
