/**
    Switch Statement Example program
*/
 
#include <stdio.h>
/**
 *main:prints food order under 2 categories by using nested switched
 */
int main(void)
{
    // Take two values from the user
    int number;
    int type;
    printf("Press 1 for Non-Veg, 2 for Veg: ");
    scanf("%d",&number);
    
    switch(number) {
        case 1:
            // User selected Non-Veg
            // Ask for the further selection
            printf("Press 1 for Chicken, 2 for Mutton, and 3 for Fish : ");
            scanf("%d", &type);
            switch(type){
                case 1:
                    printf("Your order Non-Veg - Chicken received \n");
                    break;
                case 2:
                    printf("Your order Non-Veg - Mutton received \n");
                    break;
                case 3:
                    printf("Your order Non-Veg - Fish received \n");
                    break;
                default:
                    printf("Invalid Option \n");
                    break;
 
            }
            break;
 
        case 2:
            // User selected Veg
            // Ask for further selection
            printf("Press 1 Mashroom, 2 for Panner, and 3 for Salad : ");
            scanf("%d", &type);
            switch(type){
                case 1:
                    printf("Your order Veg - Mashroom received \n");
                    break;
                case 2:
                    printf("Your order Veg - Panner received \n");
                    break;
                case 3:
                    printf("Your order Veg - Salad received \n");
                    break;
                default:
                    printf("Invalid Option \n");
                    break;
            }
            break;
 
        default:
            printf("Invalid Option - Please try again \n");
            break;
    }
 
    return 0;
}
