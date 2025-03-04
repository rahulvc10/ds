#include <stdio.h>
int stack[20];
int top =-1;
void push(int x)
{
stack[++top]=x;
}
int pop()
{
return stack[top--];
}
int main()
{
char exp[20];
int n1,n2,n3,num,length,i;
printf("enter the expression::");
scanf("%s",exp);
length=strlen(exp);
for(i=0;i<length;i++)
{
if (isdigit(exp[i]))
   {
num=exp[i]-48/*character type"exp[i]"convert into interger and store in to variablenum.*/push(num);
}else{
n1=pop();
n2=pop();
switch(exp[i])
{
case'+':
{
n3=n1+n2;
break;
}
case'-':
{
n3=n2-n1;
break;
}
case'*':
{
n3=n1*n2;
break;
}
case'/':
{
n3=n2/n1;
break;
}
}
push(n3);
}
}
printf("\nthe result of expression %s=%d\n\n",exp,pop());
return 0;
}
