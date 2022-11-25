#include "digicode.h"
#include "ui_digicode.h"

digicode::digicode(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::digicode)
{
    ui->setupUi(this);


}

digicode::~digicode()
{
    delete ui;

}


void digicode::on_pushButton_0_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "0");
}


void digicode::on_pushButton_1_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "1");
}


void digicode::on_pushButton_2_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "2");
}


void digicode::on_pushButton_3_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "3");
}


void digicode::on_pushButton_4_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "4");
}


void digicode::on_pushButton_5_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "5");
}


void digicode::on_pushButton_6_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "6");
}


void digicode::on_pushButton_7_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "7");
}


void digicode::on_pushButton_8_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "8");
}


void digicode::on_pushButton_9_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "9");
}


void digicode::on_pushButton_ON_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "On");
}


void digicode::on_pushButton_OK_clicked()
{
ui->lineEdit->setText(ui->lineEdit->text()+ "Ok");
}

