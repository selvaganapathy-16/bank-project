#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct bank
{
	int no;
	float dep;
	char name[20];
	float withdraw;
	 
}s[20];
void menu();
void create();
void details();
void deposit();
void withdraw();

int main()
{
char pass[10],passw[10]="mycap";
int i,n;
printf("\nenter password to login\n");
scanf("%s",pass);
if(strcmp(pass,passw)==0)
{
	printf("\npassword match\n");
	menu();
}
else
{
	printf("\npassword unmatch\n");
	printf("\npress 1 to retry\n ");
	scanf("%d",n);
	if(n==1)
	{
		printf("\nproceeding to main menu.........\n");
		system("cls");
		main();
	}
}
return 0;

}
void menu()
{
	system("cls");
	int o;
	printf("\n........Enter a chioce...........\n");
	printf("\n\n1:create an account\n2:account details\n3:deposit\n4:withdraw\n\n  ");
	scanf("%d",&o);
	switch(o)
	{
		case 1:create();
		break;
		case 2:details();
		break;
		case 3:deposit();
		break;
		case 4:withdraw();
		break;
		default :printf("\ninvalid option");
	}
	
}
void create()
{
	system("cls");
	int u;
	printf("\n\t\t.......welcome to account creation........\n");
	printf("\nEnter name");
	scanf("%s",s[1].name);
	printf("\nEnter account number");
	scanf("%d",&s[1].no);
	printf("\nMinimum balance 500 for deposition");
	s[1].dep=500;
	printf("\naccont created succesfully");
	printf("\npress 1 for main menu");
	scanf("%d",&u);
	if(u==1)
	{
		menu();
		
	}
}
void details()
{
	system("cls");
	int q,r;
	printf("\n\t\t.......welcome to account details........\n");
	printf("\nenter account number");
	scanf("%d",&q);
	if(s[1].no==q)
	{
		printf("\nname : %s ",s[1].name);
		printf("\naccount number : %d ",s[1].no);
		printf("\nbalance : %f ",s[1].dep);
	}
	else
	{
		printf("\naccount nuumber invalid");
	
		
	}
		printf("\npress 1 for main menu");
	scanf("%d",&r);
	if(r==1)
	{
		menu();
		
	}
}
void deposit()
{
	system("cls");
	int t,y,i;
	printf("\n\t\t.......welcome to deposit........\n");
    printf("\nenter account number");
	scanf("%d",&t);
	if(s[1].no==t)
	{
		printf("\nenter the amount to deposit");
		scanf("%d",&y);
		s[1].dep=s[1].dep+y;
		printf("\ndeposited succesfully");
		printf("\nbalance : %f",s[1].dep);
    }
    else
    {
    	printf("\ninvalid account number");
	}
	printf("\npress 1 for main menu");
	scanf("%d",&i);
	if(i==1)
	{
		menu();
		
	}
}
void withdraw()
{
	system("cls");
	int g,ee,ii;
	char w[20];
	char pw[20]="mycap";
	s[1].withdraw=500;
	printf("\n\t\t.......welcome to withdraw........\n");
 printf("\nenter account number");
	scanf("%d",&g);
	if(s[1].no==g)
	{
		printf("\nenter the amount to withdraw");
		scanf("%d",&ee);
		if(ee>=s[1].withdraw)
		{
			printf("\nenter password for withdraw");
			scanf("%s",w);
			int c=(strcmp(w,pw));
			if(c==0)
			{
			s[1].dep=s[1].dep-ee;
			printf("\nwithdraw succesfull");
		    }
		    else
		    {
		    	printf("\npassword incorrect");
			}
		}
		else
		{
			printf("\nminimum balance required");
		}	
    }
    else
    {
    	printf("\naccount number wrong");
	}
	printf("\npress 1 for main menu");
	scanf("%d",&ii);
	if(ii==1)
	{
		menu();
		
	}
}
