//problem on n numbers
//array with loops
//with for loop
#include<stdio.h>
int main()
{
    auto int Arr[5];      //static allocation
     register int iCnt=0;  //register is used for fast access 

    printf("enter elements\n");

    for(iCnt=0; iCnt<5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }
   

    printf("Elements of array are: \n");
    
    for(iCnt=0; iCnt<5; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }

    return 0;
}