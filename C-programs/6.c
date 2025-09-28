#include <stdio.h>
int main() {
    int vehicleType;   
    int violationType; 

    printf("Enter vehicle type (1=Car, 2=Motorcycle, 3=Truck): ");
    scanf("%d", &vehicleType);

    printf("Enter violation type (1=Overspeeding, 2=Signal Breaking, 3=Wrong Parking): ");
    scanf("%d", &violationType);

    switch (vehicleType) 
    {
        case 1: // Car
            switch (violationType) 
            {
                case 1:
                    printf("Fine for Car Overspeeding: Rs. 3000\n");
                    break;
                case 2:
                    printf("Fine for Car Signal Breaking: Rs. 5000\n");
                    break;
                case 3:
                    printf("Fine for Car Wrong Parking: Rs. 2000\n");
                    break;
                default:
                    printf("Invalid Violation Type!\n");
            }
            break;

        case 2: // Motorcycle
            switch (violationType) 
            {
                case 1:
                    printf("Fine for Motorcycle Overspeeding: Rs. 1500\n");
                    break;
                case 2:
                    printf("Fine for Motorcycle Signal Breaking: Rs. 3000\n");
                    break;
                case 3:
                    printf("Fine for Motorcycle Wrong Parking: Rs. 1000\n");
                    break;
                default:
                    printf("Invalid Violation Type!\n");
            }
            break;

        case 3: // Truck
            switch (violationType) 
            {
                case 1:
                    printf("Fine for Truck Overspeeding: Rs. 8000\n");
                    break;
                case 2:
                    printf("Fine for Truck Signal Breaking: Rs. 10000\n");
                    break;
                case 3:
                    printf("Fine for Truck Wrong Parking: Rs. 4000\n");
                    break;
                default:
                    printf("Invalid Violation Type!\n");
            }
            break;

        default:
            printf("Invalid Vehicle Type!\n");
    }

    return 0;
}
