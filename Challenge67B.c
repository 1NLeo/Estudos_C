#include <stdio.h>

int main () {

    int sum, rep = 0, greater = -1000;
    int nums[7];

    scanf ("%d", &rep); 

    for (int i = 0; i < rep; i ++){
    sum = 0, greater = -1000;
        for (int m = 0; m < 7; m++){
            scanf ("%d\n", &nums[m]);
            if (nums[m] > greater){
                greater = nums[m];
            }
            
        }
        for (int j = 0; j < 7; j++){
                if (nums[j] == greater){
                    nums[j] = 0;
                    break;
                }
            }

            for (int k = 0; k < 7; k++){
                sum = sum + nums[k];
            }

            printf ("%d\n", -sum + greater);
    }


    return 0;
}