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
int main() {
    std::cout << "starting engine of randomizer";
    int mene = 0;
    int ouch = 0;
    srand(time(NULL)); // initialisation de random
    std::cout << "randomize engine started";
    std::cout << "Welcome to this game v1.2\n";
    std::cout << "\nCheck my stuff at https://github.com/windows9x95/ \n";
    std::cout << "\n";
    std::cout << "Type the difficulty 1/2/3 : ";
    std::cin >> difficulty;
    std::cout << "choose a weapon 1:classic gun 2:basic sword (more weapon will be added later :) ) : ";
    std::cin >> tywe;
    std::cout << " \nyou are gonna to play on the " << difficulty << " difficulty level \n";

    std::cout << "\n";
    if (difficulty == 1) {
        live = 5;
        enco = 200;
        ammo = 500;
        life = 100;
        weap = 1;
    }
    if (difficulty == 2) {
        live = 3;
        enco = 400;
        ammo = 500;
        life = 100;
        weap = 1;
    }
    if (difficulty == 3) {
        live = 1;
        enco = 500;
        ammo = 250;
        life = 100;
        weap = 1;
    }
    if (difficulty == 666) {
        live = 1;
        enco = 666;
        ammo = 150;
        life = 75;
        weap = 2;
    }
    if (weap == 1) {
        tywe = "Classic gun";
        dmg = 1000;
        speed = 2;
    }
    if (weap == 2) {
        tywe = "Sword";
        dmg = 1000;
        speed = 2;
    }
    if (weap == 3) {
        tywe = "MiniGun";
        dmg = 100;
        speed = 123;
    }
    if (weap == 4) {
        tywe = "Sniper";
        dmg = 10;
        speed = 1;
    }
    if (weap == 5) {
        tywe = "Cleaver";
        dmg = 750;
        speed = 0;
    }
    if (weap == 6) {
        tywe = "Unicorn";
        dmg = 5;
        speed = 0;
    }
    std::cout << "You have " << life << " % of HP, " << ammo << " of ammo, " << tywe << " is your weapon and \n" << enco << " ennemies left\n";
    system("pause");

    mene = rand();
    while (life > 0) {
        while (enco > 0) {
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << "your moves are 'attak', 'skip', 'exit' , type your move in the case bellow \nyour move : ";
            std::cin >> rep;
            std::cout << "\n";
            if (rep == "attak") {
                mene = rand();
                mene = mene / dmg;
                enco = enco - mene;
                ouch = rand();
                ouch = ouch / 7500;
                ammo = ammo - speed;
                reco = rand();
                reco = reco / 8000;
                life = life - ouch;
                std::cout << "You have " << life << " % of HP, " << ammo << " of ammo, " << tywe << " is your weapon and \n" << enco << " ennemies left, maybe you recovered life\n";
                life = life + reco;
                system("pause");
            }
            if (rep == "skip") {
                ouch = rand();
                ouch = ouch / 10000;
                life = life - ouch;
                std::cout << "You have " << life << " % of HP, " << ammo << " of ammo, " << tywe << " is your weapon and \n" << enco << " ennemies left, you recovered life\n";
                reco = rand();
                reco = reco / 10000;
                life = life + reco;
                system("pause");
            }
            if (rep == "exit") {
                std::cout << "ok you are gonna to exit this app, see you later (ps : you loose because you quit)\n";
                system("pause");
                std::terminate();
                return 0;
            }
            if (rep == "idk") {
                std::cout << "gg  you find this secret easter egg\n";
                std::cout << "----------------------------------------------------\n";
                std::cout << "-----Shoot game text line for win32 x86 and x64-----\n";
                std::cout << "----------------------------------------------------\n";
                std::cout << "made by Julie Cornu--Richard @windows9x95 in 2020   \n";
                std::cout << "check my cool github project at                     \n";
                std::cout << "https://github.com/windows9x95/                     \n";
                std::cout << "I love making game on C++\n";
                std::cout << "made with the Visual Studio IDE with C++\n";
                system("pause");
            }
            else {
                std::cout << "I dont understand what you typed, try again \n";
                system("pause");
            }
        }
    }
    if (enco <= 0) {
        std::cout << "you win, there is " << enco << "ennemies left :)";
    }
    if (life <= 0) {
        std::cout << "you loose...";
    }
    return 0;
}
