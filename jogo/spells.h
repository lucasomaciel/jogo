#include <stdlib.h>


using namespace std;

class Magic{

protected:

int mp;
int magic[7] = {200, 400, 360, 400, 320, 280, 200};
int typeMagic[7] = {0, 1, 1, 0, 1, 2, 2};
int manaWaste[7] = {12, 12, 14, 16, 14, 12, 12};
std::string magicName[7] = {"Pocao da Vida" , "Halito de Fogo" , "Bio" , "Cura" , "Flama Gelada", "Intoxicacao", "Tempestade"};

friend class Warrior;
friend class Paladin;
friend class ICharacter;

public:
Magic(); 
void initialMp(int maxMana);


int getMp();
int getMagic(int index);
int getTypeMagic(int index);
int getManaWaste(int index);
string getMagicName(int index);
int manaAfterRound();



int baseMagicDamage(int choice);

};



Magic :: Magic()
{
    
}



int Magic :: getMagic(int index)
{
    return this->magic[index];
}


int Magic :: getTypeMagic(int index)
{
    return this->typeMagic[index];
}


int Magic :: getManaWaste(int index)
{
    return this->manaWaste[index];
}

string Magic :: getMagicName(int index)
{
    return this->magicName[index];
}

int Magic :: getMp()
{
    return this->mp;
}


void Magic :: initialMp(int maxMana)
{
    this->mp = maxMana;
}


int Magic :: baseMagicDamage(int choice) 
{

    int damage = 0;

    if(this->mp > this->manaWaste[choice])
    {
        this->mp -= this->manaWaste[choice];
        damage = magic[choice];

        return damage;
    }


    else
    {
        return -1; 
    }

}

int Magic :: manaAfterRound()
{
    mp += 10;

    return mp;
}