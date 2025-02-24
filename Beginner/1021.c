/*
#include <stdio.h>

int main () {
    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    double total_amount, cents;
    int amount;
    scanf("%lf", &total_amount);
    amount = (int) total_amount;
    cents = total_amount - amount;  
    if(amount % 5 != 0 && amount >= 5) {
        amount--;
        cents += 1.00; 
    }

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++) {
        int result = amount / notes[i];
        printf("%d nota(s) de R$ %d.00\n", result, notes[i]);
        amount %= notes[i];
    }
    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i++) {
        int result = cents / coins[i]; 
        printf("%d moeda(s) de R$ %.2lf\n", result, coins[i]);
        cents -= (coins[i] * result);
    }

	return 0;
}
*/

#include <stdio.h>
 
int main()
 
{
    double n, d[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};
 
    int t = 0, c;
    scanf("%lf", &n);
    printf("NOTAS:\n");
    t = 0;
    n+=1e-9;
 
    while (d[t] >= 0.01)
    {
        c = 0;
        while (n >= d[t])
        {
            n -= d[t];
            c++;
        }
 
        if (d[t] == 1.0)
            printf("MOEDAS:\n");
        if (d[t] >= 2.0 )
            printf("%d nota(s) de R$ %.2f\n", c, d[t]);
        else
            printf("%d moeda(s) de R$ %.2f\n", c, d[t]);
        t++;
    }
 
    return 0;
 
}