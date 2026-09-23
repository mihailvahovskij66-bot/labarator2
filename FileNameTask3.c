#include <stdio.h> 
#include <locale.h> 
int main()
{
    setlocale(LC_ALL, "");
    float n = 323;
    float L = 4;
    int k = 5;
    int m = 1;
    int pole = k + m + 2;
    printf("Äàíî:\n"
        "%12.0f\n"
        "%12.0f\n"
        "        __________\n"
        "Îòâåò:\n"
        "        %+0*.*f\n",
        n, L, pole, m, n / L);
    return 0;
}
