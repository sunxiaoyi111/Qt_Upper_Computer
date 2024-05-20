#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QThread>
#include "./DataWork/datawork.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPushButton *startButton;
    QLabel *progressLabel;
    QThread *thread;
    DataWork *worker;

private slots:
    void handleButton();
    void updateProgress(int value);
};

#endif // MAINWINDOW_H
