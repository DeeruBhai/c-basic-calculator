#include <stdio.h>
#include <math.h>


float Addition(){
    float a,b;
    printf("\n\nOperand 1:");
    scanf("%f",&a);
    printf("\nOperand 2:");
    scanf("%f",&b);
    return a+b;
    
}
float Subttraction(){
    float a,b;
    printf("\n\nOperand 1:");
    scanf("%f",&a);
    printf("\nOperand 2:");
    scanf("%f",&b);
    return a-b;
    
}
float Multiplication(){
    float a,b;
    printf("\n\nOperand 1:");
    scanf("%f",&a);
    printf("\nOperand 2:");
    scanf("%f",&b);
    return a*b;
    
}
float Division(){
    float a,b;
    printf("\n\nOperand 1:");
    scanf("%f",&a);
    printf("\nOperand 2:");
    scanf("%f",&b);
    return a/b;
    
}
float Modulus(){
    float a,b;
    printf("\n\nOperand 1:");
    scanf("%f",&a);
    printf("\nOperand 2:");
    scanf("%f",&b);
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;  // Or return an error code
    }
    return fmod(a, b);
    
}

int menu(){
    int operation_choice;
    printf("Select the operation to calculate:\n");
    printf("1) Addition(+)\n");
    printf("2) Subtraction(-)\n");
    printf("3) Multiplication(*)\n");
    printf("4) Division(/)\n");
    printf("5) Division(%%)\n");
    printf("Your choice:");
    scanf("%d",&operation_choice);
    switch (operation_choice)
    {
    case 1:
        float sum = Addition();
        printf("The sum is %f\n",sum);
        break;
    case 2:
        float bal = Subttraction();
        printf("The baance is %f\n",bal);
        break;
    case 3:
        float product = Multiplication();
        printf("The product is %f\n",product);
        break;
    case 4:
        float quotient = Division();
        printf("The quotient is %f\n",quotient);
        break;
    case 5:
        float remainder = Modulus();
        printf("The remainder is %f\n",remainder);
        break;
    
    default:
        break;
    }

}



int main(){
    menu();

    return 0;
}
