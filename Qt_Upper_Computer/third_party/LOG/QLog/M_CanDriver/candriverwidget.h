#ifndef CANDRIVERWIDGET_H
#define CANDRIVERWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class CANDriverWidget; }
QT_END_NAMESPACE

class CANDriverWidget : public QWidget
{
    Q_OBJECT

public:
    CANDriverWidget(QWidget *parent = nullptr);
    ~CANDriverWidget();

private:
    Ui::CANDriverWidget *ui;
};
#endif // CANDRIVERWIDGET_H
