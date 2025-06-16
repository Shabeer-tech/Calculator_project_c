#include<stdio.h>
int main (){
    float num1,num2,result;
    char od,choice;
    do 
    {
    printf("|=============================|\n");
    printf("|   WELCOME TO MY CALCULATOR  |\n");
    printf("|=============================|\n");
    printf(" enter first number :➡️ ");
    scanf("%f",&num1);
    printf("enter second number :➡️ ");
    scanf("%f",&num2);
    printf("enter the order like (+,-,*,/) :➡️ ");
    scanf(" %c",&od);
   //switch caseapply 
   switch (od){
   case '+' :
   result = num1+num2;
   printf("result is %.2f\n",result);
   break ;
   case '-' :
   result = num1-num2;
   printf("result is %.2f\n",result);
   break ;
   case '*' :
   result = num1*num2;
   printf("result is %.2f\n",result);
   break ;
   case '/' :
   if(num2!=0){
   result=num1/num2;
   printf("result is %.2f\n",result);
  } else{
   printf("not division becouse num is 0");
  }
  break;
  default :
  printf("number is invalid"); }
  
  //ask again calculate 
  printf("\n do you want to again use calculator ? (y/n) : ");
  
  scanf(" %c",&choice);
   
  
   } while (choice == 'y' || choice == 'Y');
   printf("thank you for using the calculator Goodbye ☺\n");
  
 
    return 0;
}