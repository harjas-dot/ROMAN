#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char arr[],val[10];
int a,x=0,l,c=0,b,d,e=0,f=0,g,h=1;
int test(),result(),vidx();

int main()
{
  while(h!=0)
  {
    printf("\nIF YOU WANT TO CONVERT DECIMAL TO ROMAN PRESS 1\n");
    printf("IF YOU WANT TO CONVERT ROMAN TO DECIMAL PRESS 2\n");
    printf("IF YOU WNT TO EXIT PRESS 3\n");
    scanf("%d",&b);
    if(b==1 || b==2)
    {
      vidx();
    }
    else
    {
      h=0;

    }
  }
  printf("THANK YOU!!!!");






    return 0;
}


//---------------
vidx()
{
  if(b==1){
    printf("YOUR NUMBER MUST BE LESS THAN 4000 \n");
    printf("Enter the decimal number: ");
    scanf("%d",&a);
    while (a!=0)
    {
        test();
        //printf("%d",a);
    }
    //printf("%d",c);
    result();
    memset(arr,0,c);
  }
  else
  {
    printf("ENTER THE ROMAN EXPRESSION IN CAPITAL\n");
    scanf("%s",val);
    for(d=0;d<10;d+=1)
    {
      f=val[d];
      if(f=='I')
      {
        d+=1;
        g=val[d];
        if(g=='I'){
          e+=2;
        }
        else if(g=='V'){
          e+=4;
        }
        else if(g=='X'){
          e+=9;
        }
        else
        {
          e+=1;
          d-=1;
        }
      }
//-----------------------------------------------------------------------
      else if(f=='V')
      {
        e+=5;
      }
      else if(f=='X')
      {
        d+=1;
        g=val[d];
        if(g=='L')
        {
          e+=40;
        }
        else if(g=='C'){
          e+=90;
        }
        else
        {
          e+=10;
          d-=1;
        }
      }
      else if(f=='L')
      {
         e+=50;
       }
       else if(f=='C')
       {
         d+=1;
         g=val[d];
         if(g=='D'){
           e+=400;
         }
         else if(g=='M'){
           e+=900;

         }
         else{
           e+=100;
           d-=1;
         }
       }
       else if(f=='D'){
        e+=500;
       }
       else if(f=='M'){
         e+=1000;
       }
       }
      }

    printf("\n%d",e);
    memset(val,0,10);
    e=0;
}


//-------------------



test()
{
    if(a>=1 && a<5)
    {
      if(a==4)
      {
        arr[x]='i';
        c+=1;
        x+=1;
        arr[x]='v';
        c+=1;
        x+=1;
        a-=4;
      }
      else
      {
        arr[x]='i';
        c+=1;
        x+=1;
        a-=1;
      }

    }
    else if(a>=5 && a<10)
    {

        if(a==9)
        {
            arr[x]='I';
            c+=1;
            x+=1;

            arr[x]='X';
            c+=1;
            x+=1;

            a-=9;

        }
        else
        {
          arr[x]='V';
          c+=1;
          x+=1;
          a-=5;
        }

    }
    else if(a>=10 && a<50)
    {
      if(a>=40){
        arr[x]='X';
        c+=1;
        x+=1;
        arr[x]='L';
        c+=1;
        x+=1;
        a-=40;
      }
      else{
        arr[x]='X';
        c+=1;
        x+=1;
        a-=10;
      }
    }
    else if(a>=50 && a<100){
      if(a>=90){
        arr[x]='X';
        c+=1;
        x+=1;
        arr[x]='C';
        c+=1;
        x+=1;
        a-=90;

      }
      else{
        arr[x]='L';
        x+=1;
        c+=1;
        a-=50;
      }
    }
    else if(a>=100 && a<500){
      if(a>=400){
        arr[x]='C';
        x+=1;
        c+=1;
        arr[x]='D';
        x+=1;
        c+=1;
        a-=400;
      }
      else{
        arr[x]='C';
        c+=1;
        x+=1;
        a-=100;
      }
    }
    else if(a>=500 && a<1000){
      if(a>=900){
        arr[x]='C';
        c+=1;
        x+=1;
        arr[x]='M';
        c+=1;
        x+=1;
        a-=900;
      }
      else{
        arr[x]='D';
        x+=1;
        c+=1;
        a-=500;
      }
    }
    else if(a>=1000 && a<4000){
      arr[x]='M';
      c+=1;
      x+=1;
      a-=1000;
    }
    else{
      printf("U ENTERED A NUMBER WHICH IS MORE THAN OR EQUAL TO 4000 ");
      a-=a;
    }
}
result()
{
    for(l=0;l<c;l=l+1)
    {
        printf("%c",arr[l]);
    }


}
