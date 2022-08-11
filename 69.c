//accept from user and display and free memory

#include<stdio.h>
#include<stdlib.h>        //for malloc and free

void DisplayArray(int Arr[], int iLength )
{
      int iCnt=0;
      
     printf("Elements of array are: \n");
    
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        printf("%d\n", Arr[iCnt]);
    }
            
}
int main()
{  
      int *ptr= NULL;
     register int iCnt=0;  //scope starts
     int iSize=0;

    printf("enter number of elements\n");
    scanf("%d", &iSize);

    ptr= (int *)malloc(iSize *sizeof(int));   //mem allocation of size accordin to int
    
    printf("enter elements :\n");

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
   
DisplayArray(ptr, iSize);   //display(100);
free(ptr);
    return 0;
}
