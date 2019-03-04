//  Pet.h

#ifndef Pet_h
#define Pet_h
#include <string>

class Pet
{
public:
    Pet(std::string nm, int initialHealth);
    void eat(int amt);
    void play();
    std::string name() const;
    int health() const;
    bool alive() const;
private:
    std::string m_name;
    int m_health;
};

#endif /* Pet_h */
