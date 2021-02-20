#include<stdio.h>
#include <stdlib.h>
#include"main.h"

struct SE
{
 int hash;
 char title[100],content[1000],area[100];
}en;

int border(int,int,int,int);
void se_menu();
int br_cnt=0,temp;

//FUNCTION TO INSERT RECORDS TO THE FILE
void insert()
{
 FILE *fp,*fp1;
 fp = fopen("new.txt", "a");
 fp1=fopen("temp1.txt","a");
 printf("Enter a HASH value	  	 	:");
 scanf("%d", &en.hash);
 printf("Enter the Title			   	:");
 scanf("%s", &en.title);
 printf("Enter the Content[press tab to end]	:");
 scanf("%[^\t]s", &en.content);
 printf("Enter the area of specification   	:");
 scanf("%s", &en.area);
 printf("\n\tDATA inserted!");
 getch();
 fprintf(fp1,"Hash: %d\nTitle: %s\nContent: %s\nArea of Specification: %s\n",en.hash,en.title,en.content,en.area);
 fwrite(&en, sizeof(en), 1, fp);
 fclose(fp1);
 fclose(fp);
}
//    FUNCTION TO DISPLAY RECORDS
void disp()
{
 FILE *fp1;
 fp1 = fopen("new.txt", "r");
 while (fread(&en, sizeof(en), 1, fp1))
 {
 printf("Hash   		: %d\n",en.hash);
 printf("Title  		: %s\n",en.title);
 printf("content		: %s\n",en.content);
 printf("area of specification	: %s\n\n",en.area);
 }
 getch();
 fclose(fp1);
}
//    FUNCTION TO SEARCH THE GIVEN RECORD
void HashSearch()
{
 FILE *fp2;
 int r, s, avl;
 printf("\nEnter the hash you want to search  :");
 scanf("%d", &r);
 avl = AvlHash(r);
 if (avl == 0)
  printf("\nHash No %d is not available in the file\nPress any key to return to the menu.",r);
 else
 {
  fp2 = fopen("new.txt", "r");
  while (fread(&en, sizeof(en), 1, fp2))
  {
   s = en.hash;
   if (s == r)
   {
    printf("\nHash number		= %d", en.hash);
    printf("\nTitle			= %s", en.title);
    printf("\nContent			= %s", en.content);
    printf("\nArea of specification	= %s\n", en.area);
   }
  }
  fclose(fp2);
 }
 getch();
}

//    FUNCTION TO CHECK GIVEN ROLL NO IS AVAILABLE //
void deletefile()
{
 FILE *fpo;
 FILE *fpt;
 int r, s;
 printf("Enter the hash you want to delete : ");
 scanf("%d", &r);
 if (AvlHash(r) == 0)
  {
  printf("\nHash %d is not available in the file\nPress any key to return to the menu.", r);
  getch();
  }
 else
 {
  fpo = fopen("new.txt", "r");
  fpt = fopen("TempFile", "w");
  while (fread(&en, sizeof(en), 1, fpo))
  {
   s = en.hash;
   if (s != r)
    fwrite(&en, sizeof(en), 1, fpt);
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("new.txt", "w");
  fpt = fopen("TempFile", "r");
  while (fread(&en, sizeof(en), 1, fpt))
   fwrite(&en, sizeof(en), 1, fpo);
  printf("\nRECORD DELETED\n");
  getch();
  fclose(fpo);
  fclose(fpt);
 }

}
int AvlHash(int rno)
{
 FILE *fp;
 int c;
 fp = fopen("new.txt", "r");
 while (!feof(fp))
 {
  fread(&en, sizeof(en), 1, fp);

  if (rno == en.hash)
  {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}

//search
void TitleSearch()
{
 FILE *fp2;
// int r, s, avl;
int c;
 struct SE *s;
 //continue
 char temp[100],avl[100];int i;
 printf("\nEnter the Topic Name you want to search  :");
 scanf("%s", &temp);
 for(i=0;i<100;i++)
	 avl[i] = avltopicname(temp[i]);
 if (strcmp(temp,avl[i]) == 0)
  printf("Topic: %s is not available in the file\n",temp);
 else
 {
  fp2 = fopen("new.txt", "r");
  while (fread(&en, sizeof(en), 1, fp2))
  {
   strcpy(s,en.title);
   //s=d(char*)malloc(sizeof(char));
   if (strcmp(s,temp)==0)
   {
    printf("\nHash value is	 = %d", en.hash);
    printf("\nTopic name	 = %s", en.title);
    printf("\nContents  	 = %s", en.content);
    printf("\nArea specification = %s\n", en.area);
   }
  }
  fclose(fp2);
 }
 getch();
}

//check weather available or not
int avltopicname(char TN[])
{
 FILE *fp;
 int c;
 fp = fopen("new.txt", "r");
 while (!feof(fp))
 {
  fread(&en, sizeof(en), 1, fp);

  if (strcmp(&en.title,TN)==0)
  {
   fclose(fp);
   return 1;
  }
 }
 fclose(fp);
 return 0;
}

//FUNCTION TO CHECK THE FILE IS EMPTY OR NOT
int empty()
{
 int c = 0,i;
 FILE *fp;
 fp = fopen("new.txt", "r");
 while (fread(&en, sizeof(en), 1, fp))
 {
  c = 1;
 }
 fclose(fp);
 return c;
}

int border(int n,int br_cnt,int bdis,int temp)
{
int i,j,k=80,l=2;
clrscr();
for(i=0;i<n;i++)
{
	if(br_cnt==0)
	delay(2);
	printf("*");
	for(j=0;j<3;j++)
	{
		if(i==79)
		{
			delay(20);
			printf("|");
			gotoxy(k,l);
			printf("|");
			l++;
		}
	}
	if(temp==0)
	for(j=0;j<18;j++)
	{
		if(i==159)
		{
			if(br_cnt==0)
			delay(2);
			printf("|");
			if(l==5)
			l++;
			gotoxy(k,l);
			printf("|");
			l++;
		}
	}
}
if(bdis==1)
{
gotoxy(33,3);
printf("SEARCH ENGINE");
}
else if(bdis==2)
{
gotoxy(37,3);
printf("INSERT\n\n\n\n");
}
else if(bdis==3)
{
gotoxy(38,3);
printf("DISPLAY\n\n\n\n");
}
else if(bdis==4)
{
gotoxy(39,3);
printf("SEARCH\n\n\n\n");
}
else if(bdis==5)
{
gotoxy(38,3);
printf("DELETE\n\n\n\n");
}
else if(bdis==6)
{
gotoxy(36,3);
printf("TITLE SEARCH\n\n\n\n");
}
else if(bdis==7)
{
gotoxy(35,3);
printf("HASH SEARCH\n\n\n\n");
}
else if(bdis==8)
{
gotoxy(35,3);
printf("WORD SEARCH\n\n\n\n");
}

br_cnt=2;
return br_cnt;
}


// MAIN PROGRAM
void se2()
{
 int c, emp,ch;
  clrscr();
 do
 {
  clrscr();
  br_cnt=border(240,br_cnt,1,0);
//  cnt=border(1,cnt);
  gotoxy(5,7);
  printf("INSERT	(1)");
  gotoxy(5,8);
  printf("DISPLAY	(2)");
  gotoxy(5,9);
  printf("SEARCH	(3)");
  gotoxy(5,10);
  printf("DELETE	(4)");
  gotoxy(5,11);
  printf("MAIN MENU	(5)");
  gotoxy(5,12);
  printf("EXIT	(6)");
  gotoxy(10,14);
  printf("Enter your choice: ");
  scanf("%d", &c);
  printf("\n");
  switch (c)
  {
  case 1:
   border(160,br_cnt,2,1);
   insert();
   break;
  case 2:
  {
   emp = empty();
   if (emp == 0)
    printf("\nThe file is EMPTY\n");
   else
    border(160,br_cnt,3,1);
    disp();
   break;
  }
  case 3:
  {
   border(160,br_cnt,4,1);
//   while(1)
  // {
   printf(" [Options]	[Press]\n\nTitle Name.	  (1)\nHash Search.	  (2)\nWord Search.	  (3)\nMenu.		  (4)\n\n\tYour Choice: ");
   scanf("%d",&ch);
   if(ch==1)
   {
	br_cnt=border(160,br_cnt,6,1);
	TitleSearch();
	//break;
   }
   else if(ch==2)
   {
	br_cnt=border(160,br_cnt,7,1);
	HashSearch();
	break;
   }
   else if(ch==3)
   {
	br_cnt=border(160,br_cnt,8,1);
	se1();
	break;
   }
   else if(ch==4)
   {
	se2();
	break;
   }
   else
	printf("\n\tIncorrect choice!");
   break;
   //}
  }
  case 4:
  {
   border(160,br_cnt,5,1);
   deletefile();
   break;
  }
   case 5:
   {nc();}
   case 6:
   {
   gotoxy(5,16);
   printf("Ok, tap any key to exit!");
   getch();
   exit(1);
   break;
   }
  default:
  {
   gotoxy(5,16);
   printf("Wrong choice, Please try again...[press any key]");
   getch();
   break;
   }
  }
 } while (c != 5);


}
