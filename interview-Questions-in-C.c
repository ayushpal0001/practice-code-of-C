// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>//for power function
int main() {
    void fibonaci(){
    int n = 7;
    int f1=0,f2=1,f3;
    for(int i=1;i<=n;i++){
         printf("%d\n",f1);
         f3 = f1+f2;
         f1=f2;
         f2=f3;
    }
    }
    //fibonaci()
    void armstrong(){
        int num =2441;
        int rem,sum=0,ognum;
        ognum = num;
        while(rem !=0){
            rem = num%10;
            num = num/10;
            sum = sum+rem*rem*rem;
        }
        if(sum==ognum)
            printf("%d is an armstrong number",ognum);
        else{
            printf("%d is not an armstrong number",ognum);
        }
        
    }
    //armstrong();
    void sumOfDigits(){
         int num =123;
        int rem,sum=0;
        
        while(rem !=0){
            rem = num%10;
            num = num/10;
            sum = sum+rem;
        }
        printf("the sum is %d",sum);
    }
    //sumOfDigits();
    void PalindRom(){
        int num =123 , rem,rev=0,ognum;
        ognum = num;
        while(num > 0){
            rem = num%10;//last digit of the number
            rev  = rev*10+rem;
            num = num/10; // for removing last digit
            
        }
        printf("reverse of the number is = %d\n",rev);
        if(rev==ognum) printf("%d is a Palindrom number",ognum);
        else printf("%d is not a Palindrom number",ognum);
    }
    //PalindRom();
    void printTable(){
        int num = 5;
        int c;
        
        for(int i=1;i<=10;i++){
            c = num*i;
            printf("%d x %d = %d\n",num,i,c);
        }
    }
    //printTable();
     void daysToYears(){
        int days;
        printf("enter the days:\n");
        scanf("%d",&days);
        int years,months;
        years = days/365;
        days=days-365*years;
        months=days/30;
        days=days-30*months;
        printf("years: %d\nmonths: %d\ndays: %d",years,months,days);
        }
     //daysToYears();
    //temprature conversion
      void cTof(){
            float f,c;//(0°F − 32) × 5/9
            printf("enter the Fahrenheit:\n");
            scanf("%f",&f);
            
            c = (f - 32) * 5/9;
            printf("conversion of Fahrenheit to celcius is %.2f",c);
    }
    //cTof();
    void area(){
    
    int num,r;
    printf("enter a 1 for squear\nenter a 2 for circle\nenter a 3 for spear\n");
    scanf("%d\n",&num);
    
    switch (num) {
        float area;
            case 1:
                printf(" enter a radius of squar:\n");
                scanf("%d",&r);
                area = r*r;
                printf("area of squear  is %.2f",area);
                break;
            case 2:
                printf(" enter a radius of circle:\n");
                scanf("%d",&r);
                area = 3.14*r*r;
                printf("area of circle  is %.2f",area);
                break;
            case 3:
                printf(" enter a radius of spear:\n");
                scanf("%d",&r);
                area = 4*3.14*r*r;
                printf("area of spear  is %.2f",area);
                break;
            default:
                printf("Out of range");
                break;
        }
    }
    //area();
    void factorial(){
         int number;    
     printf("Enter a number for factorial: ");
     scanf("%d",&number);  
      int fact=1
        for(int i=1;i<=f;i++){    
          fact=fact*i;    
      }    
      printf("Factorial of %d is: %d",number,fact); 
     }
    //factorial(); 
    void evenOdd(){
        int n;
        printf("Enter number to get even and odd: ");
        scanf("%d",&f);
        if(n%2==0){
            printf("%d is Even number",n);
        }
        else{
            printf("%d is Odd number",n);
        }
    }
    //Binary to decimal
    
    long n = 111;
    
    int binarytodecimal(int n){
    int rem,i=0,dc=0;
    
    while(n!=0){
        rem = n%10;
        n=n/10;
        dc = dc+rem*pow(2,i);
        i++;
        
    }
    return dc;
}
    printf("l%d",binarytodecimal(n));
    
    
    
    

    return 0;
}

//LeapYear()
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly visible by 400
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   // not a leap year if visible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   // all other years are not leap year
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;
}
