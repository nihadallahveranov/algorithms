// Simple Calculator

/*  
    open terminal and following the commands
    gcc -o calculator calculator.c
    chmod +x calculator.c
    ./calculator 1.9 + 9.4
*/
    
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

float addition (float a, float b){
    return a + b;
}
float substraction (float a, float b){
    return a - b;
}
float multiplication (float a, float b){
    return a * b;
}
float division (float a, float b){
    return a / b;
}


int main(int argc, char** argv){
    printf("Length of inputs is: %d \n", argc - 1);
    
    if ( argc != 4 ) {
        printf("Invalid input! Example: 1.9 + 9.4; 1.9 - 9.4; 1.9 x 9.4; 1.9 / 9.4; 1.9 mod 9.4; 1.9 ^ 9.4\n");
        return 1;
    }

    printf("%s %s %s = ", argv[1], argv[2], argv[3]);
    if ( strcmp(argv[2], "+") == 0 )        printf("%.2f\n", addition( atof(argv[1]), atof(argv[3]) ));
    else if ( strcmp(argv[2], "-") == 0 )   printf("%.2f\n", substraction( atof(argv[1]), atof(argv[3]) ));
    else if ( strcmp(argv[2], "x") == 0 )   printf("%.2f\n", multiplication( atof(argv[1]), atof(argv[3]) ));
    else if ( strcmp(argv[2], "mod") == 0 ) printf("%.2f\n", fmod( atof(argv[1]), atof(argv[3]) ));
    else if ( strcmp(argv[2], "^") == 0 )   printf("%.2f\n", pow( atof(argv[1]), atof(argv[3]) ));
    else if ( strcmp(argv[2], "/") == 0 && atof(argv[3]) != 0 ) printf("%.2f\n", division( atof(argv[1]), atof(argv[3]) ));
}
