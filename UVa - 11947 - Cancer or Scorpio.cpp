#include<bits/stdc++.h>

using namespace std;

bool isleap(int year){
 return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)? true : false;
}

int main()
{
    char date[10];
    int test,mm,dd,yy,caseno=0;
    scanf("%d",&test);
    while(test--)
    {
         scanf("%s",date);
         mm = (date[0]-'0')*10 + (date[1]-'0');
         dd = (date[2]-'0')*10 + (date[3]-'0');
         yy = (date[4]-'0')*1000 + (date[5]-'0')*100 + (date[6]-'0')*10 + (date[7]-'0');
         for(int i=0; i<280; i++)
         {
             int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
             if(isleap(yy)) {month[2]++;}
             dd++;
             if(dd>month[mm]) {mm++, dd=1;}
             if(mm==13)
             {
                 yy++, mm=1, dd=1;
             }
         }
         printf("%d %02d/%02d/%04d ",++caseno,mm,dd,yy);
        if((dd>=21 && mm==1 && dd<=31) || (dd>=1 && mm==2 && dd<=19))
            puts("aquarius");
        else if((dd>=20 && mm==2 && dd<=31) || (dd>=1 && mm==3 && dd<=20))
            puts("pisces");
        else if((dd>=21 && mm==3 && dd<=31) || (dd>=1 && mm==4 && dd<=20))
            puts("aries");
        else if((dd>=21 && mm==4 && dd<=31) || (dd>=1 && mm==5 && dd<=21))
            puts("taurus");
        else if((dd>=22 && mm==5 && dd<=31) || (dd>=1 && mm==6 && dd<=21))
            puts("gemini");
        else if((dd>=22 && mm==6 && dd<=31) || (dd>=1 && mm==7 && dd<=22))
            puts("cancer");
        else if((dd>=23 && mm==7 && dd<=31) || (dd>=1 && mm==8 && dd<=21))
            puts("leo");
        else if((dd>=22 && mm==8 && dd<=31) || (dd>=1 && mm==9 && dd<=23))
            puts("virgo");
        else if((dd>=24 && mm==9 && dd<=31) || (dd>=1 && mm==10 && dd<=23))
            puts("libra");
        else if((dd>=24 && mm==10 && dd<=31) || (dd>=1 && mm==11 && dd<=22))
            puts("scorpio");
        else if((dd>=23 && mm==11 && dd<=31) || (dd>=1 && mm==12 && dd<=22))
            puts("sagittarius");
        else
            puts("capricorn");
    }
    return 0;
}
