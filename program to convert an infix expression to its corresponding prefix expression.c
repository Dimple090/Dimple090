//Write a program to convert an infix expression to its corresponding prefix expressions.
# include <stdio.h>
# include <string.h>
# define MAX 20
void infixtoprefix(char infix[20],char prefix[20]);
void reverse(char array[30]);
char pop();
void push(char symbol);
int isOperator(char symbol);
int prcd(symbol);
int top=-1;
char stack[MAX];
main() {
	char infix[20],prefix[20],temp;
	printf("Enter infix operation: ");
	gets(infix);
	infixtoprefix(infix,prefix);
	reverse(prefix);
	puts((prefix));
}
//--------------------------------------------------------
void infixtoprefix(char infix[20],char prefix[20]) {
	int i,j=0;
	char symbol;
	stack[++top]='#';
	reverse(infix);
	for (i=0;i<strlen(infix);i++) {
		symbol=infix[i];
		if (isOperat…
