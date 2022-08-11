//ACCEPT N NUM and show the largest numbers of that n numbers

#include<stdio.h>
#include<stdlib.h>
int LargestNumber(int Arr[], int iLength)
{
    int iMax=0;
    int iCnt=0;

 for(iCnt=0;iCnt< iLength; iCnt++)

{
    if(iMax= Arr[iCnt]);
    {
       iMax=Arr[iCnt];  //logic for max

    }
    
}
     return iMax;
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

for(iCnt=0; iCnt<iSize; iCnt++)
{
    scanf("%d", &ptr[iCnt]);
}
iRet= LargestNumber(ptr, iSize);// func call
printf("Largest is: %d \n", iRet);

free(ptr);
return 0;
}