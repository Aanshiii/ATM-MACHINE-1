//project of ATM MACHINE
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
void moneywithdraw();
void mobilenochange();
int main()
{

 //   sleep(5);
  int c,amount=0,n,u,pin,p,d;
  char ch;
  FILE *fp=NULL;
  system("cls");
  fp=fopen("firstpage.txt","r");
  do
  {
      ch=fgetc(fp);
      printf("%c",ch);
  }while(ch!=EOF);

    fclose(fp);
    sleep(5);
system("cls");

  fp=fopen("secondpage.txt","r");
  do
  {
      ch=fgetc(fp);
      printf("%c",ch);
  }while(ch!=EOF);

    fclose(fp);
    sleep(5);
  system("cls");


 fp=fopen("thirdpage.txt","r");                              //end of 3rd page  [ pin ]
do
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }while(ch!=EOF);


scanf("%d",&u);
if(u<10||u>99)
    printf("TRANSATION FAIL\n");
else
{
    printf("ENTER PIN OF 4 DIGITS\n");
    printf(" for temporary use of this program i provide it to u pin =1111 \n");
    scanf("%d",&d);
    sleep(2);
    system("cls");
    if(d==1111)
    {


    printf("CHOICE\n1)MONEYWITHDRAW\n2)MOBILE NUMBER CHANGE\n");
    scanf("%d",&p);
   switch(p)
   {


case 1 :
    moneywithdraw();
    //system("cls");
    break;
case 2 :
    mobilenochange();
    break;
   }
    /////////////second window close
   }
   else
 {

 printf("WRONG PIN \n");

}}
   fclose(fp);

 return 0;
}

void moneywithdraw()
{
     ///////// moneyy//////////////
     FILE *fp;
     int n,c,amount;
       fp=fopen("abc.txt","r");

    if(fp==NULL)
    {
        printf("invalid");
    }
    printf("money u want to withdraw\n");
    scanf("%d",&n);
   fscanf(fp,"%d",&c);
   amount=c;
   printf("YOUR MONEY IS \n");
    printf("%d",amount);
    if(amount==0||amount<n)
    printf("your money is less than which u require\n");
    else
   {
       amount=amount-n;
   printf(" now remaining money   is   %d ",amount);

   fp=fopen("abc.txt","w");
   fprintf(fp,"%d",amount);
   }

   fclose(fp);
   sleep(5);
    system("cls");
}
void mobilenochange()
{ FILE *fp=NULL;
long long int d;
char ch;
    fp=fopen("mobile.txt","r");
     printf("YOUR OLD NUMBER IS\n");
     do
  {
      ch=fgetc(fp);
      printf("%c",ch);
  }while(ch!=EOF);
  printf("NOW ENTER NEW NUMBER\n");
  scanf("%lld",&d);
//printf("%lld",d);

 fp=fopen("mobile.txt","w");
  fprintf(fp,"%lld",d);

  fclose(fp);


}
