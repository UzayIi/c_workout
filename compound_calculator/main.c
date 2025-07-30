#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#include <stdint.h>
#include <windows.h>
#include <time.h>

int main() {

     /*

    double radius =  0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow (radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %0.2lf\n", area);
    printf("Surface Area: %0.2lf\n", surfaceArea);
    printf("Volume: %0.2lf\n", volume);

    


    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal (P): ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % (r):");
    scanf("%lf", &rate);
    rate /= 100;
    
    printf("Enter the number of years (t): ");
    scanf("%d", &years);

    printf("Enter the number of times compounded per year (n): ");
    scanf("%d", &timesCompounded);

    total = principal * pow((1 + (rate / timesCompounded)), (timesCompounded * years));
    printf("After %d years, the total amount will be $%0.2lf \n", years, total);

    


    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);


    if (age >= 65)
    {
        printf("You are an elder.\n");
    }
    else if (age >= 18)
    {
        printf("You are an adult.\n");
    
    }
    else if (age >= 13 && age < 18)
    {
        printf("You are a teenager.\n");
    }   
    else
    {
        printf("You are a child.\n");
    }

    


    bool isStudent = false;

    if (isStudent == true)
    {
        printf("You are a student.\n");
    }
    else{
        printf("You are not a student.\n");
    }

    

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';  

    if (strlen(name)== 0)
    {
        printf("You did not enter a name.\n");
    }
    else{
        printf("Hello, %s", name);
    
    }

    


    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1)
    {
        printf("Enter weight in kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f kilograms is equal to %.2f pounds.\n", kilograms, pounds);

    }
    else if (choice ==2)
    {
        printf("Enter weight in pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f pounds is equal to %.2f kilograms.\n", pounds, kilograms);
    }
    else{
        printf("Invalid choice. Please enter 1 or 2.\n");
        
    }

    



    char choice = '\0';
    float fahrenheit = 0.0f;
    float celsius = 0.0f;


    printf("Temperature Conversion Calculator\n");
    printf("Enter 'C' to convert Celsius to Fahrenheit: \n");
    printf("Enter 'F' to convert Fahrenheit to Celsius: ");
    printf("Enter your choice (C or F): ");
    scanf(" %c", &choice);

    if (choice == 'C')
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f Celsius is equal to %.1f Fahrenheit.\n", celsius, fahrenheit);
        
    }
    else if (choice == 'F')
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f Fahrenheit is equal to %.1f Celsius.\n", fahrenheit, celsius);
    }
    else
    {
        printf("Invalid choice. Please enter 'C' or 'F'.\n");

    }

    


    int dayOfWeek = 9;

    printf("Enter a day of the week (1-7): ");

    switch (dayOfWeek) {
        case 1: 
            printf("It is Monday");
            break;  
        case 2: 
            printf("It is Tuesday");
            break;   
        case 3:
            printf("It is Wednesday");
            break;
        case 4: 
            printf("It is Thursday");                       
            break;       
        case 5: 
            printf("It is Friday");
            break;
        case 6:
            printf("It is Saturday");           
            break;
        case 7:
            printf("It is Sunday");
            break;
        default:
            printf("Please only enter number (1-7)");    
    }
            

        char operator = '\0';
        double num1 = 0.0;
        double num2 = 0.0;
        double result = 0.0;

        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the operator (+ - * /): ");
        scanf("  %c", &operator);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        switch (operator)
        {
        case '+':
            result = num1 + num2;
            break;        
        case '-':
            result = num1 - num2;
            break;
        case '/':
            if (num2 == 0){
                printf("You can't divide by zero!\n");
            }
            else{
                result = num1 + num2;
            }
            break;          
        case '*':
            result = num1 * num2;
            break;
        default:
            printf("Invalid operator\n");    
        }
            
        printf("Result: %0.2lf", result);


        int number = 1;

        while (number <= 0){
            printf("Enter a number greater than 0: ");
            scanf("%d", &number);
        }

        

        char name [50] = "";

        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';

        while (strlen(name) == 0){
            printf("Name cannot be empty! Please enter your name: ");
            fgets(name, sizeof(name), stdin);
            name[strlen(name) - 1] = '\0';
        }

        printf("Hello %s", name);

        

        bool isRunnig = true;
        char response = '\0';

        while (isRunnig){
            printf("You are playing a game\n");
            printf("Would you like to continue? (Y => yes, N => no): ");
            scanf(" %c", &response);

            if (response != 'Y' && response != 'y'){
                isRunnig = false;
            }
            
        }
        printf("You exit the game");

        

        for (int i = 10; i >= 0; i--){
            Sleep(750);
            printf("%d\n", i);
        }

        printf("HAPPY NEW YEAR!");

        

        for (int i = 1; i < 10; i++){

            if (i == 4){
                continue;
            }
            
            printf("%d\n", i);
        }

        
        for (int i = 1; i < 10; i++){
            printf("%d ", i);
        }
        printf("\n");

        for (int i = 1; i < 10; i++){
            printf("%d ", i);
        }
        printf("\n");

        for (int i = 1; i < 10; i++){
            printf("%d ", i);
        }
        printf("\n");

        

        for (int i = 1; i <= 10; i++){
            for (int j = 1; j <= 10; j++)
            {
                printf("%3d ", i * j);
            }
            printf("\n");
        }
        
        

        int rows = 0;
        int columns = 0;
        char symbol = '\0';

        printf("Enter the # of rows: ");
        scanf("%d", &rows);

        printf("Enter the # of columns: ");
        scanf("%d", &columns);

        printf("Enter a symbol: ");
        scanf(" %c", &symbol);

        

        for (int i = 0; i < rows; i++){
            for (int i = 0; i < columns; i++){
            printf("%c", symbol);
            }
            printf("\n");
        }
        
        

        srand(time(NULL));

        int min = 50;
        int max = 100;
        
        int randomNum = (rand() % (max - min)) + min;

        printf("%d", randomNum);

        */

        return 0;
}