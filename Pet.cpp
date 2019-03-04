
//  Pet.cpp

#include "Pet.h"
#include <string>
using namespace std;

// Initialize the state of the pet
Pet::Pet(string nm, int initialHealth)
{
    m_name = nm;
    m_health = initialHealth;
}
void Pet::eat(int amt)
{
    // Increase the pet's health by the amount
    m_health += amt;
}
void Pet::play()
{
    // Decrease pet's health by 1 for the energy consumed
    m_health -= 1;
}
string Pet::name() const
{
    // Return the pet's name. Delete the following line
    // and replace it with the correct code.
    return m_name;
}
int Pet::health() const
{
    // Return the pet's current health level. Delete the
    // following line and replace it with the correct code.
    return m_health;
}
bool Pet::alive() const
{
    // Return whether pet is alive. (A pet is alive if
    // its health is greater than zero.) Delete the following
    // line and replace it with the correct code.
    if(m_health > 0) return true;
    else return false;
}
