#ifndef CANDRIVERTASK_H
#define CANDRIVERTASK_H

#include <QObject>

class CANDriverTask : public QObject
{
    Q_OBJECT
public:
    explicit CANDriverTask(QObject *parent = nullptr);

signals:

};

#endif // CANDRIVERTASK_H
