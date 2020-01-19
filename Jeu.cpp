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
int reco = 0;
std::string rep;
std::string tywe;
int main() {
    std::cout << "Welcome to this game\n";
    std::cout << "Type the difficulty 1/2/3 : ";
    std::cin >> difficulty;
    std::cout << " \nyou are gonna to play on the " << difficulty << " difficulty level \n";
    std::cout << "So now please wait we're verifiying your game installation folder...\n";
    std::cout << "Press any key to skip this verification (we're verifiying only this file x)\n";
    system("timeout 10");
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
    if (weap == 1) {
        tywe = "Classic gun";
    }
    if (weap == 2) {
        tywe = "Sword";
    }
    if (weap == 3) {
        tywe = "MiniGun";
    }
    if (weap == 4) {
        tywe = "Sniper";
    }
    if (weap == 5) {
        tywe = "Cleaver";
    }
    std::cout << "You have " << life << " % of HP, " << ammo << " of ammo, " << tywe << " is your weapon and \n" << enco << " ennemies left\n";
    system("pause");
    std::cout << "starting engine of randomizer";
    system("timeout 3");
    int mene = 0;
    int ouch = 0;
    srand(time(NULL)); // initialisation de random
    mene = rand();
    while (life > 0) {
        while (enco > 0) {
            std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
            std::cout << "your moves are 'attak', 'skip', 'exit' , type your move in the case bellow \nyour move : ";
            std::cin >> rep;
            std::cout << "\n";
            if (rep == "attak") {
                mene = rand();
                mene = mene / 1000;
                enco = enco - mene;
                ouch = rand();
                ouch = ouch / 7500;
                ammo = ammo - 1;
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
            }
            if (rep == "idkbro") {
                std::cout << "gg bro you find this secret easter egg\n";
                std::cout << "----------------------------------------------------\n";
                std::cout << "-----Shoot game text line for win32 x86 and x64-----\n";
                std::cout << "----------------------------------------------------\n";
                std::cout << "made by Louis Cornu--Richard @win9x in 2020         \n";
                std::cout << "I love making game on C++\n";
                std::cout << "made on Visual Studio Community 2019 with C++\n";
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