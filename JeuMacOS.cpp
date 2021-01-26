#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>

int difficulty;
int life;
int ammo;
int enco;
int live;
int weap; //weapon 1:gun_classic 2:sword 3:minigun 4:sniper 5:cleaver
int dmg; //this is the coefficient for damage, this change with the weapon
int speed;
int reco = 0;
std::string rep;
std::string tywe;

int main(int argc, char const *argv[])
{
	std::cout << "starting randomizer engine" << std::endl;
    int mene = 0;
    int ouch = 0;
    srand(time(NULL)); // initialisation de random
    std::cout << "randomizer engine started\n" << std::endl;

    std::cout << "Welcome to this game v1.2\n";
    std::cout << "\nCheck my stuff at https://github.com/windows9x95/ \n";

    while (true) {
        while (std::cout << "Type the difficulty 1/2/3 : " && !(std::cin >> difficulty)) {
            std::cin.clear(); //clear bad input flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
            std::cout << "\nThat\'s not a valid value, please retry\n";
        }

        if (difficulty == 1) {
            live = 5;
            enco = 200;
            ammo = 500;
            life = 100;
            weap = 1;
            break;
        }
        else if (difficulty == 2) {
            live = 3;
            enco = 400;
            ammo = 500;
            life = 100;
            weap = 1;
            break;
        }
        else if (difficulty == 3) {
            live = 1;
            enco = 500;
            ammo = 250;
            life = 100;
            weap = 1;
            break;
        }
        else if (difficulty == 666) {
            live = 1;
            enco = 666;
            ammo = 150;
            life = 75;
            weap = 2;
            break;
        }
        else {
            std::cout << "\nThat\'s not a valid value, please retry" << std::endl;
        }
    }

    /*std::cout << "\nChoose a weapon \n1:classic gun \n2:basic sword \n(more weapon will be added later :) ) : ";
    std::cin >> tywe;*/

    std::cout << " \nYou'll play with the difficulty level " << difficulty << std::endl;;

    if (weap == 1) {
        tywe = "Classic gun";
        dmg = 1000;
        speed = 2;
    }
    else if (weap == 2) {
        tywe = "Sword";
        dmg = 1000;
        speed = 2;
    }
    else if (weap == 3) {
        tywe = "MiniGun";
        dmg = 100;
        speed = 123;
    }
    else if (weap == 4) {
        tywe = "Sniper";
        dmg = 10;
        speed = 1;
    }
    else if (weap == 5) {
        tywe = "Cleaver";
        dmg = 750;
        speed = 0;
    }
    else if (weap == 6) {
        tywe = "Unicorn";
        dmg = 5;
        speed = 0;
    }

    std::cout << "You have " << life << " % of HP, \n" << ammo << " of ammo, \n" << tywe << " is your weapon and \n" << enco << " ennemies left\n";
    system("read");

    mene = rand();
    while (enco > 0 && life > 0) {
    	//std::cin.clear();
        std::cout << "Your moves are 'attack', 'skip', 'exit', type your move in the case bellow \nyour move : ";
        std::cin >> rep;
        std::cout << "\n";
        life = life + reco;
        if (rep == "attack") {
            mene = rand() % (dmg / 10);
            enco = enco - mene;
            if (enco < 0) {
                enco = 0;
            }
            ouch = rand() % enco;
            ammo = ammo - speed;
            reco = rand() % 20;
            life = life - ouch;
            if (life < 0) {
                life = 0;
            }
            std::cout << "You have " << life << " % of HP, " << ammo << " of ammo, " << tywe << " is your weapon and \n" << enco << " ennemies left, maybe you recovered life\n";
            system("read");
        }
        else if (rep == "skip") {
            ouch = rand() % enco;
            life = life - ouch;
            if (life < 0) {
                life = 0;
            }
            std::cout << "You have " << life << " % of HP, " << ammo << " of ammo, " << tywe << " is your weapon and \n" << enco << " ennemies left, maybe you recovered life\n";
            reco = rand() % 50;
            system("read");
        }
        else if (rep == "exit") {
            std::cout << "ok you\'re gonna to exit this app, see you later \n(ps : you loose because you quit)\n\n";
            //std::terminate();
            std::exit(0);
            return 0;
        }
        else if (rep == "idk") {
            std::cout << "gg you found this secret easter egg                 \n";
            std::cout << "----------------------------------------------------\n";
            std::cout << "-----------Shoot game text line for macOS-----------\n";
            std::cout << "----------------------------------------------------\n";
            std::cout << "made by Julie Cornu--Richard @windows9x95 in 2020   \n";
            std::cout << "check my cool github project at                     \n";
            std::cout << "https://github.com/windows9x95/                     \n";
            std::cout << "I love making games on C++                          \n";
            std::cout << "made with the Visual Studio IDE with C++          \n\n";

            std::cout << "adapted for macOS by Léo Grange @ArtichOwO in 2021  \n";
            std::cout << "check my cool github project at                     \n";
            std::cout << "https://github.com/ArtichOwO                        \n";
            std::cout << "I love making stuff on C++                          \n";
            std::cout << "made with Sublime Text with C++                     \n";
            system("read");
        }
        else {
            std::cout << "I don\'t understand what you typed, try again \n";
            system("read");
        }
    }
    if (enco <= 0) {
        std::cout << "you win, there is " << enco << " ennemies left :)" << std::endl;
    }
    if (life <= 0) {
        std::cout << "you loose..." << std::endl;
    }

	return 0;
}