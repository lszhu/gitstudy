#include <stdio.h>

int main() {
	char *ch = "you're welcome.\n";
	int i;
	printf("hello world!");
	for (i = 1; i < 5; i++) {
		printf(ch);
	}
	while(i > 0) {
	  puts(ch);
	  i--;
}

int abs(int x) {
	if ( x < 0 )
		return -x;
	return x;
}

void showMsg(char * msg)
{
}
