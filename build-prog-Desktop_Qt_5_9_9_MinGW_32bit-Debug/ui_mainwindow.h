/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *pageAfficher;
    QLabel *label;
    QPushButton *suivant;
    QLabel *label_14;
    QTableWidget *tableWidget;
    QWidget *pageAjouter;
    QLabel *label_2;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_4;
    QPushButton *ajouterButton;
    QPushButton *precedentButton;
    QPushButton *suivant_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *id_a_4;
    QLabel *nom_4;
    QLabel *prenom_4;
    QLabel *email_4;
    QLabel *paiment_4;
    QLineEdit *lineEdit_2;
    QLabel *label_15;
    QLineEdit *lineEdit_3;
    QWidget *pageModifier;
    QLabel *label_3;
    QLabel *label_16;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *paiment_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QComboBox *comboBox_2;
    QPushButton *modifierButton;
    QPushButton *chercherButton;
    QPushButton *suivantButton;
    QPushButton *precedentButton_3;
    QWidget *pageSupprimer;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_9;
    QLabel *label_17;
    QLabel *label_19;
    QPushButton *precedentButton_2;
    QPushButton *supprimerButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 771, 551));
        pageAfficher = new QWidget();
        pageAfficher->setObjectName(QStringLiteral("pageAfficher"));
        label = new QLabel(pageAfficher);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 791, 541));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Users/benay/Downloads/cHJpdmF0ZS9sci9pbWFnZXMvd2Vic2l0ZS8yMDIzLTA4L3Jhd3BpeGVsX29mZmljZV8zMF9hbl9hYnN0cmFjdF92aXN1YWxpemF0aW9uX29mX2FfYmxvY2tjaGFpbl9uZV80ZWIwODVmNC0yODFlLTRkYTMtYjdlMS00MmY1ZTFkMDkyM2VfMS5qcGc.jpg")));
        suivant = new QPushButton(pageAfficher);
        suivant->setObjectName(QStringLiteral("suivant"));
        suivant->setGeometry(QRect(100, 490, 93, 28));
        label_14 = new QLabel(pageAfficher);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(60, 40, 331, 41));
        label_14->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        tableWidget = new QTableWidget(pageAfficher);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(100, 150, 531, 211));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget {\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 10px; /* Coins arrondis */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QTableWidget::item {\n"
"    padding: 8px; /* Espacement interne des cellules */\n"
"    border-bottom: 1px solid #3498db; /* Bordure basse de chaque cellule */\n"
"}\n"
"\n"
"QTableWidget::item:selected {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair lorsqu'une cellule est s\303\251lectionn\303\251e */\n"
"    color: #ecf0f1; /* Couleur du texte lorsqu'une cellule est s\303\251lectionn\303\251e */\n"
"}\n"
"\n"
"QTableWidget::item:hover {\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'une cellule est survol\303\251e */\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: rgba(44, 62, 80, 0.8); /* Fond bleu fonc\303\251"
                        " plus clair pour l'en-t\303\252te */\n"
"    color: #ecf0f1; /* Couleur du texte de l'en-t\303\252te */\n"
"    padding: 5px; /* Espacement interne de l'en-t\303\252te */\n"
"    border: 1px solid #3498db; /* Bordure de l'en-t\303\252te */\n"
"}\n"
"\n"
"QTableWidget::horizontalHeader {\n"
"    border-bottom: 2px solid #3498db; /* Bordure basse de l'en-t\303\252te horizontal */\n"
"}\n"
"\n"
"QTableWidget::verticalHeader {\n"
"    border-right: 2px solid #3498db; /* Bordure droite de l'en-t\303\252te vertical */\n"
"}\n"
"\n"
"QTableWidget::horizontalHeader::section,\n"
"QTableWidget::verticalHeader::section {\n"
"    border-radius: 0; /* Pas de coins arrondis pour les coins des sections d'en-t\303\252te */\n"
"}\n"
"\n"
"QTableWidget QScrollBar:vertical {\n"
"    width: 8px; /* Largeur de la barre de d\303\251filement verticale */\n"
"    background-color: rgba(44, 62, 80, 0.8); /* Fond bleu fonc\303\251 plus clair pour la barre de d\303\251filement verticale */\n"
"}\n"
"\n"
"QTableWidget QScrollBar::handle:"
                        "vertical {\n"
"    background-color: #3498db; /* Couleur de la poign\303\251e de la barre de d\303\251filement verticale */\n"
"    border-radius: 4px; /* Coins arrondis pour la poign\303\251e de la barre de d\303\251filement verticale */\n"
"}\n"
""));
        stackedWidget->addWidget(pageAfficher);
        pageAjouter = new QWidget();
        pageAjouter->setObjectName(QStringLiteral("pageAjouter"));
        label_2 = new QLabel(pageAjouter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-5, 5, 781, 531));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Users/benay/Downloads/cHJpdmF0ZS9sci9pbWFnZXMvd2Vic2l0ZS8yMDIzLTA4L3Jhd3BpeGVsX29mZmljZV8zMF9hbl9hYnN0cmFjdF92aXN1YWxpemF0aW9uX29mX2FfYmxvY2tjaGFpbl9uZV80ZWIwODVmNC0yODFlLTRkYTMtYjdlMS00MmY1ZTFkMDkyM2VfMS5qcGc.jpg")));
        comboBox = new QComboBox(pageAjouter);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(330, 450, 141, 31));
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QComboBox::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QComboBox::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence pour la liste d\303\251roulante */\n"
"    border: 2px solid #3498db; /* Bordure bleue pour la liste d\303\251roulante */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection dans la liste d\303\251roulante */\n"
"    color: #ecf0f1; /* Couleur du texte dans la liste d\303\251roulante */\n"
"}\n"
""));
        lineEdit = new QLineEdit(pageAjouter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(320, 120, 113, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_4 = new QLineEdit(pageAjouter);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(310, 370, 113, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        ajouterButton = new QPushButton(pageAjouter);
        ajouterButton->setObjectName(QStringLiteral("ajouterButton"));
        ajouterButton->setGeometry(QRect(540, 250, 93, 28));
        precedentButton = new QPushButton(pageAjouter);
        precedentButton->setObjectName(QStringLiteral("precedentButton"));
        precedentButton->setGeometry(QRect(560, 480, 93, 28));
        suivant_2 = new QPushButton(pageAjouter);
        suivant_2->setObjectName(QStringLiteral("suivant_2"));
        suivant_2->setGeometry(QRect(660, 480, 93, 28));
        verticalLayoutWidget = new QWidget(pageAjouter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 100, 278, 391));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        id_a_4 = new QLabel(verticalLayoutWidget);
        id_a_4->setObjectName(QStringLiteral("id_a_4"));
        id_a_4->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_4->addWidget(id_a_4);

        nom_4 = new QLabel(verticalLayoutWidget);
        nom_4->setObjectName(QStringLiteral("nom_4"));
        nom_4->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_4->addWidget(nom_4);

        prenom_4 = new QLabel(verticalLayoutWidget);
        prenom_4->setObjectName(QStringLiteral("prenom_4"));
        prenom_4->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_4->addWidget(prenom_4);

        email_4 = new QLabel(verticalLayoutWidget);
        email_4->setObjectName(QStringLiteral("email_4"));
        email_4->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_4->addWidget(email_4);

        paiment_4 = new QLabel(verticalLayoutWidget);
        paiment_4->setObjectName(QStringLiteral("paiment_4"));
        paiment_4->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_4->addWidget(paiment_4);

        lineEdit_2 = new QLineEdit(pageAjouter);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 200, 113, 31));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        label_15 = new QLabel(pageAjouter);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(100, 30, 331, 41));
        label_15->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        lineEdit_3 = new QLineEdit(pageAjouter);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(310, 280, 113, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        stackedWidget->addWidget(pageAjouter);
        pageModifier = new QWidget();
        pageModifier->setObjectName(QStringLiteral("pageModifier"));
        label_3 = new QLabel(pageModifier);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-10, 0, 771, 541));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Users/benay/Downloads/cHJpdmF0ZS9sci9pbWFnZXMvd2Vic2l0ZS8yMDIzLTA4L3Jhd3BpeGVsX29mZmljZV8zMF9hbl9hYnN0cmFjdF92aXN1YWxpemF0aW9uX29mX2FfYmxvY2tjaGFpbl9uZV80ZWIwODVmNC0yODFlLTRkYTMtYjdlMS00MmY1ZTFkMDkyM2VfMS5qcGc.jpg")));
        label_16 = new QLabel(pageModifier);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(100, 50, 331, 41));
        label_16->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        verticalLayoutWidget_2 = new QWidget(pageModifier);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(50, 100, 341, 598));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_10);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_11);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_12);

        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(label_13);

        paiment_2 = new QLabel(verticalLayoutWidget_2);
        paiment_2->setObjectName(QStringLiteral("paiment_2"));
        paiment_2->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));

        verticalLayout_2->addWidget(paiment_2);

        lineEdit_5 = new QLineEdit(pageModifier);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(350, 120, 113, 31));
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_6 = new QLineEdit(pageModifier);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(350, 190, 113, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_7 = new QLineEdit(pageModifier);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(360, 270, 113, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        lineEdit_8 = new QLineEdit(pageModifier);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(350, 350, 113, 31));
        lineEdit_8->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        comboBox_2 = new QComboBox(pageModifier);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(350, 450, 141, 31));
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QComboBox::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QComboBox::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence pour la liste d\303\251roulante */\n"
"    border: 2px solid #3498db; /* Bordure bleue pour la liste d\303\251roulante */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection dans la liste d\303\251roulante */\n"
"    color: #ecf0f1; /* Couleur du texte dans la liste d\303\251roulante */\n"
"}\n"
""));
        modifierButton = new QPushButton(pageModifier);
        modifierButton->setObjectName(QStringLiteral("modifierButton"));
        modifierButton->setGeometry(QRect(620, 310, 93, 28));
        chercherButton = new QPushButton(pageModifier);
        chercherButton->setObjectName(QStringLiteral("chercherButton"));
        chercherButton->setGeometry(QRect(540, 130, 93, 28));
        suivantButton = new QPushButton(pageModifier);
        suivantButton->setObjectName(QStringLiteral("suivantButton"));
        suivantButton->setGeometry(QRect(670, 500, 93, 28));
        precedentButton_3 = new QPushButton(pageModifier);
        precedentButton_3->setObjectName(QStringLiteral("precedentButton_3"));
        precedentButton_3->setGeometry(QRect(570, 500, 93, 28));
        stackedWidget->addWidget(pageModifier);
        pageSupprimer = new QWidget();
        pageSupprimer->setObjectName(QStringLiteral("pageSupprimer"));
        label_4 = new QLabel(pageSupprimer);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 0, 761, 531));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/cHJpdmF0ZS9sci9pbWFnZXMvd2Vic2l0ZS8yMDIzLTA4L3Jhd3BpeGVsX29mZmljZV8zMF9hbl9hYnN0cmFjdF92aXN1YWxpemF0aW9uX29mX2FfYmxvY2tjaGFpbl9uZV80ZWIwODVmNC0yODFlLTRkYTMtYjdlMS00MmY1ZTFkMDkyM2VfMS5qcGc.jpg")));
        label_5 = new QLabel(pageSupprimer);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(-5, -5, 801, 551));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../Users/benay/Downloads/cHJpdmF0ZS9sci9pbWFnZXMvd2Vic2l0ZS8yMDIzLTA4L3Jhd3BpeGVsX29mZmljZV8zMF9hbl9hYnN0cmFjdF92aXN1YWxpemF0aW9uX29mX2FfYmxvY2tjaGFpbl9uZV80ZWIwODVmNC0yODFlLTRkYTMtYjdlMS00MmY1ZTFkMDkyM2VfMS5qcGc.jpg")));
        label_5->setScaledContents(true);
        lineEdit_9 = new QLineEdit(pageSupprimer);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(140, 160, 113, 31));
        lineEdit_9->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    border: 2px solid #3498db; /* Bordure bleue */\n"
"    border-radius: 15px; /* Coins arrondis plus prononc\303\251s */\n"
"    padding: 5px 15px; /* Espacement interne */\n"
"    background-color: rgba(44, 62, 80, 0.5); /* Fond bleu fonc\303\251 avec plus de transparence */\n"
"    selection-background-color: #2980b9; /* Couleur de fond de la s\303\251lection */\n"
"    color: #ecf0f1; /* Couleur du texte */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #2980b9; /* Bordure bleue plus fonc\303\251e pendant le focus */\n"
"    color: #ecf0f1; /* Couleur du texte pendant le focus */\n"
"    outline: none; /* Supprimer l'effet de soulignement bleu sur le focus */\n"
"    box-shadow: 0 0 10px rgba(41, 128, 185, 0.7); /* L\303\251g\303\250re ombre lorsqu'en focus */\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"    background-color: rgba(52, 73, 94, 0.7); /* Fond bleu fonc\303\251 plus clair avec plus de transparence lorsqu'il est survol\303\251 */\n"
"}\n"
"\n"
"QLineEdit::disabled {\n"
"  "
                        "  color: #bdc3c7; /* Couleur du texte lorsque d\303\251sactiv\303\251 */\n"
"    background-color: rgba(52, 73, 94, 0.4); /* Fond bleu fonc\303\251 avec plus de transparence lorsqu'il est d\303\251sactiv\303\251 */\n"
"    border: 2px solid #566573; /* Bordure gris fonc\303\251 lorsqu'il est d\303\251sactiv\303\251 */\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #bdc3c7; /* Couleur du texte de l'espace r\303\251serv\303\251 */\n"
"}\n"
""));
        label_17 = new QLabel(pageSupprimer);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(170, 60, 411, 41));
        label_17->setStyleSheet(QLatin1String("font-size: 27pt;\n"
"color: rgb(255, 170, 0);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        label_19 = new QLabel(pageSupprimer);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 140, 276, 73));
        label_19->setStyleSheet(QLatin1String("font-size: 20pt;\n"
"color: rgb(255, 255, 255);\n"
"font-weight: bold;\n"
"font-family: \"MS Serif\";\n"
""));
        precedentButton_2 = new QPushButton(pageSupprimer);
        precedentButton_2->setObjectName(QStringLiteral("precedentButton_2"));
        precedentButton_2->setGeometry(QRect(660, 500, 93, 28));
        supprimerButton = new QPushButton(pageSupprimer);
        supprimerButton->setObjectName(QStringLiteral("supprimerButton"));
        supprimerButton->setGeometry(QRect(230, 250, 93, 28));
        stackedWidget->addWidget(pageSupprimer);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        suivant->setText(QApplication::translate("MainWindow", "suivant", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "afficher un abonne:", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "paiment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        label_2->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "carte bancaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cheque", Q_NULLPTR)
         << QApplication::translate("MainWindow", "espece", Q_NULLPTR)
        );
        ajouterButton->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        precedentButton->setText(QApplication::translate("MainWindow", "pr\303\251c\303\251dent", Q_NULLPTR));
        suivant_2->setText(QApplication::translate("MainWindow", "suivant", Q_NULLPTR));
        id_a_4->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        nom_4->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        prenom_4->setText(QApplication::translate("MainWindow", "prenom:", Q_NULLPTR));
        email_4->setText(QApplication::translate("MainWindow", "adresse email:", Q_NULLPTR));
        paiment_4->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "ajouter un abonne:", Q_NULLPTR));
        label_3->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "modifier un abonne:", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "nom:", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "prenom:", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "adresse email:", Q_NULLPTR));
        paiment_2->setText(QApplication::translate("MainWindow", "methode de paiment", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "carte bancaire", Q_NULLPTR)
         << QApplication::translate("MainWindow", "cheque", Q_NULLPTR)
         << QApplication::translate("MainWindow", "espece", Q_NULLPTR)
        );
        modifierButton->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        chercherButton->setText(QApplication::translate("MainWindow", "chercher", Q_NULLPTR));
        suivantButton->setText(QApplication::translate("MainWindow", "suivant", Q_NULLPTR));
        precedentButton_3->setText(QApplication::translate("MainWindow", "pr\303\251c\303\251dent", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        label_17->setText(QApplication::translate("MainWindow", "supprimer un abonne:", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "id_a:", Q_NULLPTR));
        precedentButton_2->setText(QApplication::translate("MainWindow", "pr\303\251c\303\251dent", Q_NULLPTR));
        supprimerButton->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
