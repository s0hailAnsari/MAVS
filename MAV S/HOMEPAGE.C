#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include"main.h"

void hp()
{
int i,j,a1,a2,b1,b2,c1,c2,d1,d2,a,b,c,d,no;
int midx, midy;
char str[100],str1[100];
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");
midx = getmaxx() / 2;
midy = getmaxy() / 2;
settextstyle(1, 0, 4);
settextjustify(1, 1);
setbkcolor(CYAN);
a=a1=a2=midx-310;
b=b1=b2=midy-235;
c=c1=c2=midx+310;
d=d1=d2=midy+235;


for(i=0;i<37;i++)
{
delay(25);
setcolor(15);
rectangle(a1,b1,c1,d1-285);
a1+=5,b1+=5,c1-=5;
setcolor(15);
rectangle(a2,b2+285,c2,d2);
a2+=5,c2-=5,d2-=5;
for(j=0;j<2;j++)
{
setcolor(3);
rectangle(midx -310,midy - 50,midx + 310, midy + 50);
setfillstyle(9,15 );
floodfill(midx, midy, 3);
sprintf(str, "Macro Access Variable Search engine");
outtextxy(midx, midy, str);
}
}
cleardevice();
clrscr();
for(i=0;i<37;i++)
{
setcolor(15);
rectangle(a,b,c,d);
a+=5,b+=5,c-=5,d-=5;
}

setbkcolor(15);
setcolor(3);
rectangle(midx -310,midy - 50,midx + 310, midy + 50);
setfillstyle(9,15);
floodfill(midx, midy, 15);
sprintf(str, "Macro Access Variable Search engine");
outtextxy(midx, midy, str);
getch();
pc();
closegraph();
}
