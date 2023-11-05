#include <stdio.h>

int main () {

	char n[50]
	char e;
	int p;
	int d;
	char add[50]

	char na[50]
	char em;
	int ph;
	int da;
	char addr[50]

	printf("Welcome to your friends and contacts hub\n\n");
	
	printf("MENU"\n);

	printf("Press 0 to add a new contact\n\n");

	int x;
	printf("Confirm\n")
	scanf("%d", &x);

	if(x==0)
	{
		int y;

		printf("Enter the digits of contact to be added: ");
		scanf("%d", &y);

		if(y==0)
		{
			printf(".................\n");
			printf("Name: ");
			scanf("%s", &n);
			printf("Phone number: ");
			scanf("%d", &p);
			printf("Email: ");
			scanf("%s", &e);
			printf("Date of Birth: ");
			scanf("%d", &d);
			printf("Address: ");
			scanf("%s", &add);
			printf(".................\n");
		}
		else if(y==1)
		{
			printf(".................\n");
                        printf("Name: ");
                        scanf("%s", &n);
                        printf("Phone number: ");
                        scanf("%d", &p);
                        printf("Email: ");
                        scanf("%s", &e);
                        printf("Date of Birth: ");
                        scanf("%d", &d);
                        printf("Address: ");
                        scanf("%s", &add);
                        printf(".................\n");

			printf(".................\n");
                        printf("Name: ");
                        scanf("%s", &na);
                        printf("Phone number: ");
                        scanf("%d", &ph);
                        printf("Email: ");
                        scanf("%s", &em);
                        printf("Date of Birth: ");
                        scanf("%d", &da);
                        printf("Address: ");
                        scanf("%s", &add);
                        printf(".................\n");
		}
 		printf("Press 1 to see the saved contact\n");
		printf("Press 2 to exit the contact list\n");

		int z;
		printf("Confirm\n");
		printf("%d", &z);

		if(z==2)
		{
			int num;
			printf("Enter the number of the contact you need: ");
			scanf("%d", &num);

			if(num==0)
			{
				printf(".................\n");
                        	printf("Name: ");
                        	printf("%s", n);
                        	printf("Phone number: ");
                        	printf("%d", p);
                        	printf("Email: ");
                        	printf("%s", e);
                        	printf("Date of Birth: ");
                        	printf("%d", d);
                        	printf("Address: ");
                        	printf("%s", add);
                        	printf(".................\n");
			}
			else if(num==1)
			{
				printf(".................\n");
                        	printf("Name: ");
                        	printf("%s", n);
                        	printf("Phone number: ");
                        	printf("%d", p);
                        	printf("Email: ");
                        	printf("%s", e);
                        	printf("Date of Birth: ");
                        	printf("%d", d);
                        	printf("Address: ");
                        	printf("%s", add);
                        	printf(".................\n");

                        	printf(".................\n");
                        	printf("Name: ");
                        	printf("%s", na);
                        	printf("Phone number: ");
                        	printf("%d", ph);
                        	printf("Email: ");
                        	printf("%s", em);
                        	printf("Date of Birth: ");
                        	printf("%d", da);
                        	printf("Address: ");
                        	printf("%s", add);
                        	printf(".................\n");
			}
		}
		else if(x==2)
		{
			printf("Are you sure you want to close your contact list\n");
			printf("Press 0 to confirm\n");
			printf("Press 1 to decline\n");

			int ans;
			printf("Confirm\n");
			scanf("%d", &ans);

			if(ans==0)
			{
				printf("Your contact list has been closed\n");
				printf("Enjoy the rest of your day\n");
			}
			else if(ans==1)
			{
				printf("You are still here\n");
				printf("You may continue\n");
			}
		}
		else
		{
			printf("Invalid");
		}
		
		return 0;
	}


