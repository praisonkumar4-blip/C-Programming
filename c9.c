#include <stdio.h>
int main() {
    int n1,n2,n3,opt;
    char op;
    printf("Please Select Your Options:");
    printf("\n1.Calculate only Two Digits");
    printf("\n2.Calculate upto Three Digits");
    printf("\nEnter Your Options:");
    scanf("%d",&opt);
    
    switch(opt){
        case 1:
        getchar();
        printf("\nEnter the Operator : ");
        scanf("%c",&op);

        if(op=='+'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\n\nThe Sums of two numbers is : %d",n1+n2);
        }
        else if(op=='-'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\n\nThe Subtractions of two numbers is : %d",n1-n2);
        }
        
         else if(op=='*'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\n\nThe Multiplications of two numbers is : %d",n1*n2);
        }

         else if(op=='/'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\n\nThe Divitions of two numbers is : %d",n1/n2);
        }
        break;
        }

        case 2:
        getchar();
        printf("\nEnter the Operator : ");
        scanf("%c",&op);

        if(op=='+'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\nEnter the num2 : ");
            scanf("%d",&n3);
            printf("\n\nThe Sums of three numbers is : %d",n1+n2+n3);
        }
        else if(op=='-'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\nEnter the num2 : ");
            scanf("%d",&n3);
            printf("\n\nThe Subtractions of three numbers is : %d",n1-n2-n3);
        }
        
         else if(op=='*'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\nEnter the num2 : ");
            scanf("%d",&n3);
            printf("\n\nThe Multiplications of three numbers is : %d",n1*n2*3);
        }

         else if(op=='/'){
            printf("\nEnter the num1 : ");
            scanf("%d",&n1);
            printf("\nEnter the num2 : ");
            scanf("%d",&n2);
            printf("\nEnter the num2 : ");
            scanf("%d",&n3);
            printf("\n\nThe Divisions of three numbers is : %d",n1/n2/3);
        }
        break;
        
    return 0;
}