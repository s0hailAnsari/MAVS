 #include <graphics.h>
 #include <stdlib.h>
 #include <stdio.h>
 #include <conio.h>
 #include "main.h"

 int scr_count=2;

 void ls()
 {
    int gdriver = DETECT, gmode, errorcode;
    int maxx, maxy,i,j,x=35,y=15;
    initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
    maxx = getmaxx();
    maxy = getmaxy();
    if(scr_count==1)
    {
    nc();
    }
    else
    {
    gotoxy(x+2,y-2);
    printf("loading...");
    setcolor(15);
    rectangle((maxx/2)-55,(maxy/2)-20,(maxx/2)+64,(maxy/2)+5);
    floodfill((maxx/2)+1, (maxy/2)+1, 15);
    for(i=0;i<13;i++)
    {
	delay(100);
	gotoxy(x,y);
	printf("|");
	x++;
    for(j=0;j<5;j++)
    {
	//setcolor(getmaxcolor());
	setfillstyle(SOLID_FILL, i);
	rectangle(0, 0, maxx, maxy);
	circle(maxx / 3, maxy /2, 55);
	circle(maxx / 2, 20, 100);
	circle(maxx-20, maxy-50, 75);
	circle(20, maxy-20, 25);
	floodfill(2, 2, getmaxcolor());
    }
    if(i==12)
    {
    gotoxy(x-18,y+10);
    printf("Tap any key to continue!");
    }
    }
    getch();
    scr_count--;
    closegraph();
    nc();
    }
 }

