#include <stdio.h>

int main()

{

    printf("Pick a number\n1\n2\n3\n4\n5\n");

    int choice;

    scanf("%d",&choice);

    switch(choice)

    {

        case 1:

            printf("Food item-pasta \nPrice-Rs 179");

            break;

        case 2: 

            printf("Food item- French fries\nPrice-Rs 99" );

            break; 

        case 3:

            printf("Food item-Burger \nPrice- Rs 129");

            break;

        case 4:

            printf("Food item-Sandwich \nPrice-Rs 149");

            break;

        case 5:

            printf("Food item-Pizza \nPrice -Rs 239");

            break;

        default :printf("Invalid choice");

    }

    return 0; 

} 
