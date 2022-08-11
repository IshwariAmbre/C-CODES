//array with pointer

//array is considered as ptr and ptr can work as array * is []

#include<stdio.h>
void DisplayArray(int ptr[] )
{
      int iCnt=0;
      
     printf("Elements of array are: \n", *(ptr+iCnt));
    
    for(iCnt=0; iCnt<5; iCnt++)
    {
        printf("%d\n", *ptr);
        ptr++;     //pointer arithmentic
    }

}
int main()
{
       auto int Arr[5];      
     register int iCnt=0;  //scope starts

    printf("enter elements\n");

    for(iCnt=0; iCnt<5; iCnt++)
    {
        scanf("%d", &Arr[iCnt]);
    }
   
DisplayArray(Arr);   //display(100);
    

    return 0;
}