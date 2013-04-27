#include <stdio.h>
int sum(int a ,int b) {
   int sum = 0;
   for (int i = 1; i < b; i++) {
      sum += a / 2;
      printf("good");
   }
   puts("ok");
   return sum;
}
int power(int a, int b)
{
	int sum = 1;
	for (; b > 0; b--)
		sum *= a;
}
