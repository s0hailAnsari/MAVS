#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<dos.h>
#include"main.h"

char new_id[20],new_pass[20];
int password_count=3;

int rect(int,int,int);

int a=0;

void pc()
{
    int gdriver = DETECT, gmode, errorcode;
    int midx,midy,count;
    char user_id[20],password[20],user_id1[20]={"sohail"},user_id2[20]={"mehul"},user_id3[]={"zahir"},user_id4[]={"vasanthi"},password1[]={"s123"},password2[]={"m123"},password3[]={"z123"},password4[]={"v123"};
    int hour,minute,second;
    struct date today;
    struct time stime;
    gettime(&stime);
    getdate(&today);
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
    a=recta(midx,midy,a);
    //
    gotoxy(27,4);
    printf("LOGIN PAGE");
    gotoxy(63,3);
    printf("Date: %d/%d/%d",today.da_day,today.da_mon,today.da_year);
    gotoxy(63,4);
    printf("Time: %d:%d:%d",stime.ti_hour,stime.ti_min,stime.ti_sec);
    //
    gotoxy(4,7);
    printf("Enter Your Id: ");
    scanf("%s",&user_id);
    gotoxy(4,8);
    printf("Enter Password: ");
    scanf("%s",&password);
    rectangle(midx-310,midy-100,midx+310,midy+230);//i3
    if((strcmp(user_id1,user_id)==0 && strcmp(password1,password)==0) || (strcmp(user_id2,user_id)==0 &&strcmp(password2,password)==0) || (strcmp(user_id3,user_id)==0 &&strcmp(password3,password)==0) || (strcmp(user_id4,user_id)==0 &&strcmp(password4,password)==0) || (strcmp(new_id,user_id)==0 &&strcmp(new_pass,password)==0))
    {
	int i;
	for (i=30; i<200; i++)
	{
	delay(2);
	setcolor(i/10);
	arc(midx, midx+50, 0, 180, i-10);
	}
	gotoxy(21,25);
	printf("Username and password accepted, Welcome!");
	getch();
	password_count=3;
	ls();
    }
    else
    {
	while(password_count>=0)
	{
		int choice;
//		rectangle(midx-310,midy-100,midx+310,midy+230);//i3
		gotoxy(4,11);
		printf("Invalid user id and/or password!");
		gotoxy(4,13);
		printf("Do you wish to continue or create a guest account?");
		gotoxy(4,14);
		printf("1. continue.");
		gotoxy(4,15);
		printf("2. Create new.");
		gotoxy(4,16);
		printf("3. Exit.");
		gotoxy(4,18);
		printf("Your choice: ");
		scanf("%d",&choice);
		if(choice==1)
			{
				gotoxy(4,20);
				printf("You have %d attempts left!",--password_count);
				if(password_count==0)
				{
					gotoxy(4,21);
					printf("press any key to exit!");
					getch();
					exit(0);
				}
				gotoxy(4,21);
				printf("Press any key to continue...");
				getch();
				pc();
				break;
			}
		else if(choice==2)
			{
				gotoxy(4,20);
				printf("Enter a new guest id: ");
				scanf("%s",&new_id);
				gotoxy(4,21);
				printf("Enter a new guest password: ");
				scanf("%s",&new_pass);
				gotoxy(4,23);
				printf("Id and password created for the guest!");
				gotoxy(4,24);
				printf("press any key to return to the main menu.\n");
				getch();
				pc();
			 //	break;
			}
		else if(choice==3)
			exit(0);
		else
			{
			gotoxy(4,20);
			printf("Wrong choice entered, please try again!");
			pc();
			getch();
			break;
			}
	}
    }
    getch();
    //exit(0);
    closegraph();
}


int recta(int midx,int midy,int a)
{
    int ch;
    if(a==0)
    delay(100);
    rectangle(midx-319,midy-239,midx+319,midy+239);//o1
    rectangle(midx-317,midy-237,midx+317,midy+237);//o2
    if(a==0)
    delay(150);
    rectangle(midx-310,midy-230,midx+310,(midy+20)-175);//o3
    rectangle(midx-305,midy-225,midx+165,(midy+20)-180);//i1
    rectangle(midx+170,midy-225,midx+305,(midy+20)-180);//i2
    if(a==0)
    delay(200);
    rectangle(midx-310,midy-150,midx+310,midy-105);//i3
    rectangle(midx-310,midy-100,midx+310,midy+230);//i3
    a=1;
return a;
}