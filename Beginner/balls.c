#include <stdio.h>

float weight(float ball_weights[], int si, int ei) {
    float total_weight = 0.0;
    for(int i = si; i < ei; i++) {
        total_weight += ball_weights[i];
    }
    return total_weight;
}

int main () {
	float ball_weights[12] = {1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0};
    int ball_num;
    float ball_weight;
    
    do{
        printf("Enter the defective ball number between (1-12): ");
        scanf("%d", &ball_num);
    } while(ball_num < 1 || ball_num > 12);

    do {
    printf("Enter defective balls weight between(1.1 - 1.9): ");
    scanf("%f", &ball_weight);
    } while(ball_weight <= 1);

    ball_weights[ball_num-1] = ball_weight;

    float weight1, weight2; //,weight3;

    weight1 = weight(ball_weights, 0, 4);
    weight2 = weight(ball_weights, 4, 8);
	// weight3 = weight(ball_weights, 8, 12);

    if(weight1 == weight2) { // 1st used weight
        if(ball_weights[8] == ball_weights[9]) { // 2nd used weight
            if(ball_weights[10] > ball_weights[11]) { // 3rd used weight
                printf("11th ball is defective\n");
            } else {
                printf("12th ball is defective\n");
            }
        } else {
            if(ball_weights[8] > ball_weights[9]) { // 2nd used weight
                printf("9th ball is defective\n");
            } else {
                printf("10th ball is defective\n");
            }
        }
    } else {
        if(weight1 > weight2) {
            if(ball_weights[0] == ball_weights[1]) { // 2nd used weight
                if(ball_weights[2] > ball_weights[3]) { // 3rd used weight
                    printf("3rd ball is defective\n");
                } else {
                    printf("4th ball is defective\n");
                }
            } else {
                if(ball_weights[0] > ball_weights[1]) { // 2nd used weight
                    printf("1st ball is defective\n");
                } else {
                    printf("2nd ball is defective\n");
                }
            }
        } else {
            if(ball_weights[4] == ball_weights[5]) { // 2nd used weight
                if(ball_weights[6] > ball_weights[7]) { // 3rd used weight
                    printf("7th ball is defective\n");
                } else {
                    printf("8th ball is defective\n");
                }
            } else {
                if(ball_weights[4] > ball_weights[5]) { // 2nd used weight
                    printf("5th ball is defective\n");
                } else {
                    printf("6th ball is defective\n");
                }
            }
        }
    }

	return 0;
}
