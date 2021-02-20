#include<conio.h>
#include<time.h>
#include<dos.h>
#include<graphics.h>
#include<stdio.h>
#include"main.h"

int nc()
{
    const float inr=65.07,eur=0.8492,cny=6.6275,gbp=0.7586,aud=1.2853,cad=1.2658,nzd=1.4499,sar=3.7504,sgd=1.3622,chf=0.9888;
    int gdriver = DETECT, gmode,midx,midy;
    int hour,minute,second,choice;
    struct date today;
    struct time stime;
    gettime(&stime);
    getdate(&today);
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;

    delay(100);
    rectangle(midx-319,midy-239,midx+319,midy+239);//o1
    rectangle(midx-317,midy-237,midx+317,midy+237);//o2

    delay(150);
    rectangle(midx-310,midy-230,midx+310,(midy+20)-175);//o3

    delay(200);
    rectangle(midx-305,midy-225,midx+165,(midy+20)-180);//i1
    rectangle(midx+170,midy-225,midx+305,(midy+20)-180);//i2
    gotoxy(23,4);
    printf("NOTIFICATION CENTRE");
    gotoxy(63,3);
    printf("Date: %d/%d/%d",today.da_day,today.da_mon,today.da_year);
    gotoxy(63,4);
    printf("Time: %d:%d:%d",stime.ti_hour,stime.ti_min,stime.ti_sec);

    delay(260);
    rectangle(midx-310,midy-150,midx+310,midy-125);//i3
    gotoxy(4,7);
    printf("1. Search Engine 2. Assistant. 3. Logout. 4. Exit. || Choice(1/2/3/4): ");

    delay(250);
    rectangle(midx-310,midy-120,midx+310,midy-75);//i4
    gotoxy(4,9);
    printf("Hey, Sohail/Mehul/Vasanta/Zahir!");
    gotoxy(4,10);
    printf("Here are some updates for you.\n\n");

    delay(275);
    rectangle(midx-310,midy-70,midx+310,(midy-15));//i5
    gotoxy(4,12);
    if(stime.ti_hour>=1 && stime.ti_hour<=5)
    {
	printf("It is night time...");
	gotoxy(4,13);
	printf("The weather is very cold and humid.");
	gotoxy(4,14);
	printf("Current temperature is: %d degree C",rand()%20);
    }
    else if((stime.ti_hour>5 && stime.ti_hour<=12))// && (minute>=0) && (second>=0))
    {
	printf("It's morning...");
	gotoxy(4,13);
	printf("The weather is cold and has dew.");
	gotoxy(4,14);
	printf("Current temperature is: %d degree C\n",rand()%25);
    }
    else if((stime.ti_hour>12 && stime.ti_hour<=17))// && (minute>=0) && (second>=0))
    {
	printf("Its day time...");
	gotoxy(4,13);
	printf("The weather is sunny and hot this afternoon");
	gotoxy(4,14);
	printf("Current temperature is: %d degree C",rand()%35);
    }
    else if((stime.ti_hour>17 && stime.ti_hour<24))// && (minute>0) && (second>=0))
    {
	printf("Its evening...");
	gotoxy(4,13);
	printf("The weather is dusky and a bit cold.");
	gotoxy(4,14);
	printf("Current temperature is: %d degree C",rand()%30);
    }

    delay(300);
    rectangle(midx-310,midy-10,midx+310,midy+115);//i6
    rectangle(midx-310,midy+20,midx+310,(midy+20));//l1

    gotoxy(4,16);
    printf("The current currency values w.r.t the USD(US Dollars) are as follows: ");

    delay(325);
    rectangle(midx,midy+25,midx,(midy+115));//l2
    rectangle(midx-305,midy+25,midx+305,(midy+115));//i7
    gotoxy(4,18);
    printf("INR(Indian rupees)");
    gotoxy(30,18);
    printf(":    %.1f",inr);
    gotoxy(43,18);
    printf("EUR(European euros)");
    gotoxy(69,18);
    printf(":    %.2f",eur);

    gotoxy(4,19);
    printf("CNY(Chinese Yen)");
    gotoxy(30,19);
    printf(":    %.2f",cny);
    gotoxy(43,19);
    printf("GBP(British Pound)");
    gotoxy(69,19);
    printf(":    %.2f",gbp);

    gotoxy(4,20);
    printf("AUD(Aust Dollars)");
    gotoxy(30,20);
    printf(":    %.2f",aud);
    gotoxy(43,20);
    printf("CAD(Canadian Dollars)");
    gotoxy(69,20);
    printf(":    %.2f",cad);

    gotoxy(4,21);
    printf("NZD(New Z's Dollars)");
    gotoxy(30,21);
    printf(":    %.2f",nzd);
    gotoxy(43,21);
    printf("SAR(Saudi Riyal)");
    gotoxy(69,21);
    printf(":    %.2f",sar);

    gotoxy(4,22);
    printf("SGD(Singapore Dollars)");
    gotoxy(30,22);
    printf(":    %.2f",sgd);
    gotoxy(43,22);
    printf("CHF(Swiss Franc)");
    gotoxy(69,22);
    printf(":    %.2f",chf);

    delay(350);
    rectangle(midx-310,midy+120,midx+310,midy+230);//i8
    rectangle(midx-310,midy+150,midx+310,midy+150);//l3

    gotoxy(4,24);
    delay(375);
    rectangle(midx-305,midy+155,midx+305,midy+230);//i9
    printf("Developers of this application are:\n\n");
    printf("   ********************  Ansari Sohail Mohammed Akbarali  *******************\n");
    printf("   ****************************  Vasantakumari Nadar  ***********************\n");
    printf("   ***************************  Zahir Abbas Amiri  **************************\n");
    printf("   ******************************  Mehul Jain  ******************************");

    rectangle(midx-317,midy-237,midx+317,midy+237);//o1
    rectangle(midx-319,midy-239,midx+319,midy+239);//o2
    rectangle(midx-310,midy+120,midx+310,midy+230);//i8
    rectangle(midx-310,midy+150,midx+310,midy+150);//l3
    rectangle(midx-305,midy+155,midx+305,midy+230);//i9*/

    gotoxy(75,7);
    //printf("Press: 1] Main menu. 2] Login page. 3. Exit. Choice(1/2/3): ");
    scanf("%d",&choice);
    if(choice==1)
	{
	cleardevice();
	clrscr();
	system("cls");
	se2();
	}
    else if(choice==2)
	ast();
    else if(choice==3)
	pc();
    else if(choice==4)
	exit(0);
    else
	nc();
   return choice;
}
