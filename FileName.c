#include <stdio.h>
#include <locale.h>

int main()
{
	int N,K;
	N = 21;
	K = 38;
	setlocale(LC_ALL, "");
	printf("Сейчас %d часов %d минут 00 секунд \n ", N, K);
	printf("Идет %d минута суток \n",N*60+K+1);
	int doplun;
	doplun = 24 * 60 - (N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут \n", doplun / 60, doplun % 60);
	int gohours;
	gohours = (N * 60 + K - 8 * 60) * 60;
	printf("С 8:00 прошло %d секунд \n ",gohours);
	printf(" Текущий час = %.2f и текущая минута = %.2f часа \n ", N / 24.0, K / 60.0);
	return 0;

}