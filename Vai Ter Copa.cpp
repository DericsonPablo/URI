#include "iostream"
#include <stdio.h>

using namespace std;

int main(){

    int n;
    while(scanf("%i", &n) != EOF){
            if(n == 0){
                printf("vai ter copa!\n");
            }else if(n > 0){
                printf("vai ter duas!\n");
            }
    }

    return 0;
}
