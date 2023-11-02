#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int turnOff=0;
    char backto='N';
    char choice;
    double num1;
    double num2;
    double num3;
    double res;
    printf("        Hello user this is calc.0.001v\n##################################################\n");
    while(turnOff==0)
    {
        printf("\n\n\n#######>place holder for user instructions<#######\n");


        printf(" 1) Addition\n 2) Subtraction\n 3) Multiplication\n 4) Div.\n 5) Complex Calcs.\n 0) Quit");
        printf("\n############ Currently at: Main Page #############");
        printf("\n##################################################");

        printf("\n>>>");


        scanf(" %c",&choice);
        backto='N';

        switch(choice)
        {
        case '1':
            while(backto=='N')
            {

            printf("\n########### Currently at: Addition op.############\n");
            printf("enter the first number");

            scanf("%lf",&num1);
            printf("enter the second number");
            scanf("%lf",&num2);
            res= num1+ num2;

            printf("%lf + %lf equals to %lf" ,num1,num2,res);
            printf("\n########### Currently at: Addition op.############");

            printf("\n>>>if you want to make another calculation with this operator type N in bigger case");
            scanf(" %c",&backto);
            }
            break;


        case '2':
            while(backto=='N')
            {

            printf("\n########### Currently at: Exraction op.############\n");
            printf("enter the first number");

            scanf("%lf",&num1);
            printf("enter the second number");
            scanf("%lf",&num2);
            res= num1- num2;

            printf("%lf - %lf equals to %lf" ,num1,num2,res);
            printf("\n########### Currently at: Extraction op.############");

            printf("\n>>>if you want to make another calculation with this operator type N in bigger case");
            scanf(" %c",&backto);
            }
            break;

        case '3':
            while(backto=='N')
            {

            printf("\n########### Currently at: Multiplication op.############\n");
            printf("enter the first number");

            scanf("%lf",&num1);
            printf("enter the second number");
            scanf("%lf",&num2);
            res= num1 * num2;

            printf("%lf * %lf equals to %lf" ,num1,num2,res);
            printf("\n########### Currently at: Multiplication op.############");

            printf("\n>>>if you want to make another calculation with this operator type N in bigger case");
            scanf(" %c",&backto);
            }
            break;

        case '4':
            while(backto=='N')
            {

            printf("\n########### Currently at: Division op.############\n");
            printf("enter the first number");

            scanf("%lf",&num1);
            printf("enter the second number");
            scanf("%lf",&num2);
            res= num1 / num2;

            printf("%lf / %lf equals to %lf" ,num1,num2,res);
            printf("\n########### Currently at: Division op.############");

            printf("\n>>>if you want to make another calculation with this operator type N in bigger case");
            scanf(" %c",&backto);
            }
            break;

        case '5':
            while(backto=='N')
            {

            printf("\nAdvanced calcs.\n A) x uzeri y\n B) x y. dereceden kokun icinde");
            scanf(" %c",&choice);

            switch(choice)
            {
            case 'A':
                printf("enter the X value>taban degisken<");
                scanf(" %lf", &num1);
                printf("enter the Y value>us degisken<");
                scanf(" %lf", &num2);
                res= pow(num1,num2);
                printf("x üzeri y equals to %lf", res);
                break;

            case 'B':
                printf("enter the X value>taban degisken<");
                scanf(" %lf", &num1);
                printf("enter the Y value>kok derecesi degisken<");
                scanf(" %lf", &num2);
                num2= 1/num2;
                res= pow(num1,num2);
                printf("Y. dereceden kok icinde X equals to %lf", res);

                break;
            }





            printf("\n>>>if you want to make another calculation with this operator type N in bigger case");
            scanf(" %c",&backto);
            }
            break;
        case '0':
            turnOff=1;


        }



    }





    return 0;
}
