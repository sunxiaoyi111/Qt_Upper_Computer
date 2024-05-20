#include "datawork.h"
#include <QThread>

DataWork::DataWork(QObject *parent) : QObject(parent)
{

}


void DataWork::process()
{
    for (int i = 0; i <= 100000; ++i) {
        emit progress(i);
        QThread::msleep(1);  // 模拟耗时操作
    }
    emit finished();
}
