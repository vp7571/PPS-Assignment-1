OUTPUT:#include <stdio.h>

int globalVar = 10;  // Global variable
static int staticGlobalVar = 20;  // Static global variable

void demoFunction() {
   int autoVar = 0;  // Automatic variable
   static int staticVar = 0;  // Static variable
   register int I;  // Register variable

    // Print values
    printf("Auto variable: %d\n", autoVar);
    printf("Static variable: %d\n", staticVar);
    
    // Change values
    autoVar++;
    staticVar++;
    
    // Loop with register variable
    for(i = 0; i < 5; i++) {
        printf("Register variable in loop: %d\n", i);
    }
}

int main() {
    // Print global variables
    printf("Global variable: %d\n", globalVar);
    printf("Static global variable: %d\n", staticGlobalVar);

    // Call the function thrice
    for(int j = 0; j < 3; j++) {
        printf("\nFunction call %d:\n", j + 1);
        demoFunction();
    }
    
    return 0;
}
