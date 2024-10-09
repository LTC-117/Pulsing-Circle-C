#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main(){
    int r;

    printf("insert the radius of your sphere: ");
    scanf("%d", &r);

    int d = 2*r;

    while(1){
        for(int x=0; x<=d; x++){
            for(int y=0; y<=d; y++){
                for(int z=0; z<=d; z++){
                    if(sqrt(pow(x-r, 2) + pow(y-r, 2) + pow(z-r, 2)) < r){
                        printf(" .");
                    }
                    else{
                        printf("  ");
                    }
                }
                printf("\n");
            }
            printf("\n");
            system("cls"); //Clears the console screen for every new layer of the sphere
        }
    }

    return 0;
}
