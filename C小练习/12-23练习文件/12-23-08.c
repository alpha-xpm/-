#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            if((i+j)%2 == 0)
                printf("%c%c",219,219);
            else printf("  ");
        printf("\n");
        }
    
    
    }




    return 0;
}
