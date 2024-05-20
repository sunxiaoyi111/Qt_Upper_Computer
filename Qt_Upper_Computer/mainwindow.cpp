#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVBoxLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow), thread(new QThread), worker(new DataWork)
{
    ui->setupUi(this);
    startButton = new QPushButton("Start", this);
    progressLabel = new QLabel("0", this);

    QVBoxLayout *layout = new QVBoxLayout();
    layout->addWidget(startButton);
    layout->addWidget(progressLabel);
    QWidget *widget = new QWidget();
    widget->setLayout(layout);
    setCentralWidget(widget);

    worker->moveToThread(thread);

    connect(startButton, &QPushButton::clicked, this, &MainWindow::handleButton);
    connect(worker, &DataWork::progress, this, &MainWindow::updateProgress);

    connect(worker, &DataWork::finished, thread, &QThread::quit);
    connect(thread, &QThread::finished, worker, &QObject::deleteLater);
}

MainWindow::~MainWindow()
{
    thread->quit();
    thread->wait();
    delete startButton;
    delete progressLabel;
}

void MainWindow::handleButton()
{
    thread->start();
    QMetaObject::invokeMethod(worker, "process", Qt::QueuedConnection);
}

void MainWindow::updateProgress(int value)
{
    progressLabel->setText(QString::number(value));
}
