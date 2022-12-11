# tournament-management-tool
tournament management tool

Programmation en C : Projet

Gestion de compétition d’échecs



— fichier PDF qui décrit brièvement les structures de données utilisées (tableaux, types structurés, etc.)

—  un algorigramme pour d’écrire à haut niveau comment votre application se com-
porte.



2 Description
On désire produire une application permettant de gérer des tournois de jeu d’échecs. Chaque
tournoi réunit huit joueurs, et se fait par élimination directe : un joueur qui gagne avance dans le
tournoi, et le perdant quitte le tournoi. Un joueur gagne contre un autre s’il remporte au moins
un match. Chaque joueur dispose de 90 minutes pour jouer. Si à un moment donné l’horloge
d’un joueur atteint les 90 minutes, le joueur a perdu. S’il y a égalité, les joueurs recommencent
un match et continuent de jouer jusqu’à ce que l’un des deux perde.
Un joueur d’échec est décrit par les informations suivantes :
— un nom (30 caractères maximum) ;
— un prénom (20 caractères maximum) ;
— une date de naissance (au format jj-mm-aaaa) ;
— un numéro (unique !) de participant (entier non signé) ;
— combien de temps il reste sur l’horloge du joueur ou de la joueuse ;
— si le joueur ou la joueuse a gagné son match, ou bien s’il y a eu match nul, et à quel
niveau il ou elle se trouve (quart de finale, demi-finale, ou finale).
Note : toutes les chaînes de caractères stockées dans le système sont en majuscules.
Voici un exemple d’affichage pour le début de ce programme :





Bienvenue dans Echecs 2000. Veuillez entrer votre choix :

[0] Quitter le programme
[1] Ajouter un joueur
[2] Supprimer un joueur
[3] Afficher l’état du tournoi
[4] Afficher les matchs en cours
[5] Saisir le vainqueur d’un match en cours
[6] Déclarer un joueur forfait
[7] Commencer un tournoi
Faire un choix : _
Si l’utilisateur décide un joueur, voici un exemple d’écran :
*** Ajouter un joueur
Veuillez entrer le nom de famille du joueur: Pignon
Veuillez entrer le prenom du joueur : Francois
Veuillez entrer la date de naissance du joueur (au format jj/mm/aaaa) : 27/04/2001
Joueur #1 ajoute :
FRANCOIS PIGNON, ne(e) le 27/04/2001
** Voulez-vous entrer un autre joueur ? Il reste 7 places disponibles (o/n): n
3 Travail demandé
Les fonctionnalités qui doivent être assurées par le logiciel sont les suivantes :
— Ajouter un joueur.
— Déclarer forfait pour un joueur.
— Afficher l’état du tournoi (joueurs en quart de finale, demi-finale, finale, et vainqueur,
s’ils existent)
— Déclarer un joueur vainqueur
— Afficher les adversaires successifs d’un joueur pour le tournoi courant
— Commencer un tournoi (s’il y a moins de 8 joueurs, et qu’un joueur n’a pas d’adversaire,
il gagne automatiquement son match)
De plus, on veut proposer des fonctionnalités plus avancées, telles que :
1. Génération aléatoire des matchs : lorsque les inscriptions sont clôses, le logiciel génère
aléatoirement les rencontres.
2. Chaque match entre deux joueurs se compose de plusieurs parties. Pour remporter un
match, un joueur doit avoir accumulé 4 points. Une partie remportée donne 2 points, une
égalité 1 point, et une défaite 1 point.
Conseils, liste de fonctions utiles, etc.
A Conseils
— Réfléchissez d’abord sur papier.
— Faites des dessins, des schémas, etc.
— Pour chaque fonctionnalité, déterminez d’abord sur papier ce que vous comptez faire
avec :

2

— Qu’est-ce que la fonctionnalité prend en entrée ;
— ce qu’elle renvoie en sortie ;
— y a-t-il un état global du programme (via des variables globales) qui est modifié ?
— Attaquez-vous à une fonctionnalité à la fois (par personne).
— N’hésitez pas à « pré-remplir » vos tableaux et structures, afin de gagner du temps
quand vous voulez tester des fonctions de tri, de parcours de tableau, etc.
— C’est aussi utile pour votre démo technique : ça permet de montrer comment ajouter
des entrées ou en supprimer et montrer les cas limites (suppression dans un tableau
vide, addition dans un tableau plein, etc.).
— Certaines fonctionnalités sont plus difficiles à programmer que d’autres : répartissez-vous
les tâches en fonction de vos capacités.
— Mais il faut aussi programmer ensemble de temps en temps – souvent celui qui est à
côté du programmeur peut aider à repérer certaines erreurs. . .

— Certaines fonctionnalités s’appuient sur des « sous-fonctionnalités » communes : identifiez-
les à l’avance (faites des dessins et schémas !) pour pouvoir les programmer et permettre

d’accélérer votre développement.
— Il vaut mieux un programme avec une partie des fonctionnalités implantées, mais qui
compile et qui tourne, plutôt qu’un programme avec tout un tas de fonctionnalités à
moitié réalisées.

— Une bonne façon de s’organiser est de faire un « squelette », par exemple en program-
mant tous les affichages pour chaque fonction du programme, et en marquant au début

Fonctionnalite pas encore programmee.. Cela vous permettra de voir comment votre
programme s’articule.
— De préférence, utilisez plusieurs fichiers si possible (au moins 2) :
1. Définissez vos structures de données (en particulier les types struct) dans un fichier
en-tête (par exemple : echecs.h) ;
2. dans ce même fichier en-tête, écrire les prototypes de fonctions que vous allez utiliser ;
3. écrivez le code de vos fonctions dans un fichier C (par exemple echecs.c).
— Pour des raisons d’organisation, vous voudrez peut-être utiliser plusieurs fichiers
C, par exemple :
— menus.c : contient le code de toutes les fonctions qui affichent un menu à
l’écran ;
— entrees_sorties.c : contient toutes les fonctions permettant de saisir des
infos ou afficher celles déjà stockées ;
— echecs.c : toutes les autres fonctions.
— Code::Blocks vous permet d’ajouter plusieurs fichiers C au même projet.



Resume
// 8 conditions pour selectioner l’un des choix
[0] Quitter le programme // un boucle qui renvoie a la fin de programe
[1] Ajouter un joueur // un fonction avec son propre type et boucle pour demander si il faut ajouter un nouveau joueur et boucle condition pour maximum 8 joueur
[2] Supprimer un joueur // / une question qui affiche le nom de toutes les joueurs et demande de donner un numero pour supprimer un joueur.
[3] Afficher l’état du tournoi  // ………..
[4] Afficher les matchs en cours // ………..
[5] Saisir le vainqueur d’un match en cours // ……..
[6] Déclarer un joueur forfait // une question qui affiche le nom de toutes les joueurs et demande de donner un numero pour supprimer un joueur.
[7] Commencer un tournoi // un question pour etre sur si on veut commencer le tournoi, si ok …………

