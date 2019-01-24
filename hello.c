#include<stdio.h>
void menu();
int main()
{
 char arr[20];
 printf("Enter your Name: ");
 scanf("%s",&arr);
 printf("Hello %s ",arr);
 menu();
 return 0;
}
void menu()
{
 printf("what do you want to perform\n");
 printf("1.Creating a linkedlist\n2.Traversing a linked list\n");
 return;
}
