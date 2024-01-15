#include "emsibank.h"
#include "./ui_emsibank.h"
#include "./ui_bankmangement.h"
EMSIBank::EMSIBank(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EMSIBank)
{
    ui->setupUi(this);
    ptrInscription = new Inscription();
    ptrBankmangement = new bankMangement();
}

EMSIBank::~EMSIBank()
{
    delete ui;
    delete ptrInscription ;
    delete ptrBankmangement;
}

void EMSIBank::on_pushButton_2_clicked()
{
    hide();
    ptrInscription -> show();

}
// In your existing UI (e.g., Inscription class)

void EMSIBank::on_pushButton_clicked() {
    QString username = ui->lineEdit_2->text();
    QString password = ui->lineEdit->text();

    // For testing purposes, create a temporary hard-coded user
    QString hardcodedUsername = "Yassin";
    QString hardcodedPassword = "123456";

    // Check entered credentials against the hardcoded user
    if (username == hardcodedUsername && password == hardcodedPassword) {
        // Successful login
        hide();  // Hide the login UI
        ptrBankmangement -> show();
        // Open the Bank Management UI


    } else {
        // Failed login
        QMessageBox::critical(this, "Error", "Invalid username or password");
    }
}


