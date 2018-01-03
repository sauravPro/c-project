#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <stdbool.h>

int main()
{
    char *str;
    int len=0,i=0,numOfChar=0;
    bool isSpace=false;
    printf("Enter the length of string : ");
    scanf("%d",&len);
    str=(char*)malloc(len*sizeof(char));
    //enter the characters
    printf("Enter the string : ");
    getchar();
    for(i=0;i<len;i++)
    {
        char c=getchar();
        if((int)c==10)      //break from loop if enter is pressed
            break;
        else
        {
         str[i]=c;
         numOfChar++;
        }
    }
    i=0;
    printf("Output : ");
    while(i<numOfChar)   //get the characters onr by one
    {
        int ascii=str[i];
        if((isSpace==true || i==0)&& ascii>96)  //capitalize the word after space
        {
            printf("%c",ascii-32);
            isSpace=false;
        }
        else
        {
            printf("%c",ascii);
        }
        if(ascii==32)       //space is encountered
            isSpace=true;
        i++;
    }
    free(str);
    return 0;
}
