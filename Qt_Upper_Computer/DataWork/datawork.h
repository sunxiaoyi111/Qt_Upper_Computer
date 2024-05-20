#ifndef DATAWORK_H
#define DATAWORK_H

#include <QObject>

class DataWork : public QObject
{
    Q_OBJECT
public:
    explicit DataWork(QObject *parent = nullptr);

public slots:
    void process();
signals:
    void progress(int);
    void finished();

};

#endif // DATAWORK_H
