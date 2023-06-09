#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(10);
    ui->tableWidget->setColumnCount(4);
    ui->tableWidget->setHorizontalHeaderLabels((QStringList()<<"Заказчик"<<"Наименование"<<"Стоимость"<<"Выполнение заказа"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString orderer=ui->lineEdit->text(),name=ui->lineEdit_2->text(),price=ui->lineEdit_3->text();
    QDate dt=ui->dateEdit->date();
    QTextCharFormat format;
    QBrush brush;
    QColor color;
    int r=200,g=145,b=234,a=120;
    color.setRgb(r,g,b,a);
    brush.setColor(color);
    format.setBackground(brush);
    ui->calendarWidget->setDateTextFormat(dt,format);
        QTableWidgetItem *tbl = new QTableWidgetItem(orderer);
        ui->tableWidget->setItem(rownum,0,tbl);
        QTableWidgetItem *tbl1 = new QTableWidgetItem(name);
        ui->tableWidget->setItem(rownum,1,tbl1);
        QTableWidgetItem *tbl2 = new QTableWidgetItem(price);
        ui->tableWidget->setItem(rownum,2,tbl2);
    rownum++;
}

void MainWindow::on_pushButton_2_clicked()
{
    QString orderer=ui->lineEdit->text(),name=ui->lineEdit_2->text(),price=ui->lineEdit_3->text(),done="Выполнено";
    QDate dt=ui->dateEdit->date();
    QTextCharFormat format;
    QBrush brush;
    QColor color;
    int r=0,g=0,b=0,a=120;
    color.setRgb(r,g,b,a);
    brush.setColor(color);
    format.setBackground(brush);
    ui->calendarWidget->setDateTextFormat(dt,format);
        QTableWidgetItem *tbl = new QTableWidgetItem(orderer);
        ui->tableWidget->setItem(rownum,0,tbl);
        QTableWidgetItem *tbl1 = new QTableWidgetItem(name);
        ui->tableWidget->setItem(rownum,1,tbl1);
        QTableWidgetItem *tbl2 = new QTableWidgetItem(price);
        ui->tableWidget->setItem(rownum,2,tbl2);
        QTableWidgetItem *tbl3 = new QTableWidgetItem(done);
        ui->tableWidget->setItem(rownum,3,tbl3);
    rownum++;
}


