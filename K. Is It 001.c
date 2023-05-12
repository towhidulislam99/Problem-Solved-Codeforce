#include<stdio.h>
//#include<string.h>
int main()
{
    int a,b;
    //char s[]="'>','<','='";
    char ch;
    scanf("%d %c %d",&a,&ch,&b);
    /* {
      if (b<a || a==b)
        {
            printf("Right");
        }
        else if(b>a)
            {
        printf("Wrong");
    }
    } */
    switch(ch){
    case '<' :
        printf( (a<b) ? "Right\n" : "Wrong\n");
        break;
    case '>' :
        printf( (a > b) ? "Right\n" : "Wrong\n");
        break;
    default:
        printf( (a == b) ? "Right\n" : "Wrong\n");
    }

    return 0;
}
