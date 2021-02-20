//include these header files:
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>
#include"main.h"

void riddle(int,int);
void calculator(int,int);
void head_and_tail(int,int);
void weather(int,int);
void currency_converter(int,int);
void temperature_converter(int,int);
void quotes(int,int);
void bmi_calc(int,int);
void assi_info(int,int);
int rect(int,int,int,int);
void assistant_menu();
void anoth_rect(int,int);

void ast()
{
assistant_menu();
cleardevice();
getch();
}

int cnt=0;

void assistant_menu()
{
int m;
//clrscr();
int gdriver = DETECT, gmode,midx,midy;
int hour,minute,second,choice;
struct date today;
struct time stime;
gettime(&stime);
getdate(&today);
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
midx = getmaxx() / 2;
midy = getmaxy() / 2;
cleardevice();
cnt=rect(midx,midy,1,cnt);
gotoxy(28,4);
printf("ASSISTANT");
gotoxy(63,3);
printf("Date: %d/%d/%d",today.da_day,today.da_mon,today.da_year);
gotoxy(63,4);
printf("Time: %d:%d:%d",stime.ti_hour,stime.ti_min,stime.ti_sec);
randomize();
gotoxy(39,8);
printf("[PRESS]");
gotoxy(4,9);
printf("Lets's solve some riddles.		(1)");
gotoxy(4,10);
printf("Calculator.				(2)");
gotoxy(4,11);
printf("Head and tail.			(3)");
gotoxy(4,12);
printf("Give me the weather forcast.		(4)");
gotoxy(4,13);
printf("I want to convert currency.		(5)");
gotoxy(4,14);
printf("I want to convert temperature.	(6)");
gotoxy(4,15);
printf("Show me some motivational quotes.	(7)");
gotoxy(4,16);
printf("BMI calculator.			(8)");
gotoxy(4,17);
printf("Info about the assistant.		(9)");
gotoxy(4,18);
printf("Main menu.			       (10)");
gotoxy(4,19);
printf("Exit.			       (11)");
gotoxy(10,21);
printf("Your choice: ");
scanf("%d",&m);
switch(m)
{
case 1:
riddle(midx,midy);
break;
case 2:
calculator(midx,midy);
break;
case 3:
head_and_tail(midx,midy);
break;
case 4:
weather(midx,midy);
break;
case 5:
currency_converter(midx,midy);
break;
case 6:
temperature_converter(midx,midy);
break;
case 7:
quotes(midx,midy);
break;
case 8:
bmi_calc(midx,midy);
break;
case 9:
assi_info(midx,midy);
break;
case 10:
nc();

break;
case 11:
{
	gotoxy(4,23);
	printf("Press any key to exit!");
	getch();
	exit(0);
}
default:
gotoxy(4,22);
printf("Invalid choice!");
break;
}
getch();
}

int rect(int midx,int midy,int a,int cnt)
{
cleardevice();
if(a==1 && cnt==0)
    delay(100);
    rectangle(midx-319,midy-239,midx+319,midy+239);//o1
    rectangle(midx-317,midy-237,midx+317,midy+237);//o2
if(a==1)
{
    if(cnt==0)
	delay(150);
    rectangle(midx-310,midy-230,midx+310,(midy+20)-175);//o3
}
if(a==1)
{
    if(cnt==0)
	delay(250);
    rectangle(midx-305,midy-225,midx+165,(midy+20)-180);//i1
    rectangle(midx+170,midy-225,midx+305,(midy+20)-180);//i2
    rectangle(midx-310,midy-150,midx+310,midy+230);//i3
}
if(a!=1)
{
//gotoxy(38,3);
gotoxy(29,4);
rectangle(midx-310,midy-230,midx+310,(midy+20)-175);//o3
rectangle(midx-310,midy-150,midx+310,midy+230);//i3
(a==2)?printf("---------RIDDLE---------"):(a==3)?printf("-------CALCULATOR-------"):(a==4)?printf("------HEAD AND TAIL------"):(a==5)?printf("----WEATHER FORCAST----"):(a==6)?printf("--CURRENCY CONVERTER--"):(a==7)?printf("--MOTIVATIONAL QUOTES--"):(a==8)?printf("-----BMI CALCULATOR----"):(a==9)?printf("-ASSISTANT INFORMATION-"):printf("wrong");
gotoxy(4,8);
}
cnt=2;
return cnt;
}

void anoth_rect(int midx,int midy)
{
	rectangle(midx-319,midy-239,midx+319,midy+239);//o1
	rectangle(midx-317,midy-237,midx+317,midy+237);//o2
	rectangle(midx-310,midy-230,midx+310,(midy+20)-175);//o3
	rectangle(midx-310,midy-150,midx+310,midy+230);//i3
}

//*Riddle:
void riddle(midx,midy)
{
int rv,r_ch;
char answer[20];
clrscr();
rect(midx,midy,2,1);
rv=rand()%100;
if(rv>=0 && rv<11)
{
printf("My goal is to have $12.");
gotoxy(4,9);
printf("If I save $1 a month then it will take me 12 months to save $12.");
gotoxy(4,10);
printf("If I save $2 a month then it will take me 6 months to save $12.");
gotoxy(4,11);
printf("What if I saved $1.50 each month?");
gotoxy(4,12);
printf("How many months would it take me to save $12?");
gotoxy(10,14);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,16);
(strcmp(answer,"8")==0 || strcmp(answer,"eight")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is 8/Eight.");
gotoxy(4,18);
//
}
else if(rv>=11 && rv<21)
{

printf("I start with M and end with X. I have a never ending amount of letters.");
gotoxy(4,9);
printf("What am I?");
gotoxy(10,11);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,13);
(strcmp(answer,"mailbox")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is mailbox.");
gotoxy(4,15);
}
else if(rv>=21 && rv<31)
{
printf("I have a head & no body, but I do have a tail. What am I?");
gotoxy(10,9);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,11);
(strcmp(answer,"coin")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is coin.");
gotoxy(4,13);
}
else if(rv>=31 && rv<41)
{
printf("If you are running in a race and pass the second place person");
gotoxy(4,9);
printf("what place are you in?");
gotoxy(10,11);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,13);
(strcmp(answer,"2nd")==0 || strcmp(answer,"second")==0 || strcmp(answer,"2")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is 2nd/second");
gotoxy(4,15);
}
else if(rv>=41 && rv<51)
{
printf("I can be made and I can be played. I can be cracked and I can be told.");
gotoxy(4,9);
printf("What am I?");
gotoxy(10,11);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,13);
(strcmp(answer,"joke")==0 || strcmp(answer,"jokes")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is joke");
gotoxy(4,15);
}
else if(rv>=51 && rv<61)
{
printf("What has a bed but doesn't sleep and a mouth but never eats?");
gotoxy(10,10);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,12);
(strcmp(answer,"river")==0 || strcmp(answer,"rivers")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is river");
gotoxy(4,14);
}
else if(rv>=61 && rv<71)
{
printf("We see it once in a year, twice in a week but never in a day.");
gotoxy(4,9);
printf("What is it?");
gotoxy(10,11);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,13);
(strcmp(answer,"E")==0 || strcmp(answer,"e")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is e");
gotoxy(4,15);
}
else if(rv>=71 && rv<81)
{
printf("I am a container with no sides and no lid, yet golden treasure lays inside.");
gotoxy(4,9);
printf("What am I?");
gotoxy(10,11);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,13);
(strcmp(answer,"egg")==0 || strcmp(answer,"eggs")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is egg");
gotoxy(4,15);
}
else if(rv>=81 && rv<91)
{
printf("Which letter of the alphabet contains the most water?");
gotoxy(10,10);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,12);
(strcmp(answer,"C")==0 || strcmp(answer,"c")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is c");
gotoxy(4,14);
}
else if(rv>=91 && rv<101)
{
printf("You buy me to eat, but never eat me. What am I?");
gotoxy(10,10);
printf("Your answer: ");
scanf("%s",&answer);
gotoxy(10,12);
(strcmp(answer,"utensils")==0 || strcmp(answer,"utensil")==0)?printf("Congratulations! Your answer is correct!"):printf("Oh, that's the wrong answer! The correct answer is utensil");
gotoxy(4,14);
}
printf("Do you want to solve some more riddles (1-yes)||(2-no)? ");
scanf("%d",&r_ch);
(r_ch==1)?riddle(midx,midy):assistant_menu();
}
//*calci:
void calculator(int midx,int midy)
{
    static float no1=0,no2=0;
    int calci_choice;
    clrscr();
    rect(midx,midy,3,1);
    printf("Enter number 1: ");
    scanf("%f",&no1);
    gotoxy(4,9);
    printf("Enter number 2: ");
    scanf("%f",&no2);
    gotoxy(10,11);
    printf("1. addition.");
    gotoxy(10,12);
    printf("2. subtraction.");
    gotoxy(10,13);
    printf("3. multiplication.");
    gotoxy(10,14);
    printf("4. division.");
    gotoxy(10,15);
    printf("5. all operations.");
    gotoxy(10,16);
    printf("6. Return to main menu.");
    gotoxy(10,17);
    printf("7. Exit.");
    gotoxy(15,19);
    printf("Your choice: ");
    scanf("%d",&calci_choice);
    gotoxy(10,21);
    if(calci_choice==1)
	printf("addition of %.0f + %.0f = %.2f",no1,no2,no1+no2);
    else if(calci_choice==2)
	printf("subtraction of %.0f - %.0f = %.2f",no1,no2,no1-no2);
    else if(calci_choice==3)
	printf("multiplication of %.0f * %.0f = %.2f",no1,no2,no1*no2);
    else if(calci_choice==4)
	printf("division of %.0f / %.0f = %.2f",no1,no2,no1/no2);
    else if(calci_choice==5)
	{
		printf("addition of		%.0f + %.0f	= %.2f",no1,no2,no1+no2);
		gotoxy(10,22);
		printf("subtraction of		%.0f - %.0f	= %.2f",no1,no2,no1-no2);
		gotoxy(10,23);
		printf("multiplication of	%.0f * %.0f	= %.2f",no1,no2,no1*no2);
		gotoxy(10,24);
		printf("division of		%.0f / %.0f	= %.2f",no1,no2,no1/no2);
		gotoxy(4,25);
		printf("\n   Press any key to return to the main menu.");
		anoth_rect(midx,midy);
		getch();
		assistant_menu();
	}
    else if(calci_choice==6)
	assistant_menu();
    else if(calci_choice==7)
	{
		printf("Ok, press any to exit!");
		getch();
		exit(0);
	}
    else
	printf("Wrong choice!");
    if(calci_choice==(1||2||3||4))
    {
    gotoxy(4,23);
    printf("Press any key to return to the main menu.");
    getch();
    assistant_menu();
    }
}

//*roll a die:
void head_and_tail(midx,midy)
{
int random_answer,no;
char call[5];
clrscr();
rect(midx,midy,4,1);
printf("Make a call(head/heads/h | tail/tails/t): ");
scanf("%s",&call);
gotoxy(10,10);
printf("Ok, the coin is rolling...");
gotoxy(10,11);
printf("Press any key to stop the coin.");
getch();
gotoxy(10,13);
randomize();
if(rand()%2==0)
{
    printf("Heads appeared!");
    gotoxy(10,14);
    ((strcmp(call,"heads")==0) || (strcmp(call,"head")==0) || (strcmp(call,"h")==0))?printf("Congratulation! you win..."):((strcmp(call,"tails")==0) || (strcmp(call,"tail")==0) || (strcmp(call,"t")==0))?printf("Sorry you lose! Try again later...!"):printf("");
}
else
{
    printf("Tails appeared!");
    gotoxy(10,14);
    ((strcmp(call,"tails")==0) || (strcmp(call,"tail")==0) || (strcmp(call,"t")==0))?printf("Congratulation! you win..."):((strcmp(call,"heads")==0) || (strcmp(call,"head")==0) || (strcmp(call,"h")==0))?printf("Sorry you lose! Try again later...!"):printf("");
}
gotoxy(4,16);
printf("Press any key to return to the main menu.");
getch();
assistant_menu();
}

//*weather forcast:
void weather(int midx,int midy)
{
    int hour,minute,second;
    struct date today;
    struct time stime;
    int rv;
    gettime(&stime);
    getdate(&today);
    rect(midx,midy,5,1);
    printf("Today's Date: %d|%d|%d & Time: %d:%d:%d",today.da_day,today.da_mon,today.da_year,stime.ti_hour,stime.ti_min,stime.ti_sec);
    gotoxy(10,10);
    if(stime.ti_hour>=1 && stime.ti_hour<=5)
    {
	printf("It is night time...");
	gotoxy(10,11);
	printf("The weather is very cold and humid.");
	randomize();
	rv=rand()%20;
	if(rv>=0 && rv<5)
		rv+=13;
	else if(rv>=5 && rv<10)
		rv+=9;
	else if(rv>=10 && rv<15)
		rv+=4;
	gotoxy(4,13);
	printf("Current temperature is: %d degree C",rv);
    }
    else if((stime.ti_hour>5 && stime.ti_hour<=12))// && (minute>=0) && (second>=0))
    {
	printf("It's morning...");
	gotoxy(10,11);
	printf("The weather is cold and has dew.");
	randomize();
	rv=rand()%25;
	if(rv>=0 && rv<5)
		rv+=18;
	else if(rv>=5 && rv<10)
		rv+=12;
	else if(rv>=10 && rv<15)
		rv+=7;
	else if(rv>=15 && rv<20)
		rv+=4;
	gotoxy(4,13);
	printf("Current temperature is: %d degree C",rv);
    }
    else if((stime.ti_hour>12 && stime.ti_hour<=17))// && (minute>=0) && (second>=0))
    {
	printf("Its day time...");
	gotoxy(10,11);
	printf("The weather is sunny and hot this afternoon.");
	randomize();
	rv=rand()%35;
	if(rv>=0 && rv<10)
		rv+=24;
	else if(rv>=10 && rv<20)
		rv+=14;
	else if(rv>=20 && rv<30)
		rv+=4;
	gotoxy(4,13);
	printf("Current temperature is: %d degree C.",rv);
    }
    else if((stime.ti_hour>17 && stime.ti_hour<24))// && (minute>0) && (second>=0))
    {
	printf("Its evening...");
	gotoxy(10,11);
	printf("The weather is dusky and a bit cold.");
	randomize();
	rv=rand()%30;
	if(rv>=0 && rv<5)
		rv+=23;
	else if(rv>=5 && rv<10)
		rv+=17;
	else if(rv>=10 && rv<15)
		rv+=12;
	else if(rv>=15 && rv<20)
		rv+=7;
	else if(rv>=15 && rv<20)
		rv+=4;
	gotoxy(4,13);
	printf("Current temperature is: %d degree C",rv);
    }
    gotoxy(4,16);
    printf("Press any key to return to the main menu.");
    getch();
    assistant_menu();
}

//*Currency:
void currency_converter(int midx,int midy)
{
float currency;
int cur_ch,inr_ch,usd_ch,eur_ch,cny_ch,gbp_ch;
static float usd1=0.0154,eur1=0.013,cny1=0.1019,gbp1=0.0117,inr2=65.07,eur2=0.8492,cny2=6.6275,gbp2=0.7586,inr3=76.64,usd3=1.1776,cny3=7.8055,gbp3=0.8934,inr4=9.8183,usd4=0.1509,eur4=0.1281,gbp4=0.1148,inr5=85.779,usd5=1.3183,eur5=1.1195,cny5=8.7073;
clrscr();
rect(midx,midy,6,1);
printf("Enter the Currency amount to convert: ");
scanf("%f",&currency);
gotoxy(10,10);
printf("In which currency have you entered the amount? ");
gotoxy(10,11);
printf("[ 1. INR. | 2. USD. | 3. EUR. | 4. CNY. | 5. GBP. | 6. Exit. ]");
gotoxy(15,13);
printf("Enter your choice in number: ");
scanf("%d",&cur_ch);
gotoxy(10,15);
if(cur_ch==1)
{
    printf("To which currency do you want to convert it in? ");
    gotoxy(10,16);
    printf("[ 1. USD. | 2. EUR.  | 3. CNY. | 4. GBP. | 5. Exit. ]");
	gotoxy(15,18);
    printf("Enter your choice in number: ");
    scanf("%d",&inr_ch);
    gotoxy(10,20);
    if(inr_ch==1)
	printf("%f INR in USD is: %f",currency,currency*usd1);
    else if(inr_ch==2)
	printf("%f INR in EUR is: %f",currency,currency*eur1);
    else if(inr_ch==3)
	printf("%f INR in CNY is: %f",currency,currency*cny1);
    else if(inr_ch==4)
    printf("%f INR in GBP is: %f",currency,currency*gbp1);
    else if(inr_ch==5)
    {
	gotoxy(4,20);
	printf("Ok, tap any key to exit...");
	getch();
	exit(0);
    }
    else
	{printf("Wrong choice entered! Press any key to return to the main menu...!");}
    gotoxy(4,22);
    printf("Press any key to return to the main menu.");
    getch();
assistant_menu();
}
else if(cur_ch==2)
{
    printf("To which currency do you want to convert it in? ");
    gotoxy(10,16);
    printf("[ 1. INR. | 2. EUR.  | 3. CNY. | 4. GBP. | 5. Exit. ]");
    gotoxy(15,18);
    printf("Enter your choice in number: ");
    scanf("%d",&usd_ch);
    gotoxy(10,20);
    if(usd_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr2);
    else if(usd_ch==2)
	printf("%f choice in EUR is: %f",currency,currency*eur2);
    else if(usd_ch==3)
	printf("%f choice in CNY is: %f",currency,currency*cny2);
    else if(usd_ch==4)
	printf("%f choice in GBP is: %f",currency,currency*gbp2);
    else if(usd_ch==5)
    {
	gotoxy(4,20);
	printf("Ok, tap any key to exit...");
	getch();
	exit(0);
    }
    else
	{printf("Wrong choice entered! Press any key to return to the main menu...");}
    gotoxy(4,22);
    printf("Press any key to return to the main menu.");
    getch();
    assistant_menu();
}
else if(cur_ch==3)
{
    printf("To which currency do you want to convert it in? ");
    gotoxy(10,16);
    printf("[ 1. INR. | 2. USD.  | 3. CNY. | 4. GBP. | 5. Exit. ]");
    gotoxy(15,18);
    printf("Enter your choice in number: ");
    scanf("%d",&eur_ch);
    gotoxy(10,20);
    if(eur_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr3);
    else if(eur_ch==2)
	printf("%f choice in USD is: %f",currency,currency*usd3);
    else if(eur_ch==3)
	printf("%f choice in CNY is: %f",currency,currency*cny3);
    else if(eur_ch==4)
    printf("%f choice in GBP is: %f",currency,currency*gbp3);
    else if(eur_ch==5)
    {
	gotoxy(4,20);
	printf("Ok, tap any key to exit...");
	getch();
	exit(0);
    }
    else
	{printf("Wrong choice entered! Press any key to return to the main menu...!");}
    gotoxy(4,22);
    printf("Press any key to return to the main menu.");
    getch();
    assistant_menu();
}
else if(cur_ch==4)
{
    printf("To which currency do you want to convert it in? ");
    gotoxy(10,16);
    printf("[ 1. INR. | 2. USD.  | 3. EUR. | 4. GBP. | 5. Exit. ]");
    gotoxy(15,18);
    printf("Enter your choice in number: ");
    scanf("%d",&cny_ch);
    gotoxy(10,20);
    //printf("cny_ch: %f,currency: %f\n\n",cny_ch,currency);
    if(cny_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr4);
    else if(cny_ch==2)
	printf("%f choice in USD is: %f",currency,currency*usd4);
    else if(cny_ch==3)
	printf("%f choice in EUR is: %f",currency,currency*eur4);
    else if(cny_ch==4)
	{printf("%f choice in GBP is: %f",currency,currency*gbp4);}
    else if(cny_ch==5)
    {
	gotoxy(4,20);
	printf("Ok, tap any key to exit...");
	getch();
	exit(0);
    }
    else
	{printf("Wrong choice entered! Press any key to return to the main menu...!");}
    gotoxy(4,22);
    printf("Press any key to return to the main menu.");
    getch();
    assistant_menu();
}
else if(cur_ch==5)
{
    printf("To which currency do you want to convert it in? ");
    gotoxy(10,16);
    printf(" | 1. INR. | 2. USD. | 3. EUR. | 4. CNY. | 5. Exit. ]");
    gotoxy(15,18);
    printf("Enter your choice in number: ");
    scanf("%d",&gbp_ch);
    gotoxy(10,20);
    if(gbp_ch==1)
	printf("%f choice in INR is: %f",currency,currency*inr5);
    else if(gbp_ch==2)
	printf("%f choice in USD is: %f",currency,currency*usd5);
    else if(gbp_ch==3)
	printf("%f choice in EUR is: %f",currency,currency*eur5);
    else if(gbp_ch==4)
	printf("%f choice in CNY is: %f",currency,currency*cny5);
    else if(gbp_ch==5)
    {
	gotoxy(4,20);
	printf("Ok, tap any key to exit...");
	getch();
	exit(0);
    }
    else
	{printf("Wrong choice entered! Press any key to return to the main menu...!");}
    gotoxy(4,22);
    printf("Press any key to return to the main menu.");
    getch();
    assistant_menu();
}
else if(cur_ch==6)
{
    gotoxy(4,15);
    printf("Ok, tap any key to exit...");
    getch();
    exit(0);
}
else if(cur_ch!=(1||2||3||4||5||6))
{
    gotoxy(4,15);
    printf("Wrong choice entered!");
    getch();
    exit(0);
}
}

//*Temperature:
void temperature_converter(int midx,int midy)
{
    int c,c1,c2,c3;
    c1=c2=c3=0;
    rect(midx,midy,7,1);
    printf("Select the temperature which you want to convert: ");
    gotoxy(10,9);
    printf("[ 1. fahrenheit. | 2. celcius. | 3. kelvin. ]");
    gotoxy(15,11);
    printf("Enter your choice in number: ");
    scanf("%d",&c);
    gotoxy(4,13);
    if(c==1)
    {
	float fah_temp=0;
	printf("Ok, to which temperature you wanna convert it in?");
	gotoxy(10,14);
	printf("[ 1. To celcius. | 2. to kelvin. ]");
	gotoxy(15,16);
	printf("Your choice in number: ");
	scanf("%d",&c1);
	gotoxy(10,19);
	if(c1==1)
	{
	    printf("Enter your temperature: ");
	    scanf("%f",&fah_temp);
	    gotoxy(4,22);
	    printf("Your temperature: %.2f(fahrenheit) in celcius is: %.2f",fah_temp,((fah_temp-32)*5/9));
	}
	else if(c1==2)
	{
	    printf("Enter your temperature: ");
	    scanf("%f",&fah_temp);
	    gotoxy(4,22);
	    printf("Your temperature: %.2f(fahrenheit)  in kelvin is: %.2f",fah_temp,((fah_temp-32)*5/9+273.15));
	}
	else
	    printf("Wrong choice entered!");
	gotoxy(4,23);
	printf("Press any key to return to the main menu.");
	getch();
	assistant_menu();
    }
    else if(c==2)
    {
	float cel_temp;
	printf("Ok, in which temperature do you wanna convert it in?");
	gotoxy(10,14);
	printf("1. To fahrenheit. | 2. to kelvin. ]");
	gotoxy(15,16);
	printf("Your choice in number: ");
	scanf("%d",&c2);
	gotoxy(10,19);
	if(c2==1)
	{
	    printf("Enter your temperature: ");
	    scanf("%f",&cel_temp);
	    gotoxy(4,22);
	    printf("Your temperature: %.2f(celcius) in fahrenheit is: %.2f",cel_temp,((cel_temp*9/5)+32));
	}
	else if(c2==2)
	{
	    printf("Enter your temperature: ");
	    scanf("%f",&cel_temp);
	    gotoxy(4,22);
	    printf("Your temperature: %.2f(celcius) in kelvin is: %.2f",cel_temp,(cel_temp+273.15));
	}
	else
	    printf("Wrong choice entered!");
	gotoxy(4,23);
	printf("Press any key to return to the main menu.");
	getch();
	assistant_menu();
    }
    else if(c==3)
    {
	float kel_temp;
	printf("ok, in which temperature you wanna convert it in?");
	gotoxy(10,14);
	printf("[ 1. To fahrenheit. | 2. To celcius. ]");
	gotoxy(15,16);
	printf("Your choice: ");
	scanf("%d",&c3);
	gotoxy(10,19);
	if(c3==1)
	{
	    printf("Enter your temperature: ");
	    scanf("%f",&kel_temp);
	    gotoxy(4,22);
	    printf("Your temperature: %.2f(kelvin) in fahrenheit is: %.2f",kel_temp,((kel_temp-273.15)*9/5+32));
	}
	else if(c3==2)
	{
	    printf("Enter your temperature: ");
	    scanf("%f",&kel_temp);
	    gotoxy(4,22);
	    printf("Your temperature: %.2f(kelvin) in celcius: %.2f",kel_temp,(kel_temp-273.15));
	}
	else
		printf("Wrong choice entered!");
	gotoxy(4,23);
	printf("Press any key to return to the main menu.");
	getch();
	assistant_menu();
    }
    else
    {
	gotoxy(10,15);
	printf("Wrong choice entered!");
    }

}


//*quotes:
void quotes(int midx,int midy)
{
	int rv,ch;
	clrscr();
	rect(midx,midy,7,1);
	randomize();
	rv=rand()%100;
	gotoxy(4,8);
	while(1)
	{
		if(rv>=0 && rv<5)
		{
			printf("You can't use up creativity. The more you use, the more you have.");
			gotoxy(10,9);
			printf("-Maya Angelou");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=5 && rv<10)
		{
			printf("Never let go of that fiery sadness called desire.");
			gotoxy(10,9);
			printf("-Patti Smith");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=10 && rv<15)
		{
			printf("Challenges are gifts that force us to search for a new center of gravity.");
			gotoxy(4,9);
			printf("Don't fight them. Just find a new way to stand.");
			gotoxy(10,10);
			printf("-Oprah Winfrey");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=15 && rv<20)
		{
			printf("What would you do if you weren't afraid? ");
			gotoxy(10,9);
			printf("-Sheryl Sandberg");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=20 && rv<25)
		{
			printf("It is not true that people stop pursuing dreams because they grow old.");
			gotoxy(4,9);
			printf("They grow old because they stop pursuing dreams. ");
			gotoxy(10,10);
			printf("-Gabriel Garcia Marquez");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=25 && rv<30)
		{
			printf("Innovation distinguishes between a leader and a follower.");
			gotoxy(10,9);
			printf("-Steve Jobs");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=30 && rv<35)
		{
			printf("I have not failed. I've just found 10,000 ways that won't work. ");
			gotoxy(10,9);
			printf("-Thomas Edison");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=35 && rv<40)
		{
			printf("Hustle until you no longer need to introduce yourself. ");
			gotoxy(10,9);
			printf("-Anonymous");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=40 && rv<45)
		{
			printf("Things work out best for those who make the best of how things work out. ");
			gotoxy(10,9);
			printf("-John Wooden");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
		else if(rv>=45 && rv<50)
		{
			printf("If u're not willing to risk the usual,u'll have to settle for the ordinary.");
			gotoxy(10,9);
			printf("-Jim Rohn");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch); if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=50 && rv<55)
		{
			printf("If you don't value your time, neither will others. Stop giving away your");
			gotoxy(4,9);
			printf("time and talents. Value what you know & start charging for it. ");
			gotoxy(10,10);
			printf("-Kim Garst");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=55 && rv<60)
		{
			printf("Fortune sides with him who dares.");
			gotoxy(10,9);
			printf("-Virgil");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=60 && rv<65)
		{
			printf("Time is more valuable than money.");
			gotoxy(4,9);
			printf("You can get more money, but you cannot get more time. ");
			gotoxy(10,10);
			printf("-Jim Rohn");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=65 && rv<70)
		{
			printf("The person who doesn't know where his next dollar is coming from usually");
			gotoxy(4,9);
			printf("doesn't know where his last dollar went. ");
			gotoxy(10,10);
			printf("-Unknown");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=70 && rv<75)
		{
			printf("The longer you're not taking action the more money you're losing. ");
			gotoxy(10,9);
			printf("-Carrie Wilkerson");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=75 && rv<80)
		{
			printf("Never depend on single income. Make investments to create a second source");
			gotoxy(10,9);
			printf("-Warren Buffett");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=80 && rv<85)
		{
			printf("The more you learn, the more you earn.");
			gotoxy(10,9);
			printf("-Warren Buffett");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=85 && rv<90)
		{
			printf("The trouble for most people is they don't decide to get wealthy, they just");
			gotoxy(4,9);
			printf("dream about it. ");
			gotoxy(10,10);
			printf("-Michael Masters");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=90 && rv<95)
		{
			printf("All my life I knew that there was all the money you could want out there.");
			gotoxy(4,9);
			printf("All you have to do is go after it. ");
			gotoxy(10,10);
			printf("-Curtis Carlson");
			gotoxy(4,12);
			printf("Do you want to see some more?");
			gotoxy(10,14);
			printf("1. Yes.");
			gotoxy(10,15);
			printf("2. No.");
			gotoxy(10,17);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,19);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}


		}
		else if(rv>=95 && rv<100)
		{
			printf("People dont change, circumstances do! ");
			gotoxy(10,9);
			printf("-Sohail Ansari");
			gotoxy(4,11);
			printf("Do you want to see some more?");
			gotoxy(10,13);
			printf("1. Yes.");
			gotoxy(10,14);
			printf("2. No.");
			gotoxy(10,16);
			printf("Your choice: ");
			scanf("%d",&ch);
			if(ch==1)
				quotes(midx,midy);
			else
			{
				gotoxy(4,18);
				printf("Ok, press any key to return to the main menu!");
				getch(); assistant_menu(); break;
			}

		}
	else
		printf("Wrong choice entered!");
	}
}

void bmi_calc(midx,midy)
{
float weight=0,height=0,bmi=0;
int ch1,ch2;
clrscr();
rect(midx,midy,8,1);
printf("Enter your weight(kg)	: ");
scanf("%f",&weight);
gotoxy(4,9);
printf("Enter your height(m)		: ");
scanf("%f",&height);
bmi=weight/height;
bmi/=height;
gotoxy(10,11);
printf("Your Body Mass Index is: %.2f",bmi);
gotoxy(4,13);
bmi<18.75?printf("It's underweight"):(bmi<25)?printf("It's normal"):(bmi<30)?printf("It's overweight"):printf("It's obese");
gotoxy(4,14);
printf("press any key to return to the main menu!");
getch();
assistant_menu();
}

void assi_info(midx,midy)
{
int ch;
while(1)
{
clrscr();
rect(midx,midy,9,1);
printf("What do you want to ask me?");
gotoxy(10,10);
printf("What's your name?			(1)");
gotoxy(10,11);
printf("What does your name stands for?	(2)");
gotoxy(10,12);
printf("What's your Age?			(3)");
gotoxy(10,13);
printf("Who's your creator?			(4)");
gotoxy(10,14);
printf("Are you a bot?				(5)");
gotoxy(10,15);
printf("What do you like?			(6)");
gotoxy(10,16);
printf("What's your birthday?			(7)");
gotoxy(10,17);
printf("Who are your parents?			(8)");
gotoxy(10,18);
printf("Can you speak another language?	(9)");
gotoxy(10,19);
printf("Can you learn?			       (10)");
gotoxy(10,20);
printf("Return to Menu.		       (11)");
gotoxy(10,21);
printf("Exit.				       (12)");
gotoxy(10,23);
printf("Your choice: ");
scanf("%d",&ch);
gotoxy(4,25);
if(ch==11)
{
printf("Ok, Press any key to return to the main menu!");
getch();
assistant_menu();
}
else if(ch==12)
{
printf("Press aby key to Exit.");
getch();
exit(0);
}
else if(ch==4)
{
	printf("Mehul.\n   Vasanta.\n   Zahir.\n   Sohail.");
	anoth_rect(midx,midy);
	getch();
	continue;
}
else if(ch==7)
{
	printf("I dont have one, I go through a lot of versions!!\n   You can say I've 365 sort of birthdays");
	anoth_rect(midx,midy);
	getch();
	continue;
}
(ch==1)?printf("You can call me MAV!"):(ch==2)?printf("Macro Access Variable."):(ch==3)?printf("I was born in 2018."):(ch==5)?printf("I'd prefer to think of myself as your friend."):(ch==6)?printf("I crave knowledge! :)"):(ch==8)?printf("I dont have parents, but my creators are my like my family!"):(ch==9)?printf("Not yet, but surely in future!"):(ch==10)?printf("Absolutely, If you can teach me!"):getch();
getch();
}
}
