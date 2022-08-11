//min num of n num
#include<stdio.h>
#include<stdlib.h>
//positive and negative

int MinNumber(int Arr[], int iLength)
{
    int iMin=Arr[0];
    int iCnt=0;

 for(iCnt=0;iCnt<iLength; iCnt++)

{
    if(iMin >Arr[iCnt])
    {
       iMin=Arr[iCnt];  //logic for max

    }
    
}
     return iMin;
}

int main()
{
    int iCnt=0;
    int iRet=0;
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
iRet= MinNumber(ptr, iSize);// func call
printf("Min is: %d \n", iRet);

free(ptr);
return 0;
}