#include <stdio.h>

int main() 
{
    int n;
    float sp;

    FILE *in = fopen("C:\\Users\\hp\\Desktop\\PPL\\input.txt", "r");
    FILE *out = fopen("C:\\Users\\hp\\Desktop\\PPL\\output_selection.txt", "w");

    if ((in == NULL)||(out == NULL))
    {
        printf("Error opening input file");
        return 1;
    }

    fscanf(in, "%d", &n);
    fscanf(in, "%f", &sp);

    float weight[n], cost[n], profit[n], ratio[n];

    for (int i = 0; i < n; i++) 
    {
        fscanf(in, "%f %f", &weight[i], &cost[i]);
        profit[i] = sp - cost[i];
        ratio[i] = profit[i] / weight[i];
    }

    for (int i = 0; i < n - 1; i++)
     {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ratio[j] > ratio[max])
                max = j;

        }
        float temp;
        temp = ratio[i]; 
        ratio[i] = ratio[max]; 
        ratio[max] = temp;

        float temp1;
        temp1 = weight[i]; 
        weight[i] = weight[max]; 
        weight[max] = temp1;

        float temp2;
        temp2= profit[i]; 
        profit[i] = profit[max]; 
        profit[max] = temp2;

        float temp3;
        temp3 = cost[i]; 
        cost[i] = cost[max]; 
        cost[max] = temp3;

    }

    fprintf(out, "item\tWeight\tCost\tProfit\tProfit/Weight\n");
    for (int i = 0; i <n-1; i++) {
        fprintf(out, "%d\t%.2f\t%.2f\t%.2f\t%.2f\n",i+1,weight[i], cost[i], profit[i], ratio[i]);
    }
    printf("writing to file.\n");
    fclose(in);
    fclose(out);
    return 0;
}

