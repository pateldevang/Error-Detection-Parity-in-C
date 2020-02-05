#include <stdio.h>
#include <stdlib.h>
int main()
{
int a[10][10];
int i,j,t,u,v,w,x;
int q,b,c,d,e;
printf("enter the first input sequence :\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[0][i]);
};
printf("enter the second input sequence:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[1][i]);
};
printf("enter the third input sequence:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[2][i]);
};
printf("enter the fourth input sequence:\n");
for(i=0;i<5;i++)
{
scanf("%d",&a[3][i]);
};
t=(a[0][0]+a[1][0]+a[2][0]+a[3][0])%2;
u=(a[0][1]+a[1][1]+a[2][1]+a[3][1])%2;
v=(a[0][2]+a[1][2]+a[2][2]+a[3][2])%2;
w=(a[0][3]+a[1][3]+a[2][3]+a[3][3])%2;
x=(a[0][4]+a[1][4]+a[2][4]+a[3][4])%2;
if(t==0)
{
a[4][0]=0;
}
else
{
a[4][0]=1;
}
if(u==0)
{
a[4][1]=0;
}
else
{
a[4][1]=1;
}
if(v==0)
{
a[4][2]=0;
}

else
{
a[4][2]=1;
}
if(w==0)
{
a[4][3]=0;
}
else
{
a[4][3]=1;
}
if(x==0)
{
a[4][4]=0;
}
else
{
a[4][4]=1;
}
printf("the parity for the input is(row wise): ");
for(i=0;i<5;i++)
{
printf("%d",a[4][i]);
};
q=(a[0][0]+a[0][1]+a[0][2]+a[0][3]+a[0][4])%2;
b=(a[1][0]+a[1][1]+a[1][2]+a[1][3]+a[1][4])%2;
c=(a[2][0]+a[2][1]+a[2][2]+a[2][3]+a[2][4])%2;
d=(a[3][0]+a[3][1]+a[3][2]+a[3][3]+a[3][4])%2;

e=(a[4][0]+a[4][1]+a[4][2]+a[4][3]+a[4][4])%2;
if(q==0)
{
a[0][5]=0;
}
else
{
a[0][5]=1;
}
if(b==0)
{
a[1][5]=0;
}
else
{
a[1][5]=1;
}
if(c==0)
{
a[2][5]=0;
}
else
{
a[2][5]=1;
}
if(d==0)
{
a[3][5]=0;
}

else
{
a[3][5]=1;
}
if(e==0)
{
a[4][5]=0;
}
else
{
a[4][5]=1;
}
printf("\nthe parity for the input is(column wise): ");
for(i=0;i<4;i++)
{
printf("%d",a[i][4]);
};
printf("\nthe entire matrix is:\n");
for(i=0;i<5;i++)
{
for(j=0;j<6;j++)
{
printf("%d ",a[i][j]);
};
printf("\n");
};
}
