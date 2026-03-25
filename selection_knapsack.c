#include <stdio.h>

void selectionSort(float weight[],float cost[],float profit[],float ratio[],int n,FILE*out1) 

{
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
        temp = weight[i]; 
        weight[i] = weight[max]; 
        weight[max] = temp;
        temp = cost[i]; 
        cost[i] = cost[max]; 
        cost[max] = temp;
        temp = profit[i]; 
        profit[i] = profit[max]; 
        profit[max] = temp;
    }

    fprintf(out1, "----- SELECTION SORT RESULT -----\n");
    fprintf(out1, "item\tWeight\tCost\tProfit\tProfit/Weight\n");
    for (int i = 0; i < n-1; i++) 
    {
        fprintf(out1, "%d\t%.2f\t%.2f\t%.2f\t%.2f\n",i+1,weight[i], cost[i], profit[i], ratio[i]);
    }
}



void fraction_knapsack(int n,float weight[],float profit[],float capacity,FILE*out2)
{
    float totalProfit=0.0;
    float remaining=capacity;
    fprintf(out2, "item\tWeight\tProfit\tTaken\n");
    for (int i = 0; i < n; i++) 
    {
        if (weight[i] <= remaining) 
        {
            remaining -= weight[i];
            totalProfit += profit[i];
           fprintf(out2, "%d\t%.2f\t%.2f\tFull\n",i+1,weight[i], profit[i]);
        } 
        else 
        {
            float fraction = remaining / weight[i];
            totalProfit += profit[i] * fraction;
            fprintf(out2, "%d\t%.2f\t%.2f\t%.2f\n",i+1,remaining, profit[i]*fraction,fraction);
            break;
        }
    }
    fprintf(out2, "\nTotal Profit: %.2f\n", totalProfit);

}


int main() 
{
    int n;
    float sp,capacity;

    FILE *in = fopen("C:\\Users\\hp\\Desktop\\PPL\\input.txt", "r");
    FILE *out1=fopen("C:\\Users\\hp\\Desktop\\PPL\\output_selection.txt", "r");
    FILE *out2= fopen("C:\\Users\\hp\\Desktop\\PPL\\output_selection_knapsack.txt", "w");

    if ((in == NULL)|| (out1 == NULL)||(out2 == NULL)) 
    {
        printf("Error\n");

        return 1;
    }

    fscanf(in, "%d", &n);
    fscanf(in, "%f", &sp);
    fscanf(in,"%f", &capacity);

    float weight[50], cost[50], profit[50], ratio[50];

    for (int i = 0; i < n; i++) 
    {
        fscanf(in, "%f", &weight[i]);
        fscanf(in, "%f", &cost[i]);
        profit[i] = sp - cost[i];
        ratio[i] = profit[i] / weight[i];
    }
    fclose(in);
    selectionSort(weight, cost, profit, ratio, n,out1);
    fraction_knapsack(n,weight,profit,capacity,out2);
    fclose(out1);
    fclose(out2);

    return 0;
}
