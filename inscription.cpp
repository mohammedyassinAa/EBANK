#include "inscription.h"
#include "ui_inscription.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QSqlDriver>
#include <QSqlTableModel>
#include <QFile>

Inscription::Inscription(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Inscription)
{
    ui->setupUi(this);
}

Inscription::~Inscription()
{
    delete ui;
}

void Inscription::on_Sinscrire_clicked()
{
    QString NumCpt = ui->NumCpt->text();
    QString MDP = ui->MDP->text();
    qDebug() << "NumCpt:" << NumCpt << "Password:" << MDP;

    qDebug() << "NumCpt:" << NumCpt << "Password:" << MDP;

    QSqlDatabase database = QSqlDatabase::addDatabase("QSQLITE" ,"bank");
    database.setDatabaseName("C:/Users/hp/Documents/databases/bank.db");

    if (!QFile::exists("C:/Users/hp/Documents/databases/bank.db")) {
        QMessageBox::critical(this, "Error", "Database file doesn't exist");
        return;
    }else{
        qDebug() << "File exists .";

    }

    if (!database.open()) {
        QMessageBox::critical(this, "Error", "Failed to connect to the database");
        return;
    } else {
        qDebug() << "Database connected successfully.";
    }

    // QSqlQuery query(database);

    // query.prepare("insert into user ([NumCpt], [MDP]) VALUES ( :NumCpt , :MDP )");
    // query.bindValue(":NumCpt", NumCpt);
    // query.bindValue(":MDP", MDP);

    // qDebug() << "Binding values - NumCpt:" << NumCpt << "MDP:" << MDP;

    // if (!query.exec()) {
    //     qDebug() << "Error executing query:" << query.lastError().text();
    // } else {
    //     qDebug() << "Query executed successfully.";
    // }

    database.close();
}
