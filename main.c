//A C program that checks a user's age and determines weather they are old enough to watch a movie


#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    int age;
    char name[100];

    printf("\nWhat is your name: ");
    fgets(name, sizeof(name),stdin);

    name[strcspn(name, "\n")] = 0;

    printf("\nHello %s, nice to finnally meet you\n",name);

    printf("Enter your age: ");

    scanf("%d",&age);

    if(age<13)
    {
        printf("%s, You can watch Sofia The Firt 😇\n", name);
    }

    else if(age>12 && age<18)
    {
        printf("%s, You can watch Dragon Ball 😋\n", name);
    }

    else{
        printf("%s, You are old enough to watch Prison School 😌\n",name);
    }


}