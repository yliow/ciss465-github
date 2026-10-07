#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>

class Observer;
class Subject
{
  public:
    Subject();
    void add_observer(Observer *);
    void remove_observer(Observer *);
    void notify();
  private:
    std::vector< Observer * > observers;
};

class ManSubject: public Subject
{
  public:
    ManSubject(int);
    int get_health() const;
    voisd set_health(int);
  private:
    int health_;
};

#endif
