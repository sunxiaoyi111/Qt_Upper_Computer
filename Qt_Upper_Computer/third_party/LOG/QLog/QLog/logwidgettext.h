/******************************************************************************
* @文件名     logwidgettext.h
* @功能       日志显示类，将日志信息显示到QTextEdit中
*
* @开发者     mhf
* @邮箱      1603291350@qq.com
* @时间      2022/03/27
* @备注
*****************************************************************************/
#ifndef LOGWIDGETTEXT_H
#define LOGWIDGETTEXT_H

#include <QWidget>
#include "logwidgetbase.h"
namespace Ui {
class LogWidgetText;
}

class LogWidgetText : public LogWidgetBase
{
    Q_OBJECT


public:
    explicit LogWidgetText(QWidget *parent = nullptr);
    ~LogWidgetText();

protected:
    void on_logData(QtMsgType type, QTime time, QString file, QString function, int line, QString msg) override;
    void setMaxMumBlockCount(int maximum) override;

private slots:

    void on_but_clear_clicked();

private:
    Ui::LogWidgetText *ui;

    QString m_logStyle;
};

#endif // LOGWIDGETTEXT_H
