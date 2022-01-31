#include<stdio.h>
float input();
float my_sqrt(float n);
void output(float n,float sqrt_result);
int main()
{
  float n,squareroot_result;
  n=input();
  squareroot_result=my_sqrt(n);
  output(n,squareroot_result);
  return 0;
}
float input()
{
  float n;
  printf("enter a number to find its squareroot\n");
  scanf("%f",&n);
  return n;
}
float my_sqrt(float n)
{
  float temp=0,squareroot;
  squareroot=n/2;
  while(squareroot!=temp)
  {
    temp=squareroot;
    squareroot=(n/temp+temp)/2;
  }
  return squareroot;
}
void output(float n,float sqrt_result)
{
  printf("/nsquareroot of %f is %f",n,sqrt_result);
}

