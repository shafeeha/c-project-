#include<stdio.h>
int main()
FILE*fp;
int ch;
fp=fopen("feedback.txt","w");//WRITE MODE
if(fp==NULL)
{
printf("File cannot open");
return 0;
}
fprintf(fp,"Feedback on C programming:\n");
fprintf(fp,"1.The trainer's teaching is Understandable.\n");
fprintf(fp,"2.But C programming training makes it easy.\n");
fprintf(fp"3.It is useful for Us.\n");
fprintf(fp"4.It helps in our problem solving.\n");
fprintf(fp,"5.I like to learn C programming.\n");
fclose(fp);
fp=fopen("feedback.txt","a");//APPEND MODE
if(fp==NULL)
{
 printf("File cannot open");
 return 0;
}
fprintf(fp,"Feedbackabout C program trainer:\n");
fprintf(fp,"1.The trainer explains crystal clearly.\n");
fprintf(fp,"2.The trainer teaches with Examples.\n");
fprintf(fp,"3.The trainer is very helpful.\n");
fprintf(fp,"4.The trainer clear our doubts.\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("File cannot open");
return 0;
}
printf("feedback details:\n:);
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}