#include <algorithm>
#include "Subject.h"

Subject::Subject()
    : observers(0)
{}

void Subject::add_observer(Observer * p)
{
    observers.push_back(p);
}

void Subject::remove_observer(Observer * p)
{
    std::erase(observers, p);
}

void Subject::notify()
{
    for (auto && e: observers)
    {
        e->update(this);
    }
}


ManSubject::ManSubject(int health)
    : health_(health)
{}

int ManSubject::get_health() const
{
    return health_;
}

voisd ManSubject::set_health(int health)
{
    health_ = health;
}
