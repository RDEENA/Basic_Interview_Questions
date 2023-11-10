//c program to remove duplicate characters

#include <stdio.h>

int main()
{
    char a[10];
    int i,j,n=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j]||a[i]==a[j]+32||a[i]==a[j]-32)
            {
                a[j]='\0';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='\0')
        printf("%c",a[i]);
    }

    return 0;
}


deena
dena
============================================================================================
python program to check anagrams

str2=input()
str1=input()
if(len(str1)==len(str2)):
   if(sorted(str1)==sorted(str2)):
      print("anagrams")
   else:
        print("no")
---------------------------------------------------------------------
C program to sort strings
#include <stdio.h>

int main()
{
    char a[10];
    int i,j,n=0,c;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    n++;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            c=a[i];
            a[i]=a[j];
            a[j]=c;
        }
    }
}
printf("%s",a);
}
==========================================================================
//C program to check the position of the prime number

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int n,c=0,i,j,count=0,flag=1;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        c=0;flag=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
            
        }
        if(c==2)
        {
            count++;
            flag=1;
        }
    }
    if(flag==1)
    printf("%d",count);
    else
    printf("not prime");
}

================================================
//C program for lexical ordering
#include<stdio.h>
#include<stdbool.h>
#include<string.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    char a[10][10],c[10];
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a[i],a[j])>0)
            {
               strcmp(c,a[i]);
               strcmp(a[i],a[j]);
               strcpy(a[j],c);
            }
            
        }
    }
    for(i=0;i<n;i++)
    {
    printf("%s\n",a[i]);
    }
}
