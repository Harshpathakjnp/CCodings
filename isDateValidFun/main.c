#include <stdio.h>
int compareDate(int d1,int m1,int y1,int d2,int m2,int y2);
int isDateValid (int dd ,int mm, int yy);
int isLeapYear(int yy);
int daysInMonths(int mm, int yy);
int dayOfWeekByWeekDayNo(int n);
int dayOfWeek(int n);
int gapBetweenDates(int d1,int m1,int y1,int d2,int m2,int y2);
void dayDifferenceFromToday(int d,int m,int y);
int monthNames(int m);
int main()
{
int month=8,year=1947;
int startday=getWeekDayForDate(1,month,year);
int x = daysInMonths( month, year);
printf("Month starts on %d and month has %d days.\n",startday,x);

   for(int n=0;n<=6;n++)
   {
    dayOfWeek(n);
   }
   printf("\n");
    for(int i =1 ; i<=startday;i++)
    {
    printf("%6s"," ");

    }
    printf("%6s","1");
    for(int i =2 ; i<=x;i++)
    {
    printf("%6d",i);
     if((i + startday )%7==0)
        printf("\n");

    }

}

int isDateValid(int dd ,int mm, int yy)         // function to check date is valid or not
{
    if(yy<1)                // if entered year is less than zero
        return 0;
    if(mm<1 || mm>12)
        return 0;
    if(dd<1)
        return 0;
    int ndays=daysInMonths(mm,yy);
    if(dd>ndays)
        return 0;
    return 1;
}
                                                //function to check leap year..
int isLeapYear(int yy)
{
    if(yy % 400 == 0 || (yy % 4 == 0 && yy % 100 !=0) )
    {
        return 1;
    }
    else
        return 0;
}

int daysInMonths(int mm, int yy)                  //function to check days in month..
{
if(mm==4 || mm==6 || mm==9 || mm==11)
return(30);
if(mm==2)
{
if(isLeapYear(yy))                              // year will be passed to leap year function
    return 29;
else
    return 28;
}
    return 31;
}



int gapBetweenDates(int d1,int m1,int y1,int d2,int m2,int y2)
{
    //D2>D1                    // if Day2>Day1  then only program will work correctly...
    //d2-m2-y2 to d1-m1-y1
    int cmp=compareDate(d1,m1,y1,d2,m2,y2);
    if(cmp==0)
        return 0;

    if(cmp==-1)
    {
        int t=d1;                   // we will reverse the date here ....
        d1=d2;
        d2=t;


        t=m1;                       // we will reverse the month here ....
        m1=m2;
        m2=t;


        t=y1;                       // we are reversing year here ......
        y1=y2;
        y2=t;
    }


   int  diff1 = d2-1;
    int diff2=d1-1;
                                                //1-m2-y2 to 1-m1-y1
    int diff3=0;
    for(int m=1;m<=m2-1;m++)
        diff3=diff3+ daysInMonths(m,y2);
    int diff4=0;
    for(int m=1;m<=m1-1;m++)
        diff4=diff4+ daysInMonths(m,y1);
                                                //1-1-y2 to 1-1-y1
    int diff5=0;
    for(int y=y1;y<=y2-1;y++)
        if(isLeapYear(y))
        diff5=diff5+366;
    else
        diff5=diff5 + 365;
    int gap=diff1 + diff3 + diff5 -diff4-diff2;
    return cmp*gap;
}


                                                    // comparing which date is greater
int compareDate(int d1,int m1,int y1,int d2,int m2,int y2)
{
    //Return 0 if equal, -1 if D1<D2, 1 if D2>D1
    if(y2>y1)
        return 1;
    if(y2<y1)
        return -1;
    if(m2>m1)
        return 1;
    if(m2<m1)
        return -1;
    if(d2>d1)
        return 1;
    if(d2<d1)
        return -1;
return 0;

}
int dayOfWeekByWeekDayNo(int n)
{
switch (n)
{
case 5:
    printf("Friday ");
    break;
case 6:
    printf("Saturday ");
    break;
case 0:
    printf("Sunday ");
    break;
case 1:
    printf("Monday ");
    break;
case 2:
    printf("Tuesday ");
    break;
case 3:
    printf("Wednesday ");
    break;
case 4:
    printf("Thursday ");
    break;
default:
{
    printf("wrong day");
}
}
}

void dayDifferenceFromToday(int d2,int m2,int y2)
{
int d1=31,m1=10,y1=2021;
    int ndays=gapBetweenDates(d1,m1,y1,d2,m2,y2);
    ndays = ndays % 7;
    ndays = ndays + 7;
    ndays=ndays%7;
    //ndays=(ndays + 2) %7;
    dayOfWeekByWeekDayNo(ndays);
}
int getWeekDayForDate(int d2,int m2,int y2)
{
int d1=31,m1=10,y1=2021;
    int ndays=gapBetweenDates(d1,m1,y1,d2,m2,y2);
    ndays = ndays % 7;
    ndays = ndays + 7;
    ndays=ndays%7;
    //ndays = (ndays + 2) %7;
    return ndays;
}





int monthNames(int m)
{
switch (m)
{
case 0:
    printf("January  ");
    break;
case 1:
    printf("February  ");
    break;
case 2:
    printf("March  ");
    break;
case 3:
    printf("April  ");
    break;
case 4:
    printf("May  ");
    break;
case 5:
    printf("June  ");
    break;
case 6:
    printf("July  ");
    break;
case 7:
    printf("August  ");
    break;
case 8:
    printf("September  ");
    break;
case 9:
    printf("October  ");
    break;
case 10:
    printf("November  ");
    break;
case 11:
    printf("December  ");
    break;
default:
{
    printf("wrong Month");
}

}
}

int dayOfWeek(int n)
{
switch (n)
{
case 0:
    printf("%6s","Sun");
    break;
case 1:
    printf("%6s","Mon");
    break;
case 2:
    printf("%6s","Tue");
    break;
case 3:
    printf("%6s","Wed");
    break;
case 4:
    printf("%6s","Thu");
    break;
case 5:
    printf("%6s","Fri");
    break;
case 6:
    printf("%6s","Sat");
    break;
default:
{
    printf("wrong day");
}
}
}
