// accept num nd one number and return last index of that number
// number ch index last

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchLastOccur(int Arr[], int iLength, int iNo)
{
    int iCnt=0;

 for(iCnt=iLength-1;iCnt>=0; iCnt--)  //LOGIC
{
    if(Arr[iCnt]==iNo)
    {
       
        break; 
    } 
}

    return iCnt;
}


int main()
{
    int iCnt=0;
    int iValue=0;
    int iRet=0;
    int*ptr=NULL;    
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

iRet= SearchLastOccur(ptr, iSize, iValue);
if(iRet==-1)
{
  printf("element is not there \n");

}
else
{
     printf("element last occur here %d \n", iRet);
}

free(ptr);
return 0;
}          