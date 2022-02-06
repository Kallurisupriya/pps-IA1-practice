#include<stdio.h>
struct_complex
{
  float real,imaginary;
}


typf_complex complex;
int get_n();
complex input_complex();
void input_n_complex(int n,complex c[n]);
complex add(complex a,complex b);
complex add_n_complex(int n,complex c[n]);
void output(int n,complex c[n,complex result]);


void output(int n,complex c[n],complex result
{
  int i;
  for(i=0;i<n-1;i++)
   printf("%.0f+%.0fi+",c[i].real,c[i].imaginary);
  printf{}
}