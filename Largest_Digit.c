#include<stdio.h>
int main ()
{
int N, remider, Largest= 0;
scanf ("%d", &N);

while (N > 0)
    {
remider = N % 10;
if (Largest < remider)
 {
       Largest = remider;
 }
N = N / 10;
    }
printf ("%d", Largest);
return 0;
}