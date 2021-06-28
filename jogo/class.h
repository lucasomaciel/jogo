#include <iostream>
#include <string.h>
#include "weapons.h"
#include "spells.h"
#include <cstdlib>
#include <unistd.h>
#include<ctime>
unsigned int sleep(unsigned int seconds);

using namespace std;

class ICharacter{

    protected:

    int hp, physicalStrenght, armor, magicalStrenght, magicalResistance, agility, maxMana, maxUlti, ultiPoints, isPoisoned, isConfused, maxHp;

    int weaponIndex[7] = {-1, -1, -1, -1, -1, -1, -1};
    int spellIndex[7] = {-1, -1, -1, -1, -1, -1, -1};
    
    public:

    virtual int receiveDamagePhys(int damage) {}; 
    
    virtual int receiveDamageMag(int damage) {}; 
    
    virtual int receiveDamagePure(int damage) {};

    virtual int physicalDamageCalculator() {}; 
    
    virtual int magicalDamageCalculator(int escolha) {}; 
    
    virtual int changeWeapon() {}; 
    
    virtual int dodgeCalculator() {}; 

    virtual void initializeClass() {};

    virtual int imprime() {};

    virtual int showMagicMenu(ICharacter *p2) {};

    virtual int addUltiPoints() {};

    virtual int getMaxUltiPoints() {};

    virtual int getUltiPoints() {};

    virtual int useUlti(ICharacter *enemie) {};

    virtual int bulKathos() {};

    virtual int addMana() {};

    virtual int returnHp() {};

    virtual int returnMaxHp (){};

    virtual void seeStats(ICharacter *p2) {};

    virtual void removePoison() {};

    virtual int getPoison() {};

    virtual int addPoison() {};

    virtual void removeConfusion() {};

    virtual int getConfusion() {};

    virtual void addConfusion() {};

};




class Warrior : public ICharacter{
    
    private:

    int attributes [7] = {4000, 30, 100, 20, 80, 20, 20};

    Magic *magic; 
    Weapons *weapons;


    public:

    Warrior (Magic *magic, Weapons *weapons);
    
    int receiveDamagePhys(int damage) override;
    
    int receiveDamageMag(int damage) override;
    
    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override;
    
    int magicalDamageCalculator(int escolha) override; 
    
    int changeWeapon() override; 
    
    int dodgeCalculator() override; 
    
    void initializeClass() override;

    int imprime() override; 

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;

    ~Warrior (); 
};

class Thief : public ICharacter{

    private:

    int attributes [7] = {2800, 50, 50, 30, 40, 50, 80};
    Magic *magic; 
    Weapons *weapons;
    
    public:

    Thief (Magic *magic, Weapons *weapons);
    
    int receiveDamagePhys(int damage) override;
    
    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override; 

    int magicalDamageCalculator(int escolha) override; 

    int changeWeapon() override; 

    int dodgeCalculator() override;

    void initializeClass() override;

    int imprime() override;

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;


    int bulKathos() override;

    ~Thief (); 
};

class Wizard : public ICharacter{
    private:

    int attributes [7] = {2500, 100, 40, 100, 30, 80, 40};
    Magic *magic; 
    Weapons *weapons;

    public:

    Wizard (Magic *magic, Weapons *weapons);
    
    int receiveDamagePhys(int damage) override;

    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override; 

    int magicalDamageCalculator(int escolha) override;

    int changeWeapon() override;

    int dodgeCalculator() override;

    void initializeClass() override;

    int imprime() override; 

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;

    ~Wizard (); 
};

class Paladin : public ICharacter{
    private:

    int attributes [7] = {3200, 80, 60, 50, 60, 60, 60};
    Magic *magic; 
    Weapons *weapons;

    public:

    Paladin (Magic *magic, Weapons *weapons);

    int receiveDamagePhys(int damage) override;

    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override;

    int magicalDamageCalculator(int escolha) override;

    int changeWeapon() override;

    int dodgeCalculator() override;

    void initializeClass() override;

    int imprime() override;

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;

    ~Paladin (); 
};

class Animal : public ICharacter{
    private:

    int attributes [7] = {3200, 30, 80, 20, 80, 20, 50};
    Magic *magic; 
    Weapons *weapons;

    public:

    Animal (Magic *magic, Weapons *weapons);

    int receiveDamagePhys(int damage) override;

    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override;

    int magicalDamageCalculator(int escolha) override;

    int changeWeapon() override; 

    int dodgeCalculator() override;

    void initializeClass() override;

    int imprime() override;

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;

    

    ~Animal (); 
};

class Troll : public ICharacter{
    private:

    int attributes [7] = {2800, 20, 100, 20, 80, 20, 20};
    Magic *magic; 
    Weapons *weapons;

    public:

    Troll (Magic *magic, Weapons *weapons);

    int receiveDamagePhys(int damage) override;

    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override; 

    int magicalDamageCalculator(int escolha) override; 

    int changeWeapon() override;

    int dodgeCalculator() override;

    void initializeClass() override;

    int imprime() override; 

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;

    ~Troll ();
};

class Dragon : public ICharacter{
    private:

    int attributes [7] = {3000, 40, 100, 20, 50, 50, 30};
    Magic *magic; 
    Weapons *weapons;

    public:

    Dragon (Magic *magic, Weapons *weapons);

    int receiveDamagePhys(int damage) override;

    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override;

    int magicalDamageCalculator(int escolha) override;

    int changeWeapon() override;

    int dodgeCalculator() override; 

    void initializeClass() override;

    int imprime() override; 

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;

    ~Dragon (); //Função destrutora
};

class Zombie : public ICharacter{
    private:

    int attributes [7] = {2500, 20, 40, 20, 40, 80, 50};
    Magic *magic; 
    Weapons *weapons;

    public:

    Zombie (Magic *magic, Weapons *weapons);

    int receiveDamagePhys(int damage) override;
    
    int receiveDamageMag(int damage) override;

    int receiveDamagePure(int damage) override;

    int physicalDamageCalculator() override; 

    int magicalDamageCalculator(int escolha) override; 

    int changeWeapon() override; 

    int dodgeCalculator() override;

    void initializeClass() override;

    int imprime() override; 

    int showMagicMenu(ICharacter *p2) override; 

    int addUltiPoints() override;

    int getUltiPoints() override;

    int getMaxUltiPoints() override;

    int useUlti(ICharacter *enemie) override;
    
    int addMana() override;

    int returnHp() override;

    int returnMaxHp () override;

    void seeStats(ICharacter *p2) override;

    void removePoison() override;

    int getPoison() override;

    int addPoison() override;

    void removeConfusion() override;

    int getConfusion() override;

    void addConfusion() override;

    int bulKathos() override;
    
    ~Zombie (); 
};
 
