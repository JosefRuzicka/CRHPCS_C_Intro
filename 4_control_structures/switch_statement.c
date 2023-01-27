#include <stdio.h>
#include <stdbool.h>
void main() {
    bool a = false;
    bool b = false;
    bool c = false;
    int temp_value = 0;

    printf("variable a: insert 0 for false or 1 for true\n");
    scanf("%d", &temp_value);
    (temp_value == 1) ? (a = true) : (a = false);

    printf("variable b: insert 0 for false or 1 for true\n");
    scanf("%d", &temp_value);
    (temp_value == 1) ? (b = true) : (b = false); 

    printf("variable c: insert 0 for false or 1 for true\n");
    scanf("%d", &temp_value);
    (temp_value == 1) ? (c = true) : (c = false);

    while (temp_value != 5){
        // menu.
        printf("\nLogical operators main menu\n1. check AND\n2. check OR\n3. check XOR\n4. check NOT\n5. exit program\n");

        scanf("%d", &temp_value);
       
        switch (temp_value) {
             case 1:
                 (a && b && c) ? printf("TRUE\n------\n") : printf("FALSE\n------\n");
                 break;
             case 2:
                 (a || b || c) ? printf("TRUE\n------\n") : printf("FALSE\n------\n");
                 break;
             case 3: 
                 (a && (!b && !c) || b && (!a && !c) || c && (!a && !b)) ? printf("TRUE\n------\n") : printf("FALSE\n------\n");
                 break;
             case 4: 
                 (!a && !b && !c) ? printf("TRUE\n------\n") : printf("FALSE\n------\n");
                 break;
             default:
                 printf("terminating program\n");
                 break;
        }
    }
}
