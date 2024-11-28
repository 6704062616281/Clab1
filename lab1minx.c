#include <stdio.h>
int main(){
	int a;
	int b;
	printf("number1 and number2: ");
	scanf("%d %d", &a, &b);
	if (a>b){
		printf("a in greater than b");
		//diff of a and b
		printf("\n%d",(a-b));
	} else {
		printf("b in greater than a");
		printf("\n%d",(b-a));
	}
}
