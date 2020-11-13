#include <stdio.h>
//计算是一年的第几天,接收年月日//
int Mday(int j,int n,int m)
{
    int day = 0;
    if(j%400 == 0)
    {
        switch(n)
        {
            case 1 : day = m; break;
            case 2 : day = m + 31; break;
            case 3 : day = m + 60; break;
            case 4 : day = m + 91; break;
            case 5 : day = m + 121;break;
            case 6 : day = m + 152;break;
            case 7 : day = m + 182;break;
            case 8 : day = m + 213;break;
            case 9 : day = m + 244;break;
            case 10: day = m + 274;break;
            case 11: day = m + 305;break;
            case 12: day = m + 335;break;
        }
    }
    else if (j%4==0&&j%100!=0)
    {
       switch(n)
        {
            case 1 : day = m; break;
            case 2 : day = m + 31; break;
            case 3 : day = m + 60; break;
            case 4 : day = m + 91; break;
            case 5 : day = m + 121;break;
            case 6 : day = m + 152;break;
            case 7 : day = m + 182;break;
            case 8 : day = m + 213;break;
            case 9 : day = m + 244;break;
            case 10: day = m + 274;break;
            case 11: day = m + 305;break;
            case 12: day = m + 335;break;
        }
    }
    else
    {
        switch(n)
        {
            case 1 : day = m; break;
            case 2 : day = m + 31; break;
            case 3 : day = m + 59; break;
            case 4 : day = m + 90; break;
            case 5 : day = m + 120;break;
            case 6 : day = m + 151;break;
            case 7 : day = m + 181;break;
            case 8 : day = m + 212;break;
            case 9 : day = m + 243;break;
            case 10: day = m + 273;break;
            case 11: day = m + 304;break;
            case 12: day = m + 334;break;
        }
    }
    return day;
}
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
