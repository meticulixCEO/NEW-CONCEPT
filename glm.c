#include <stdio.h>

int main(){
    int choice;
    printf("Select the data distribution you want to model:\n1)\tGaussian Distribution\n2)\tBernoulli Distribution\n3)\tPoisson Distribution\n");
    scanf("%d",choice);
    switch (choice){
        case 1:
        printf("The canonical function is an identity function; So the model is n which is a linear regression (n= sum of weights * Variables)");
        break;
        case 2:
        printf("The canonical function is a sigmoid function; So the model is 1/(1+exp(-n)) which is a logistic regression (n= sum of weights * Variables)");
        break;
        case 3:
        printf("The canonical function is an exponential function exp(n); So the model is a Poisson Regression (n= sum of weights * Variables)");
        break;
        default:
        printf("Make a proper selection!!!");
        break;
    }
    return 0;
}