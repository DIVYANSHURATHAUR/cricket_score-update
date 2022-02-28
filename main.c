#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
static int score_card(int,int,int ,int,int,int);
static void print(int,int,int,int,int);
static void result(int,int,int);
static int r1=0,w1=0;
static int r,w,o,t;
int main(void)
{
    int b=6,see,i,j,target;
    r+=r1,w+=w1;
    system("color B4");
    printf("ENTER NO. OF OVERS:\n");
    scanf("%d",&o);
    printf("ENTER RUNS MADE BY OTHER TEAM:\n");
    scanf("%d",&target);
    printf("\nYOUR TARGET IS:---->%d\n",target+1);
    printf("                       ENTER\n");
    printf("SINGLE RUN                1\n");
    printf("DOUBLE RUN                2\n");
    printf("TRIPLE RUN                3\n");
    printf("FOUR RUNS                 4\n");
    printf("SIX RUNS                  6\n");
    printf("WIDE                      0\n");
    printf("NO BALL                  11\n");
    printf("NO BALL+FOUR             44\n");
    printf("NO BALL+SIX              66\n");
    printf("DOT BALL                  7\n");
    printf("WICKET                    9\n\n");
    for(i=0;i<o;i++)
    {
        for(j=1;j<=6;j++)
        {
            printf("OVER %d.%d\t",i,j);
            scanf("%d",&see);
            if(see==0||see==11||see==44||see==66)
            {
                --j;
            score_card(see,r1,w1,target,i,j);
            }
            else
            score_card(see,r1,w1,target,i,j);

        }
        printf("OVER %d COMPLETED\n",i+1);

    }
print(target,i,j,r1,w1);
}

    static int score_card(int n,int r,int w,int target,int i,int j)
    {
        switch(n)
        {
    case 1:
        r1+=1;
            print(target,i,j,r1,w1);
        break;

        case 2:
        r1+=2;
        print(target,i,j,r1,w1);
        break;

        case 3:
        r1+=3;
        print(target,i,j,r1,w1);
     break;

        case 4:
        r1+=4;
        print(target,i,j,r1,w1);
        break;

        case 6:
        r1+=6;
        print(target,i,j,r1,w1);
        break;

        case 66:
        r1+=7;
        print(target,i,j,r1,w1);
        break;

        case 44:
        r1+=5;
        print(target,i,j,r1,w1);
        break;

        case 0:
        r1+=1;
        print(target,i,j,r1,w1);
        break;

        case 11:
        r1+=1;
        print(target,i,j,r1,w1);
        break;

        case 9:
        w1+=1;
        print(target,i,j,r1,w1);
        break;

        case 7:
        r1+=0;
        print(target,i,j,r1,w1);
        break;

        default:
            printf("enter valid information");
        }

    }
    static void print(int t,int i,int j,int r,int w)
    {
        if((r<=t)&&(i<o)&&(w!=10))
        {
        printf("%d/%d______________|OVER %d.%d|      (%d needed off %d.%d overs)\n\n",r,w,i,j,t-r+1,o-i-1,6-j);
         }
        else
             result(r1,t,w1);
    }
   static void result(int x,int t,int y)
    {
        int c=10;
        int W=(c-w1);
        int R=(t-r1);
    printf("\n*****************************\n");
    if(x>t){
        printf("\nWINS BY %d WICKETS:)\n",W);
      exit(1); }
   else if(x<t){
    printf("\nLOSE BY %d RUNS:(\n",R);
   exit(1); }
    else
        printf("MATCH TIE:|\n");

    }

