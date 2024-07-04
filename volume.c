//Author:Walter Ochieng 
//date:02/07/2024
//Descripction:volume of a sphere 
//Regeneration number:BBIT-05-0124/2016


#include <stdio.h>
#include <math.h>

#define PI 3.14

// Function to calculate the volume of a sphere
floatsphereVolume(float radius) {
    return (4.0 / 3.0)* PI * pow(radius, 3);
}

int main() {
    floatradius;

    // Prompt the user to enter the radius
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate the volume
    volume = sphereVolume(radius);

    // Print the result
    printf("The volume of the sphere with radius %.2f is %.2f\n", radius, volume);

    return 0;
}


