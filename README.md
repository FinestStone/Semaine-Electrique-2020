[![N|Solid](
http://folietechnique.com/sites/folietechnique2.amigow.polymtl.ca/files/logo-folietechnique.png)](http://folietechnique.com/)

# Semaine Électrique 2020

Bienvenue sur le répertoire GitHub de la semaine électrique 2020 pour le camp scientifique [Folie Technique](http://folietechnique.com/) !

## Par où commencer ?

Sur cette page, vous pourrez trouver l'ensemble des scripts et des schémas de circuits nécessaires pour reproduire les activités présentées dans le cadre de cette semaine. Ceux-ci sont respectivement regroupés dans les dossiers « Circuits » et « Script » du dossier de l'activité correspondante.

> Par exemple, dans le répertoire « [Dédale du dé à DEL](https://github.com/FinestStone/Semaine-Electrique-2020/tree/master/Dédale%20du%20dé%20à%20DEL) », vous pourrez trouver dans le dossier « Circuits » les diagrammes classés dans l'ordre des étapes pour réaliser le circuit. Le dossier « Script » contient plutôt le code à installer sur le microcontrôleur, soit le [Arduino Nano](https://store.arduino.cc/usa/arduino-nano).

Avant d'entreprendre quoique ce soit, assurez-vous d'avoir installé l'éditeur de code (IDE) officiel d'Arduino. Pour l'installer, cliquez sur le lien correspondant au système d'exploitation de votre ordinateur :
* [Windows](https://www.arduino.cc/en/Guide/Windows);
* [Mac OS X](https://www.arduino.cc/en/Guide/MacOSX);
* [Linux](https://www.arduino.cc/en/Guide/Linux).

Pour la suite, vous aurez besoin d'un câble de type Micro-USB ([par exemple](https://www.staples.ca/fr/Câble-1M-Micro-USB-couleurs-variées/product_1883474_1-CA_2_20001)).

Dans l'IDE, cliquez sur Outils -> Type de carte -> Arduino Nano. Aussi, sélectionnez Outils -> Processor -> ATmega328P (Old Bootloader). Finalement, choisissez Outils -> Port -> (choisir un des ports proposés). Pour valider que tout est fonctionnel, branchez votre Arduino à votre ordinateur et sélectionnez Fichier -> Exemples -> 01.Basics -> Blink. Téléverser le code de la fenêtre qui vient de s'ouvrir, soit en appuyant sur le bouton avec la flèche (téléverser). Si tout se déroule correctement, on devrait pouvoir lire après quelques secondes, dans le bas de la fenêtre, "Téléversement terminé" et la DEL rouge de votre Arduino devrait s'allumer et s'éteindre chaque seconde.

Si vous éprouvez des difficultés, vous pouvez consulter ce [lien](https://www.arduino.cc/en/Guide/Troubleshooting#upload) ou consulter le [guide de démarrage officiel d'Arduino](https://www.arduino.cc/en/Guide/ArduinoNano). Il est à noter que pour les utilisateurs de Linux, il peut s'avérer nécessaire de modifier certaines permissions liées à l'utilisation du port USB. Si c'est le cas, voici [ce qu'il faut faire](https://www.youtube.com/watch?v=MKS1vVDXiU0).

## Pour réaliser un des projets

Si vous avez réussi à configurer votre microcontrôleur et que vous arrivez à l'utiliser, félicitations, vous pourrez désormais refaire les activités faites dans le cadre de la semaine ! Pour ce faire, il vous suffit de cliquer sur le bouton vert « Clone or Download » (dans le haut de la page). Vous pouvez simplement sélectionner « Download ZIP ».

Après avoir extrait le fichier ZIP, vous pourez consulter le code et les schémas des différentes activités. Les projets peuvent toujours être réalisés selon la séquence suivante :

1. Commencer par transférer le code de l'activité sur votre Arduino Nano.  
  1.1. Connectez l'Arduino Nano à votre ordinateur avec le câble Micro-USB.  
  1.2. Trouvez le script (fichier .ino) de l'activité et double-cliquez sur ce dernier (l'IDE devrait s'ouvrir).  
  1.3. Appuyer sur le bouton de téléversement (la flèche) dans l'IDE.  
  1.4. Débrancher votre Arduino.  
2. Réalisez le circuit, en suivant les étapes présentées dans les images.  
3. Alimentez le circuit (avec une batterie 9V ou en branchant votre Arduino à votre ordinateur).  
4. Amusez-vous !

Quelques dernières mentions :
- Pour l'activité « Dédale du dé à DEL », il vous sera nécessaire d'installer une librairie. Téléchargez d'abord le fichier .ZIP de la [librairie SevSeg](http://www.circuitbasics.com/wp-content/uploads/2017/05/SevSeg.zip). Puis, dans l'IDE, cliquez sur Croquis -> Inclure une bibliothèque -> Ajouter bibliothèque .ZIP... et ajoutez le fichier .ZIP téléchargé.
- À noter que l'activité « La danse finale » a été conçue avec le logiciel [StepMania](https://www.stepmania.com/download/) et l'utilisation d'un [Makey Makey](https://makeymakey.com/), l'adaptation de l'activité pour un Arduino sera peut-être proposée éventuellement.