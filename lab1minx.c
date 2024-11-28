#include <stdio.h>
int main(){
	int a;
	int b;
	printf("number1 is: ");
	scanf("%d",&a);
	printf("number2 is: ");
	scanf("%d",&b);
	if (a>b){
		printf("a in greater than b");
		//diff of a and b
		printf("\n%d",(a-b));
	} else {
		printf("b in greater than a");
		printf("\n%d",(b-a));
	}
}
