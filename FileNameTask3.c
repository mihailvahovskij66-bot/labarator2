//#include <stdio.h>
//int main() {
//    int n = 323;     
//    int L = 4;   
//    int k = 5;    
//    int m = 1;     
//    float result = (float)n / L;  
//    printf("%*.*f\n", k + m + 1, m, result);
//    return 0;
//}




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
    printf("Дано:\n"
        "%12.0f\n"
        "%12.0f\n"
        "        __________\n"
        "Ответ:\n"
        "        %+0*.*f\n",
        n, L, pole, m, n / L);
    return 0;
}