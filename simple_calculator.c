/*#include<stdio.h>
int main() {
	float a,b;
	char op;
	
	printf("enter two num: ");
	scanf("%f %f",&a,&b);
	
	printf("enter operators('+', '-', '*', '/'): ");
	scanf(" %c",&op);
		
	switch(op) {
		case '+':
			printf("%.2f\n",a+b);
			break;
		case '-':
			printf("%.2f\n",a-b);
			break;
		case '*':
			printf("%.2f\n",a*b);
			break;
		case '/':
			printf("%.2f\n",a/b);
			break;
		default:
			printf("invalid operator\n");					
	}	
	return 0;
}*/
#include<stdio.h>
int main() {
	float a,b;
	char op;
	
	printf("enter two num: ");
	scanf("%f %f",&a,&b);
	
	printf("enter operators('+', '-', '*', '/'): ");
	scanf(" %c",&op);
	if(op=='+') {
		printf("%.2f\n",a+b);
	}
	else if(op=='-') {
		printf("%.2f\n",a-b);
	}+
	
	else if(op=='*') {
		printf("%.2f\n",a*b);
	}
	else if(op=='/') {
		printf("%.2f\n",a/b);	
	}
	else{
		printf("invalid operator./n");
	}
	return 0;
}

