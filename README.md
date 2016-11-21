# MoteurPhysique
Dépot du projet de Calcul Numérique, A.K.A (Also Know As (aussi connu sous le nom de ) ) le Moteur Physique

### Architecture ###

* bin/lib : Dossier des binaires (libphysicengine.a)
* lib
  * src : Dossier des sources (Tous les .cpp)
  * test : Dossier des projet de test
* PhysicEngine : Dossier des headers (Tous les .h)
* Makefile : Le makefile

### Création d'une nouvelle classe ###

* Votre header doit se trouver dans le dossier PhysicEngine et votre cpp dans le dossier lib/src
* Lorsque vous créez une nouvelle classe, n'oubliez pas de l'inclure dans le makefile
  * SRC = [...] $(SRC_PATH)/myNewClass.cpp

### Création d'un nouveau test ###

* Créez un dossier au nom de votre test dans les dossier lib/test
* N'oubliez pas d'ajouter votre dossier test dans le makefile
  * TEST= $(TEST_PATH)/BasicTest/ [...] $(TEST_PATH)/MyNewTest/
* Pour créer votre makefile n'hésitez pas a copier le makefile d'un test déjà existant


### Commandes Make ###

* all : créer la bibliothèque static (libphysicengine.a)
* test : exécute tous les 'all' des makefile des dossier test
* clean : supprime les binaire et les fichiers temporaires (.o)
