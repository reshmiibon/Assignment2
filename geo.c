//Reshmii Bondili
#include <stdio.h>
#include <math.h> //to use pi constant 
double square(double side);
double sphere (double radius);
double cube (double edge);
int main (void)
{
    int option;
    double side;
    double radius;
    double edge;
    do{
        printf("Welcome to Geometry Calculator! \n");
        printf("1: Compute the area of a square \n");
        printf("2: Compute the volume of a sphere \n");
        printf("3: Compute the surface area of a cube \n");
        printf("4: Quit \n");
        printf("Enter an option number: ");
        scanf("%d", &option);

        switch (option){
        case 1: {
            printf("\nEnter the side length(cm): "); 
            scanf("%lf", &side);
            printf("Area of the square: %.2lf cm \n\n", square(side)); break;
        }
        case 2: {
            printf("\nEnter the radius(cm): "); 
            scanf("%lf", &radius);
            printf("Volue of the sphere: %.2lf cm \n\n", sphere(radius)); break;
        } break;
        case 3: {
            printf("\nEnter the edge(cm) of the cube: "); 
            scanf("%lf", &edge);
            printf("Surface area of the cube: %.2lf cm \n\n", cube(edge)); break;
        } break;
        case 4: break;
        default: printf("That is not an option. Pls try again.\n\n"); 
        }

    } while (option!=4);
    printf("\nGoodbye!");
}
//functions 
double square (double side){ return side*side;}
double sphere (double radius){ return ((M_PI*(radius*radius*radius))*4)/3;} //M_PI is pi constant
double cube (double edge) { return (6*(edge*edge)); }
