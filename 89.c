//input  ROW=4       COLUMS=4    with nested loop
/* display =    
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

#include<stdio.h>
void Display(int iRow, int iCol)
{
    int iCnt=0;
    int jCnt=0;

    for(iCnt=1;iCnt<=iRow;iCnt++)   //outer for row
    {
        for(jCnt=1;jCnt<=iCol;jCnt++)//inner for col
        {
            printf("*\t");

        }
        printf("\n");
    }

}
int main()
{
int iValue1=0;
int iValue2=0;

printf("please enter rows:\n ");
scanf("%d", &iValue1);

printf("please enter columns:\n ");
scanf("%d", &iValue2);

Display(iValue1, iValue2); 

return 0;
}  