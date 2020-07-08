#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void fnAppOpenMessage();
void fnAppOpenedMessage();
int main()
{
	int password, choice, uid, cont, maxLimit = 0;
	printf("\n--------------------------------------------------------------");
	printf("\n Windows Applications");
	printf("\n--------------------------------------------------------------");
login:
	printf("\n\n Authentation Requried !\n");
	do
	{
		printf("\n User ID  (Hint: 1): ");
		scanf("%d", &uid);
		printf("\n Password (Hint: 1): ");
		scanf("%d", &password);
		if (password != 1 || uid != 1)
		{
			printf("\n Authentation Failed !\n");
			printf("\n Try Again\n");
			maxLimit++;
		}
		if (maxLimit >= 3)
		{
			printf("\n Maximum Trails Reached\n");
			printf("\n Hit Enter to Terminate ...");
			getch();
			exit(0);
		}
	} while (password != 1 || uid != 1);
	system("ClS");
	printf("\n--------------------------------------------------------------");
	printf("\n Login Successful");
	printf("\n--------------------------------------------------------------");
	printf("\n\n * WELCOME *\n");
	printf("\n Press ENTER to  Continue ...");
	getch();
	system("ClS");
	for (;;)
	{
		do
		{
		winApps:
			system("CLS");
			printf("\n--------------------------------------------------------------");
			printf("\n Windows Applications");
			printf("\n--------------------------------------------------------------");
			printf("\n\n 1. Calculator");
			printf("\n\n 2. NotePad");
			printf("\n\n 3. Control Panel");
			printf("\n\n 4. Phone Dailer");
			printf("\n\n 5. Quick Assist");
			printf("\n\n 6. Performance Monitor");
			printf("\n\n 7.Resource Monitor");
			printf("\n\n 8.Volume Mixer - speaker (High Definnaton Audio Device)");
			printf("\n\n 9.About Windows");
			printf("\n\n--------------------------------------------------------------");
			printf("\n 0. More Options");
			printf("\n--------------------------------------------------------------");
			printf("\n\n Give Your Choice : ");
			scanf("%d", &choice);
			if (choice < 0 || choice > 9)
			{
				printf("\n Incorrect Choice\n");
				printf("\n Hit Enter to Continue to goto to menu ...");
				getch();
			}
		} while (choice < 0 || choice > 9);

		switch (choice)
		{
		case 1:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\calc");
			fnAppOpenedMessage();
			break;

		case 2:
			fnAppOpenMessage();
			system("c:\\windows\\notepad");
			fnAppOpenedMessage();
			break;

		case 3:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\control");
			fnAppOpenedMessage();
			break;

		case 4:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\dialer");
			fnAppOpenedMessage();
			break;

		case 5:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\quickassist");
			fnAppOpenedMessage();
			break;

		case 6:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\perfmon");
			fnAppOpenedMessage();
			break;

		case 7:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\resmon");
			fnAppOpenedMessage();

			break;

		case 8:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\SndVol");
			fnAppOpenedMessage();

			break;

		case 9:
			fnAppOpenMessage();
			system("c:\\windows\\system32\\winver");
			fnAppOpenedMessage();

			break;

		case 0:
		moreOptions:
			system("CLS");
			printf("\n\n 0. Exit");
			printf("\n\n 1. Logout");
			printf("\n\n 2. Back to Windows applications");
			printf("\n\n Give Your Choice : ");
			scanf("%d", &choice);
			if (choice == 0)
			{
				system("CLS");
				printf("\n--------------------------------------------------------------");
				printf("\n\n You have reached termination Point ...");
				printf("\n\n Hit Enter to Terminate ...");
				getch();
				exit(0);
			}
			else if (choice == 1)
			{
				system("CLS");
				printf("\n\n Are you Sure to Logout");
				printf("\n\n 0. No");
				printf("\n\n 1. Yes");
				printf("\n\n Give Your Choice : ");
				scanf("%d", &choice);
				if (choice == 0)
				{
					goto moreOptions;
				}
				system("CLS");
				printf("\n\n You Have been logged Out");
				goto login;
			}
			else if (choice == 2)
			{
				goto winApps;
			}

			break;
		}
	}
	return 0;
}

void fnAppOpenMessage()
{
	printf("\n\n Requested Application will Shortly Open For you...\n");
}

void fnAppOpenedMessage()
{
	printf("\n\n Requested Application has Opened.\n");
	printf("\n\n Hit Enter to Continue ...");
	getch();
}
