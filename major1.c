#include "major1.h"

/* CSCE 3600, 3/6/26 */

int main() {

    int choice;

    unsigned int number;

/* menu to allow the user to select operation they want to perfom on 32 bit number*/

    while(1) {

        printf("Enter the menu option (1-5) for the operation youd like to perform:\n");


        printf("1) Count Leading Zeros\n");

        printf("2) Endian Swap\n");

        printf("3) Rotate right\n");

        printf("4) Parity\n");

        printf("5) Exit\n");

        scanf("%d", &choice);

        if (choice == 5) {  //if user selects exit program ends

            printf("Goodbye\n");
            break;
        }

        if (choice <= 0 || choice > 5) {

            printf("thats not an option\n");
            continue;
        }

        printf("Enter 32 bit number: ");

        scanf("%u", &number);


        switch(choice) {

            case 1: {
                printf(" %d is the number of leading zeros in %u\n", countLeadingZeros(number), number);
            


            break;
            }


            case 2:{
                printf("Endian swap performed on %u = %u\n", number, endianSwap(number));


            break;
            }
            
            case 3: {

                int positions;
                unsigned int result;

                printf("How many posisitions do you want to rotate right (betwwen 0 and 31 inclusively): ");

                scanf("%d", &positions);

                result = rotate_right(number, positions);

                printf("%u rotated right by %d posistion is: %u\n", number, positions, result);

        


            break;
        }

            case 4: {
                printf("parity of %u is %d\n", number, parity(number));


            break;

            }

            default:
                printf("thats not an option\n");
        }

    }

    return 0;

    
    }

