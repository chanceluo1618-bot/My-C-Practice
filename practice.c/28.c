#include <stdio.h>
int main(){
    float salary,taxable_salary=0,tax=0;
    scanf("%f",&salary);
    taxable_salary=salary-3500;
    if(taxable_salary<=0){
        tax=0;
    }if(taxable_salary>0 && taxable_salary<=1500){
        tax=taxable_salary*0.03;
    }if(taxable_salary>1500 && taxable_salary<=4500){
        tax=taxable_salary*0.1-105;
    }if(taxable_salary>4500 && taxable_salary<=9000){
        tax=taxable_salary*0.2-555;
    }if(taxable_salary>9000 && taxable_salary<=35000){
        tax=taxable_salary*0.25-1005;
    }
    printf("%.2f\n",tax);
    return 0;

}