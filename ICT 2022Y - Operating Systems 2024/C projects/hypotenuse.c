// 




#include <stdio.h>
#include <math.h>

int main(){
    float opp,adj,hyp;

    printf("Enter opposite: ");
    scanf("%f",&opp);

    printf("Enter adjacent: ");
    scanf("%f",&adj);

    hyp = sqrt(pow(opp,2)+pow(adj,2));

    printf("\nOpposite:%f\n",opp);
    printf("\nAdjacent:%f\n",adj);
    printf("\nHypotenuse:%f\n",hyp);


    return 0;
}