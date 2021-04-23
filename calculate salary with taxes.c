#include<stdio.h>
int main(){
    float salary,tax;
    scanf("%f",&salary);
    if(salary<=2000.00){
        printf("Isento\n");
    }
    else if(salary<=3000.00){
        tax=(salary-2000.00)*.08;
        printf("R$ %.2f\n",tax);
    }
    else if(salary<=4500.00){
        tax=((1000.00*.08)+((salary-3000.00)*.18));
        printf("R$ %.2f\n",tax);
    }
    else{
        tax=((1000.00*0.08)+(1500.00*.18)+((salary-4500.00)*.28));
        printf("R$ %.2f\n",tax);
    }
    return 0;
}
