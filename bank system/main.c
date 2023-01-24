#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct account
{
    int acc_no;
    int deposite;
    char name[50];
    char type;
} a;
   void write_account();
   void display_all();
   void display_sp(int);
   void modify_account(int);
   void delete_account(int);
   void deposite_withdrawl(int,int);
   void intro();

int main()
{
    system("color 5e");
    char ch;
    int num;
    intro();
    system("cls");



 do{

    printf("\n\n\n\t MAIN MENU");
    printf("\n\n\n\t1.NEW ACCOUNT");
    printf("\n\n\n\t2.DEPOSITE AMOUNT");
    printf("\n\n\n\t3.WITHDRAW AMOUNT");
    printf("\n\n\n\t4.BALANCE ENQUIRY");
    printf("\n\n\n\t5.ALL ACCOUNT HOLDER LIST");
    printf("\n\n\n\t6.CLOSE AN ACCOUNT");
    printf("\n\n\n\t7.MODIFY AN ACCOUNT");
    printf("\n\n\n\t8.EXIT");
    printf("\n\n\n\t Select Your Option");
    scanf("%c",ch);

    switch(ch)
    {
    case '1':
        write_account();
        break;
    case '2':
        printf("\n\nEnter the account number:");
        scanf("%d",num);
        deposite_withdrawl(num,1);
        break;
    case '3':
        printf("\n\nEnter the account number:");
        scanf("%d",num);
        deposite_withdrawl(num,2);
        break;
    case '4':
        printf("\n\nEnter the account number:");
        scanf("%d",num);
        display_sp(num);
        break;
    case '5':
        display_all();
        break;
    case '6':
        printf("\n\nEnter the account number:");
        scanf("%d",num);
        delete_account(num);
        break;
    case '7':
         printf("\n\nEnter the account number:");
        scanf("%d",num);
        modify_account(num);
        break;

    }

 } while(ch!=8);
 return 0;
}
void intro()
{
    printf("================================================================================\n");
    printf("*\t\t\t\t\t\t\t\t\t\t*\n*\t\tWelcome to Ethiopia commercial bank \t\t\t\t*\n*\t\t\t\t\t\t\t\t\t\t*\n");
     printf("================================================================================\n");
     printf("Press any any key to get started ");
     getchar();

}
void write_account()
{
    //account ac;
   // outfile= fopen();

}
