#include <stdio.h>

int	main()
{
	int	a,b;

	printf("Bienvenue !\n");
	printf("Entrer le premier entier: ");
	scanf("%d", &a);
	printf("Entrer le deuxieme entier: ");
	scanf("%d", &b);
	printf("La somme de %d et %d est: %d\n", a, b, a + b);
	printf("Fin du Programme !\n");
	return 0;
}
