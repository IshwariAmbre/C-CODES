// accept num n search 
//without flag
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[], int iLength, int iNo)
{
    int iCnt=0;

 for(iCnt=0;iCnt<iLength; iCnt++)
{
    if(Arr[iCnt]==iNo)
    {
       
       break; //logic for searching without flag
    } 
}
if(iCnt==iLength)
{
    return false;
}
else
{
    return true;
}
     
}
int main()
{
    int iCnt=0;
    int iValue=0;
    bool bRet=0;
    int*ptr=NULL;    //pointer set to null
    int iSize=0;  

printf("enter num of elements:");
scanf("%d", &iSize);

ptr = (int*)malloc(sizeof(int)*iSize);

printf("enter value:\n ");

for(iCnt=0; iCnt< iSize; iCnt++)
{
    scanf("%d", &ptr[iCnt]);
}
printf("enter element for searching:\n ");
scanf("%d", &iValue);

bRet= Search(ptr, iSize, iValue);// func 
if(bRet==true)
{
  printf("element is there \n");

}
else
{
     printf("element is not there \n");
}

free(ptr);
return 0;
}