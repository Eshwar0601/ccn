#include <stdio.h>
#include<string.h>
#define MAX 1000
int main()
{
int si = 0, di = 0; /* si = source index, di = destination index*/
   char src[MAX], dest[MAX],ustuff[MAX];
   char flag1[] = "DLESTX", flag2[] = "DLEETX";

   //clrscr(); //clear the screen
   printf("Enter the STRING data   : ");
   scanf("%s", src);

   di=strlen(flag1); //get the string length of 'flag1'
   strcpy(dest,flag1); //copy 'flag1' to 'dest'

   //start of stuffing
   while(src[si] != '\0')
{
  if(src[si] == 'D' && src[si+1] == 'L' && src[si+2] == 'E')
  {
dest[di] = 'D', dest[di+1] = 'L', dest[di+2] = 'E', dest[di+3] = 'D', dest[di+4] = 'L', dest[di+5] = 'E';
di +=6;// update dest index
si+=3; // update source index
  }
  else
dest[di++] = src[si++];
} // end of while loop

dest[di] = '\0'; //add null char to the end of 'dest'
strcat(dest, flag2); //concatenate 'dest' & 'flag2'

printf("Stuffed message is      : %s", dest);
printf(" message is      : " );

int l=strlen(dest);
di=0;
while(di<=l-6)
{
    if(dest[di] == 'D' && dest[di+1] == 'L' && dest[di+2] == 'E'&&(dest[di+3]=='S'||dest[di+3]=='E')&& dest[di+4]=='T'&&dest[di+5]=='X')
  {
di +=6;// update dest index
  }
else if(dest[di] == 'D' && dest[di+1] == 'L' && dest[di+2] == 'E'&&dest[di+3]=='D'&&dest[di+4]=='L'&&dest[di+5]=='E')
  {
      printf("DLE");
di +=6;// update dest index

  }
else
{
  printf("%c",dest[di++]);
}
}

    return 0;
}
