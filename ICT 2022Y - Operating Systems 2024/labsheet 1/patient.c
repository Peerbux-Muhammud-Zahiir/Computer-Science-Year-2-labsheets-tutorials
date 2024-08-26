#include <stdio.h>

int main() {
    int n, i, id, max_fbs_id, max_weight_id;
    float weight, fbs, max_fbs = 0, max_weight = 0;
    printf("Enter the number of patients: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter patient ID, weight, and FBS: ");
        scanf("%d %f %f", &id, &weight, &fbs);

        if(fbs > max_fbs) {
            max_fbs = fbs;
            max_fbs_id = id;
        }

        if(weight > max_weight) {
            max_weight = weight;
            max_weight_id = id;
        }
    }

    printf("Patient with highest FBS: ID=%d, FBS=%.2f\n", max_fbs_id, max_fbs);
    if(max_fbs_id != max_weight_id) {
        printf("Patient with highest weight: ID=%d, Weight=%.2f\n", max_weight_id, max_weight);
    }

    return 0;
}
