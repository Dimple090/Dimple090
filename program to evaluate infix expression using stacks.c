//Write a program to evaluate infix expression using Stacks.
// header files
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//Global variables
int numbers[50],tn=-1,to=-1;
char op[50];
//function to push digits
void push_num(int n)
{
numbers[++tn]=n;
}
//function to push operators
void push_op(char ch)
{
op[++to]=ch;
}
// function to pop digits
int pop_num()
{
return numbers[tn--];
}
//function to pop operators
char pop_op()
{
return op[to--];
}
//evaluating the expression
int infix_eval(int numbers[50], char op[50])
{
int x, y;
char ope;
//taking first two operands
x=pop_num();
y=pop_num();
//taking the operators between them
ope=pop_op();
//executing the operation
switch(ope)
{
case '+':
…
