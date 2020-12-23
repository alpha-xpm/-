#include<stdio.h>

int main(){

    int i,j,k,o;
    printf("\n");
    for(i = 1;i < 5;i++){
        for(j=1;j<5;j++){
            for(k=1;k<5;k++)
            {   for(o=1;o<5;o++){                                
                if(i!=j&&i!=k&&i!=o&&j!=k&&j!=o&&k!=o){
                    printf("%d,%d,%d,%d\n",i,j,k,o);
                     }
                }
            }
        }
    }
    return 0;
}
