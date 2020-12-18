#include <stdio.h>
//计算年份的后两位//
int Prenum(int n)
{
    int prenum = 0;
    prenum = n % 100;
    return prenum;
}
//计算世纪数-1//
int Mcentury(int n)
{
    int c = 0;
    c = n/100;
    return c;
}
//计算周几//
int Mweek(int y,int m,int d) //接收年月日
{
    int weekday;
    if ( m == 1 || m == 2)
    {
         int t;
         t = m;
         m = m + 12;
         weekday = (Mcentury(y)/4 - 2*Mcentury(y) + Prenum(y)-1+(Prenum(y)-1)/4 + 13*(m+1)/5 + d - 1 )%7;
    }
    else
    {
         weekday = (Mcentury(y)/4 - 2*Mcentury(y) + Prenum(y)+Prenum(y)/4 + 13*(m+1)/5 + d - 1 )%7;
    }

    return weekday;
}


int main()
{
    int year;
    int mou;//定义月
    int date; //定义日
    int weekday; //定义周几
    int temp;
    printf("请输入年："); scanf("%d",&year);
    if (year % 4 == 0 )
    {
        if (year % 100 == 0)
        {
            for (mou = 1; mou <= 12; mou++)
            {
               if(mou == 2)
               {
                   //单独选出二月进行处理
                   for(date = 1;date <= 28; date++ )
                   {
                      weekday = Mweek(year,mou,date);
                      if(date == 1)
                      {
                          for(temp = 0;temp < weekday; temp++)
                          {
                            printf(" \t");
                          }
                      }
                      printf("%2d\t",date);
                      if (weekday == 6)
                        printf("\n"); //每当七个出现换行
                   }
               }
                else if(mou == 1||mou == 3||mou == 5||mou == 7||mou == 8||mou == 10||mou == 12)
                {
                    for(date = 1;date <= 31; date++)
                    {
                        weekday = Mweek(year,mou,date);
                        if(date == 1)
                        {
                            for(temp = 0;temp < weekday; temp++)
                            {
                                printf(" \t");
                            }
                        }
                        printf("%2d\t",date);
                        if (weekday == 6)
                        printf("\n");
                    }
                }
                else
                {
                    for(date = 1;date <= 30; date++)
                    {
                        weekday = Mweek(year,mou,date);
                        if(date == 1)
                        {
                            for(temp = 0;temp < weekday; temp++)
                            {
                                printf(" \t");
                            }
                        }
                        printf("%2d\t",date);
                        if (weekday == 6)
                        printf("\n");
                    }
                }
                printf("\n");
            }
        }
        else
        {
            for (mou = 1; mou <= 12; mou++)
            {
               if(mou == 2)
               {
                   //单独选出二月进行处理
                   for(date = 1;date <= 29; date++ )
                   {
                      weekday = Mweek(year,mou,date);
                      if (date == 1)
                      {

                        for(temp = 0;temp < weekday; temp++)
                        {
                          printf(" \t");
                        }
                      }
                      printf("%2d\t",date);
                      if (weekday == 6)
                        printf("\n"); //每当七个出现换行
                   }
               }
                else if(mou == 1||mou == 3||mou == 5||mou == 7||mou == 8||mou == 10||mou == 12)
                {
                    for(date = 1;date <= 31; date++)
                    {
                        weekday = Mweek(year,mou,date);
                        if (date == 1)
                        {

                            for(temp = 0;temp < weekday; temp++)
                            {
                                printf(" \t");
                            }
                        }
                        printf("%2d\t",date);
                        if (weekday == 6)
                        printf("\n");
                    }
                }
                else
                {
                    for(date = 1;date <= 30; date++)
                    {
                        weekday = Mweek(year,mou,date);
                        if(date == 1)
                        {
                            for(temp = 0;temp < weekday; temp++)
                            {
                                printf(" \t");
                            }
                        }
                        printf("%2d\t",date);
                        if (weekday == 6)
                        printf("\n");
                    }
                }
                printf("\n");
            }
        }
    }
    else
    {
         for (mou = 1; mou <= 12; mou++)
            {
               if(mou == 2)
               {
                   //单独选出二月进行处理
                   for(date = 1;date <= 28; date++ )
                   {
                      weekday = Mweek(year,mou,date);
                      if(date == 1)
                      {
                        for(temp = 0;temp < weekday; temp++)
                        {
                          printf(" \t");
                        }
                      }
                      printf("%2d\t",date);
                      if (weekday == 6)
                        printf("\n"); //每当七个出现换行
                   }
               }
                else if(mou == 1||mou == 3||mou == 5||mou == 7||mou == 8||mou == 10||mou == 12)
                {
                    for(date = 1;date <= 31; date++)
                    {
                        weekday = Mweek(year,mou,date);
                        if(date == 1)
                        {
                            for(temp = 0;temp < weekday; temp++)
                            {
                                printf(" \t");
                            }
                        }
                        printf("%2d\t",date);
                        if (weekday == 6)
                        printf("\n");
                    }
                }
                else
                {
                    for(date = 1;date <= 30; date++)
                    {
                        weekday = Mweek(year,mou,date);
                        if(date == 1)
                        {
                            for(temp = 0;temp < weekday; temp++)
                            {
                                printf(" \t");
                            }
                        }
                        printf("%2d\t",date);
                        if (weekday == 6)
                        printf("\n");
                    }
                }
                printf("\n");
            }
    }
    return 0;
}

