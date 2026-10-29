#include<stdio.h>
int main()
{
int pin = 1234;
int enteredpin;
int choice;
float balance = 5000;
float amount;

printf("======WELCOME TO ATM======\n");

printf("ENTER YOUR PIN : ");
scanf("%d",&enteredpin);

if (enteredpin != pin)
{
printf("INVALID PIN");
return 0;
}

printf("\nLOGIN SUCCESSFUL!\n");

do 
{
printf("\n======ATM MENU======\n");
printf("1.CHECK BALANCE\n");
printf("2.DEPOSIT MONEY\n");
printf("3.WITHDRAW MONEY\n");
printf("4.EXIT\n");

printf("ENTER YOUR CHOICE\n");
scanf("%d",&choice);

switch (choice)
{
case 1 :
printf("YOUR BALANCE:Rs.%2f\n",balance);
break;

case 2 :
printf("ENTER DEPOSIT AMOUNT :");
scanf("%f",&amount);

if (amount>0)
{
balance=balance+amount;
printf("MONEY DEPOSITED SUCCESSFULLY ! \n");
printf("NEW BALANCE : Rs.%.2f\n",balance);
}
else
{
printf("INVALID AMOUNT!\n");
}
break;

case 3 :
printf("ENTER WITHDRAWAL AMOUNT :");
scanf("%f",&amount);

if (amount <=0)
{
printf("INVALID AMOUNT !\n");
}
else if (amount <= balance)
{
balance  =  balance - amount;
printf("PLEASE COLLECT YOUR CASH .\n");
printf("REMAINING BALANCE : Rs.%.2f\n",balance);
}
else
{
printf("INSUFFICIENT BALANCE !\n");
}
break;

case 4 :
printf("THANK YOU FOR USING ATM !\n");
break;

default :

printf("INVALID CHOICE !\n");
}
}
while (choice !=4);
return 0;
}







