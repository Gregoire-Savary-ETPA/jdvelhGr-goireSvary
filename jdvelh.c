#include <stdio.h>

int main (){

printf ("Le soleil brulant. Voila la première chose que j'ai vu en me reveillant. Qu'est-ce que je fais ici? Et d'ailleurs, c'est ou ici? Des ruines. Je ne me souviens de rien, je dois me souvenir! Je vais essayer de voir si je peux trouver des reponses.\n");
printf ("Je suis dans ce qui ressemble a un château, seulement celui-ci est detruit et je devais me trouver dedans lorsque ca s'est produit\n.");
printf ("Je sors des decombres. J'apercois une sorte de vieille grange(1) et ce qui ressemble a un chant de bataille abandonné(2).\n");
printf ("Ou dois-je aller?\n\n");

int choixdir;

scanf ("%d", &choixdir);

if (choixdir == 1){
	printf ("J'entre dans la grange. Elle n'a pas ete detruite. Elle me semble vide au début mais apres quelques seconde je vois 3 brebis bloties les unes contres les autres. Les pauvres elles ont l'air terrifiees.");
}
else if (choixdir == 2){
	printf ("Je me dirige vers le champ de bataille. Enfin ca l'etait. Tout le monde est mort. Il y a des cadavres a perte de vue. C'est horrible.");
}


return 0;
}