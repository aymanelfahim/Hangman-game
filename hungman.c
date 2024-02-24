#include <stdio.h>
#include <stdlib.h>
char cartoon [10][70] = {
  "\n\n\n\n\n\n_______\n",
  "\n   |\n   |\n   |\n   |\n   |\n___|___\n",
  "\n   /-----\n   |\n   |\n   |\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |\n   |\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |    |\n   |   \n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /\n___|___\n",
  "\n   /-----\n   |    |\n   |    O\n   |   /|\\\n   |   /|\n___|___\n"
};
int existe(char *a,char c)
{   char*s=a;
    int existe=0;
    while(s!=NULL)
    {
        if (c==*s)
        {
            return 1;
        }
        s++;

    }
    return 0;
}

int trouveindice(char*b,char c)
{
    char*s=b;
    while(s!=NULL)
    {
        if(*s==c)
        {
            return s-b;
        }
        s++;
    }
}
 char mot_a_trouver[] ="ENCORE";
  char mot_decouvert[] ="******";
int main()
{   int n=0;
char c;
int i;

while(n<10)
{
 c=scanf("%c",&c);
if(existe(mot_a_trouver,c))
{
     i=trouveindice(mot_a_trouver,c);
    mot_decouvert[i]=c;
}

else
{
    printf(cartoon[n]);
    n++;
}
}
if(n<10)
{
    printf("gagné");
}
}