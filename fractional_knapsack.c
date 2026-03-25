#include <stdio.h>

int main() 
{
    int n=0;
    float capacity=0;

    FILE *in = fopen("C:\\Users\\hp\\Desktop\\PPL\\output_selection.txt", "r");
    FILE *out = fopen("C:\\Users\\hp\\Desktop\\PPL\\output_knapsack.txt", "w");

    if (in == NULL || out == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }
    float weight[50],profit[50];
    char line[200];
    fgets(line, sizeof(line), in);
    while (fgets(line, sizeof(line), in))
    {
        if (sscanf(line, "%*d %f %*f %f %*f", &weight[n], &profit[n]) == 2)
        {
            n++;
        }
        else if (sscanf(line, "CAPACITY=%f", &capacity) == 1)
        {
            break;
        }
    }

    fclose(in);
    
    float totalProfit = 0, remaining = capacity;
    fprintf(out, "Item\tWeight\tProfit\tTaken\n");

    for (int i = 0; i < n; i++) 
    {
        if (weight[i] <= remaining)
        {
            remaining -= weight[i];
            totalProfit += profit[i];
            fprintf(out, "%d\t%.2f\t%.2f\tFull\n", i+1, weight[i], profit[i]);
        } 
        else 
        {
            float fraction = remaining / weight[i];
            totalProfit += profit[i] * fraction;
            fprintf(out, "%d\t%.2f\t%.2f\t%.2f\n", i+1,remaining, profit[i]*fraction,fraction);
            break;
        }
    }

    fprintf(out, "\nTotal Profit = %.2f\n", totalProfit);

    fclose(out);

    printf("Fractional knapsack calculated successfully in output_knapsack.txt\n");
    return 0;
}
