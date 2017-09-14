//
//  main.cpp
//  OCC++
//
//  Created by jean-charles SOTTAS on 10/09/2017.
//  Copyright © 2017 jean-charles SOTTAS. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
//    
////    bool boolean (2);
//    int nombreDeVie (5);
//    
//    int &niveau(nombreDeVie);
//    
//    int entier;
//    std::string nom ;
//    
//    entier = 2;
////    boolean =false;
//    nom = "toto";
//    
//    std::cout << "Hello, World!\n" << "Comment tu vas " << niveau << nombreDeVie<<"?\n";
    
//    cout <<"Choisi t'on niveau "<<endl;
//    int niveau(0);
//    cin >> niveau;
//    cout <<"Vous avez choisi ce niveau "<<niveau<<endl;
//    
//
//    
//
//        cout << "Entrer le nom et le numero du niveau " << endl;
//        cout << "Choisi la diificulté ?" << endl;
//        string piUtilisateur("facile"); //On crée une case mémoire pour stocker un nombre réel
//        cin >> piUtilisateur; //Et on remplit cette case avec ce qu'écritl'utilisateur
//        cin.ignore();
//        string nomUtilisateur("Sans nom"); //On crée une case mémoire pour contenirune chaine de caractères
//        getline(cin,nomUtilisateur); //On remplit cette case avec ce qu'écrit l'utilisateur
//    
//
//    
//        cout << "Vous avez choisi  " << nomUtilisateur << " en difficulté " << piUtilisateur << "." << endl;
//
    
//    
//    int const niveauMax(5);
//    string const nomJeu("Tetris");
//    cout <<"Le niveau maximum du jeu est " <<niveauMax <<" pour le jeu "<<nomJeu<<endl;
//    
    
    
    
//    int a(0),b(0),c;
//    
//    cout <<"Entrer le premier nombre à additionner "<<endl;
//    cin >>a;
//    cin.ignore();
//    cout <<"Entrer le deuxieme nombre à additionner"<<endl;
//    cin>>b;
//    c=a+b;
//    cout<<"le resultat de l'addition de "<<a<<" + "<<b<<" = "<<c<<endl;
//
    
    double a(0),b(0),c(0);
    cout <<"Entrer le premier nombre à multiplier"<<endl;
    cin >>a;
    cout <<"Entrer le deuxieme nombre à multiplier"<<endl;
    cin >>b;
    
    double resultat (a*b);
    
    cout <<"Le resultat de la multiplication de "<<a<<" * "<<b <<" = "<<resultat<<endl;
    
    cout << "Entrer un nombre a additionner au resultat précendent ";
    cin >>c;
    resultat = resultat+c;
    cout<< "le resultat est "<<resultat<< endl;
    return 0;
}
