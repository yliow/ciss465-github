#include <iostream>
#include "ManSubject.h"
#include "DaogObserver.h"

int main()
{
    ManSubject jdoe(10);
    DogObserver rex;
    jdoe.add_observer(&rex);
    jdoe.set_health(3);
    
    return 0;
}
