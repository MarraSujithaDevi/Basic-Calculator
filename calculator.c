#include<stdio.h>
int main()
{
  float num1,num2,result;
  char operator;
  scanf("%f",&num1);
  scanf(" %c ",&operator);
  scanf("%f",&num2);
  
  if(operator == '+'){
    result=num1+num2;
  }
  else if(operator == '-'){
    result=num1 - num2;
  }
  else if(operator == '*'){
    result=num1 * num2;
  }
  else if(operator =='/'){
    if(num2 != 0){
      result = num1 / num2;
    }else{
      printf("Division is not performed by the zero");
      return 1;
    }
  }
  else{
    printf("Invaid operator");
    return 1;
  }
  printf("Result: %.2f\n",result);
  return 0;
}


