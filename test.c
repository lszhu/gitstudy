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
}

int max(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
