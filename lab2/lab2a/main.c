#include <stdio.h>  //printf, fprintf
#include <stdlib.h> //EXIT_SUCCESS
#include <string.h> //strlen, strcmp
#define TOO_MANY_ARGS 2
#define TOO_FEW_ARGS 1

int main(int argc, char* argv[]) {
    //Default values:
    int exit_code = EXIT_SUCCESS;
    char * greeting = "Hello";
    char * person = "UNKNOWN";
    //Add code to change the exit_code depending on argc
    
//    if(argc == 0){
//        exit_code = 1;
//    }else if(argc == 1){
//        exit_code = 0; 
//    }else if(argc > 1){
//        exit_code = 2;
//    }
    
    
    //Add code to change 'person' if one is given on command line
    int i, j;
    char * strings[argc-1];
    int stringCount = 0;
    for(i = 1; i < argc; i++){
        strings[stringCount] = argv[i];
        stringCount++;
    }
    char helloString[] = {'h', 'e', 'l', 'l', 'o'};
    for(i = 0; i < 1; i++){
        for(j = 0; j < strlen(strings[i]); i++){
            if(strings[i][j] == helloString[j]){
                printf("true");
            }
        }
//        if(strings[i] == helloString[i]){
//            printf("true");
//        }

    }
//    int len = strlen(argv[0]);
//    char * last3 = argv[0] + len - 3; //last3 points to last 3 chars
//    fprintf(stderr, "%s\n", argv[0]);
//    fprintf(stderr, "%s\n", last3);
    
//    int len = strlen(argv[0]);
//    char * last3 = argv[0] + len - 3; //last3 points to last 3 chars
//    fprintf(stderr, "%s\n", argv[0]);
//    fprintf(stderr, "%s\n", last3);
    
    //Add code to change 'greeting' if last 3 chars of command are 'bye'
  
    //printf("%s %s\n", greeting, person);
    
    //fprintf(stderr, "exit_code: %d\n", exit_code);
    
    printf("\nargc value: %d", argc);
//    printf("\nargv size: %d", sizeof(argv)/sizeof(argv[0]));
//    printf("\nargv value: %s", argv[0]);
//    printf("\nargv value: %c", *argv[1]);
//    printf("\nargv value: %s", argv[2]);
    //printf("\nargv value: %s", strings[0]);
    printf("\nargv value: %c", strings[0][1]);
    //printf("\nargc value: %d", strlen(strings[0]));
    
    
    return exit_code; //Could also say exit(exit_code)
}