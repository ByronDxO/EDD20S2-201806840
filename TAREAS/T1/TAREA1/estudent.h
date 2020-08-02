#ifndef ESTUDENT_H
#define ESTUDENT_H
#include <QString>

class Estudent
{
private:
    QString nombre;
    long carnet;
public:
    Estudent(QString , long );
    QString get_nombre();
    long get_carnet();
    void set_Estudent(QString ,long);
};

#endif // ESTUDENT_H
