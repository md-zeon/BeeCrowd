#include <stdio.h>

int main () {
	int s1, e1, s2, e2, h, m;
	scanf("%d %d %d %d", &s1, &e1, &s2, &e2);
	h = s2 - s1;
	m = e2 - e1;
	if(m < 0){
		m += 60;
		h--;
	}
	if(h < 0){
		h += 24;
	}
	if(s1 == s2 && e1 == e2) {
		printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else {
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
	}

	return 0;
}


// #include <stdio.h>
// int main()
// {
//     int a, b, c, d;
//     int dif;
//     scanf("%d %d %d %d", &a, &c, &b, &d);
//     dif = ((b*60)+d) - ((a*60)+c);
//     if(dif<=0) dif += 24*60;
//     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);
//     return 0;
// }