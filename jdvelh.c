#include <stdio.h>


struct Chapitre{
	char description [400];
	int gaindor;
	int gainpv;
	char tabid [100];
};
typedef struct Chapitre chapitre;

void deplacement(int choix1, int choix2);

int main (){

	int or = 10;
	int pv = 100;
	int choixdir;


chapitre chapitre1 = {"Reveil", 0, 0, "chapitre 2 et chapitre3" };
chapitre chapitre2 = {"La grange", 50, 0, "chapitre4 et chapitre5"};
chapitre chapitre3 = {"Le champ de bataille", 50, 0, "chapitre6 et chapitre7"};

printf ("Le soleil brulant. Voila la première chose que j'ai vu en me reveillant. Qu'est-ce que je fais ici? Et d'ailleurs, c'est ou ici? Des ruines. Je ne me souviens de rien, je dois me souvenir! Je vais essayer de voir si je peux trouver des reponses.\n");
printf ("Je suis dans ce qui ressemble a un château, seulement celui-ci est detruit et je devais me trouver dedans lorsque ca s'est produit\n.");
printf ("Je sors des decombres. J'apercois une sorte de vieille grange(1) et ce qui ressemble a un chant de bataille abandonne(2).\n");
printf ("Ou dois-je aller? Argent: %d Points de vie: %d\n\n", or, pv);

scanf ("%d", &choixdir);

if (choixdir == 1){
	printf ("J'entre dans la grange. Elle n'a pas ete detruite. Elle me semble vide au début mais apres quelques seconde je vois 3 brebis bloties les unes contres les autres. Les pauvres elles ont l'air terrifiees.");
}
else if (choixdir == 2){
	printf ("Je me dirige vers le champ de bataille. Enfin ca l'etait. Tout le monde est mort. Il y a des cadavres a perte de vue. C'est horrible.");
}

else if (choixdir != 1, choixdir != 2){
	printf ("Je dois me concentrer. Ou dois-je aller?");
	scanf ("%d", &choixdir);
}


return 0;
}