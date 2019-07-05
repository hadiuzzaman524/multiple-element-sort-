#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct
{
    int day;
    int month;
    int year;
    string history;
}jaman;
bool comp(jaman a,jaman b)
{
    if(a.year !=b.year)
        return a.year<b.year;
    else if(a.month !=b.month)
        return a.month<b.month;
    else
        return a.day<b.day;
}
int main()
{ //freopen("input.txt","r",stdin);
    jaman obj[4];
    obj[0].day=24;
    obj[0].month=05;
    obj[0].year=1982;
    obj[0].history="sunny";

    obj[1].day=24;
    obj[1].month=05;
    obj[1].year=1980;
    obj[1].history="cecilia";

    obj[2].day=31;
    obj[2].month=12;
    obj[2].year=1999;
    obj[2].history="end of 20th century";

    obj[3].day=1;
    obj[3].month=01;
    obj[3].year=0001;
    obj[3].history="start of modern calender";
    sort(obj,obj+4,comp);
    for(int i=0; i<4; i++)
    {
        cout<<obj[i].day<< "\t"<< obj[i].month<< "\t"<<obj[i].year<< "\t"<<obj[i].history<<endl;
    }

    return 0;
}
