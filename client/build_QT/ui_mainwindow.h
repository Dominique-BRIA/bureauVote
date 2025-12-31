/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QStackedWidget *stackedWidget;
    QWidget *Connexion;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_8;
    QFormLayout *formLayout;
    QFrame *frame_2;
    QLabel *label;
    QLineEdit *idcardEdit;
    QLabel *label_9;
    QLabel *label_2;
    QLineEdit *nomEdit;
    QLabel *label_10;
    QLabel *label_3;
    QLineEdit *prenomEdit;
    QLabel *label_11;
    QLabel *label_4;
    QLineEdit *lineBureau;
    QLabel *label_12;
    QPushButton *ConfirmButton;
    QWidget *Vote;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_bienvenue;
    QLabel *label_14;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_30;
    QLabel *label_27;
    QLabel *label_19;
    QLabel *label_26;
    QLabel *label_18;
    QLabel *label_24;
    QLabel *label_17;
    QLabel *label_23;
    QLabel *label_28;
    QRadioButton *C7;
    QLabel *label_16;
    QLabel *label_29;
    QLabel *label_15;
    QLabel *label_21;
    QRadioButton *C4;
    QRadioButton *C3;
    QLabel *label_72;
    QRadioButton *C6;
    QLabel *label_25;
    QLabel *label_20;
    QLabel *label_22;
    QRadioButton *C5;
    QRadioButton *C2;
    QRadioButton *C1;
    QPushButton *buttonVote;
    QWidget *Administrateur;
    QGridLayout *gridLayout_5;
    QVBoxLayout *verticalLayout_4;
    QLabel *bienvenueAdmin;
    QLabel *label_32;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_4;
    QLabel *voix4;
    QLabel *label_51;
    QLabel *label_56;
    QLabel *label_36;
    QLabel *label_45;
    QLabel *label_34;
    QLabel *label_47;
    QLabel *label_62;
    QLabel *label_39;
    QLabel *label_64;
    QLabel *voix1;
    QLabel *voix6;
    QLabel *label_42;
    QLabel *label_54;
    QLabel *label_46;
    QLabel *label_49;
    QLabel *voix2;
    QLabel *label_52;
    QLabel *label_70;
    QLabel *label_48;
    QLabel *label_60;
    QLabel *label_68;
    QLabel *label_43;
    QLabel *label_38;
    QLabel *label_41;
    QLabel *label_58;
    QLabel *label_37;
    QLabel *label_44;
    QLabel *label_53;
    QLabel *voix3;
    QLabel *label_55;
    QLabel *label_33;
    QLabel *label_57;
    QLabel *voix7;
    QLabel *label_66;
    QLabel *label_35;
    QLabel *label_40;
    QLabel *voix5;
    QLabel *label_50;
    QPushButton *buttonDeconnexion;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(771, 700);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::SecurityHigh));
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(640, 640));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setStyleSheet(QString::fromUtf8("font: 700 45px \"Latin Modern Math\";\n"
""));
        label_5->setTextFormat(Qt::TextFormat::PlainText);
        label_5->setScaledContents(false);
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_3->addWidget(label_5);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        Connexion = new QWidget();
        Connexion->setObjectName("Connexion");
        Connexion->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"	border: 2px solid #BBBBBB;\n"
"	border-radius: 8px;\n"
"	padding: 10px;\n"
"	background-color: #D8D8D8;\n"
"	color: black;\n"
"};\n"
"QWidget{\n"
"color:#333333;\n"
"background-color: #f7f7f7;\n"
"};\n"
"QLabel {\n"
"color : #333333;\n"
"font-size: 14px;\n"
"};\n"
""));
        gridLayout_2 = new QGridLayout(Connexion);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(9);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        verticalLayout->setContentsMargins(-1, -1, 0, 0);
        label_6 = new QLabel(Connexion);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: italic 18pt \"Latin Modern Mono\";"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label_6);

        label_8 = new QLabel(Connexion);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        formLayout->setLabelAlignment(Qt::AlignmentFlag::AlignLeading);
        formLayout->setFormAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        formLayout->setContentsMargins(0, 0, 62, 19);
        frame_2 = new QFrame(Connexion);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::NoFrame);

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, frame_2);

        label = new QLabel(Connexion);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font: 500 24px \"TeX Gyre Chorus\";"));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, label);

        idcardEdit = new QLineEdit(Connexion);
        idcardEdit->setObjectName("idcardEdit");
        idcardEdit->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(1, QFormLayout::ItemRole::FieldRole, idcardEdit);

        label_9 = new QLabel(Connexion);
        label_9->setObjectName("label_9");

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, label_9);

        label_2 = new QLabel(Connexion);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font: 500 24px \"TeX Gyre Chorus\";"));

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, label_2);

        nomEdit = new QLineEdit(Connexion);
        nomEdit->setObjectName("nomEdit");

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, nomEdit);

        label_10 = new QLabel(Connexion);
        label_10->setObjectName("label_10");

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, label_10);

        label_3 = new QLabel(Connexion);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 500 24px \"TeX Gyre Chorus\";"));

        formLayout->setWidget(5, QFormLayout::ItemRole::LabelRole, label_3);

        prenomEdit = new QLineEdit(Connexion);
        prenomEdit->setObjectName("prenomEdit");

        formLayout->setWidget(5, QFormLayout::ItemRole::FieldRole, prenomEdit);

        label_11 = new QLabel(Connexion);
        label_11->setObjectName("label_11");

        formLayout->setWidget(6, QFormLayout::ItemRole::LabelRole, label_11);

        label_4 = new QLabel(Connexion);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("font: 500 24px \"TeX Gyre Chorus\";"));

        formLayout->setWidget(8, QFormLayout::ItemRole::LabelRole, label_4);

        lineBureau = new QLineEdit(Connexion);
        lineBureau->setObjectName("lineBureau");
        lineBureau->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::WindowText, brush);
        QBrush brush1(QColor(216, 216, 216, 255));
        brush1.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush1);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::BrushStyle::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::WindowText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Text, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::ButtonText, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush1);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::PlaceholderText, brush2);
#endif
        lineBureau->setPalette(palette);
        lineBureau->setContextMenuPolicy(Qt::ContextMenuPolicy::NoContextMenu);

        formLayout->setWidget(8, QFormLayout::ItemRole::FieldRole, lineBureau);

        label_12 = new QLabel(Connexion);
        label_12->setObjectName("label_12");

        formLayout->setWidget(9, QFormLayout::ItemRole::FieldRole, label_12);

        ConfirmButton = new QPushButton(Connexion);
        ConfirmButton->setObjectName("ConfirmButton");
        ConfirmButton->setEnabled(true);
        ConfirmButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ConfirmButton->setStyleSheet(QString::fromUtf8("background: #0056b3;\n"
"color: white;\n"
"border: none;\n"
"border-radius: 12px;\n"
"padding : 12px 24px;\n"
"font-weight: bold;\n"
"font-size: 16px;\n"
""));
        ConfirmButton->setCheckable(false);

        formLayout->setWidget(10, QFormLayout::ItemRole::FieldRole, ConfirmButton);


        verticalLayout->addLayout(formLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 1);

        stackedWidget->addWidget(Connexion);
        Vote = new QWidget();
        Vote->setObjectName("Vote");
        gridLayout_3 = new QGridLayout(Vote);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_bienvenue = new QLabel(Vote);
        label_bienvenue->setObjectName("label_bienvenue");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_bienvenue->sizePolicy().hasHeightForWidth());
        label_bienvenue->setSizePolicy(sizePolicy1);
        label_bienvenue->setStyleSheet(QString::fromUtf8("font: italic 18pt \"Latin Modern Mono\";"));
        label_bienvenue->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_bienvenue);

        label_14 = new QLabel(Vote);
        label_14->setObjectName("label_14");
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setStyleSheet(QString::fromUtf8("font: 18pt \"Latin Modern Math\";"));
        label_14->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_2->addWidget(label_14);

        scrollArea = new QScrollArea(Vote);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setEnabled(true);
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1630, 388));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setObjectName("gridLayout");
        label_30 = new QLabel(scrollAreaWidgetContents);
        label_30->setObjectName("label_30");
        label_30->setMaximumSize(QSize(237, 325));
        label_30->setPixmap(QPixmap(QString::fromUtf8(":/images/Julio.jpg")));
        label_30->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_30, 2, 15, 1, 1);

        label_27 = new QLabel(scrollAreaWidgetContents);
        label_27->setObjectName("label_27");

        gridLayout->addWidget(label_27, 2, 12, 1, 1);

        label_19 = new QLabel(scrollAreaWidgetContents);
        label_19->setObjectName("label_19");
        label_19->setMaximumSize(QSize(50, 325));

        gridLayout->addWidget(label_19, 2, 8, 1, 1);

        label_26 = new QLabel(scrollAreaWidgetContents);
        label_26->setObjectName("label_26");

        gridLayout->addWidget(label_26, 2, 17, 1, 1);

        label_18 = new QLabel(scrollAreaWidgetContents);
        label_18->setObjectName("label_18");
        label_18->setMaximumSize(QSize(237, 325));
        label_18->setPixmap(QPixmap(QString::fromUtf8(":/images/Assoumou.jpg")));
        label_18->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_18, 2, 9, 1, 1);

        label_24 = new QLabel(scrollAreaWidgetContents);
        label_24->setObjectName("label_24");

        gridLayout->addWidget(label_24, 2, 16, 1, 1);

        label_17 = new QLabel(scrollAreaWidgetContents);
        label_17->setObjectName("label_17");
        label_17->setMaximumSize(QSize(25, 16777215));

        gridLayout->addWidget(label_17, 2, 4, 1, 1);

        label_23 = new QLabel(scrollAreaWidgetContents);
        label_23->setObjectName("label_23");
        label_23->setMaximumSize(QSize(237, 325));
        label_23->setPixmap(QPixmap(QString::fromUtf8(":/images/BRIA.jpg")));
        label_23->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_23, 2, 3, 1, 1);

        label_28 = new QLabel(scrollAreaWidgetContents);
        label_28->setObjectName("label_28");
        label_28->setMaximumSize(QSize(237, 325));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/images/Mael.jpg")));
        label_28->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_28, 2, 13, 1, 1);

        C7 = new QRadioButton(scrollAreaWidgetContents);
        C7->setObjectName("C7");
        C7->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C7, 3, 18, 1, 1);

        label_16 = new QLabel(scrollAreaWidgetContents);
        label_16->setObjectName("label_16");
        label_16->setMaximumSize(QSize(237, 325));
        label_16->setPixmap(QPixmap(QString::fromUtf8("Candidat/Bokali.jpg")));

        gridLayout->addWidget(label_16, 2, 1, 1, 1);

        label_29 = new QLabel(scrollAreaWidgetContents);
        label_29->setObjectName("label_29");

        gridLayout->addWidget(label_29, 2, 14, 1, 1);

        label_15 = new QLabel(scrollAreaWidgetContents);
        label_15->setObjectName("label_15");
        sizePolicy.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy);
        label_15->setMinimumSize(QSize(100, 100));
        label_15->setMaximumSize(QSize(237, 325));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/images/Bokali.jpg")));
        label_15->setScaledContents(false);
        label_15->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_15, 2, 5, 1, 1);

        label_21 = new QLabel(scrollAreaWidgetContents);
        label_21->setObjectName("label_21");

        gridLayout->addWidget(label_21, 2, 10, 1, 1);

        C4 = new QRadioButton(scrollAreaWidgetContents);
        C4->setObjectName("C4");
        C4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        C4->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C4, 3, 11, 1, 1);

        C3 = new QRadioButton(scrollAreaWidgetContents);
        C3->setObjectName("C3");
        C3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        C3->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C3, 3, 9, 1, 1);

        label_72 = new QLabel(scrollAreaWidgetContents);
        label_72->setObjectName("label_72");
        label_72->setMinimumSize(QSize(237, 325));
        label_72->setMaximumSize(QSize(237, 325));
        label_72->setPixmap(QPixmap(QString::fromUtf8(":/images/Perez.jpg")));
        label_72->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_72, 2, 18, 1, 1);

        C6 = new QRadioButton(scrollAreaWidgetContents);
        C6->setObjectName("C6");
        C6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        C6->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C6, 3, 15, 1, 1);

        label_25 = new QLabel(scrollAreaWidgetContents);
        label_25->setObjectName("label_25");

        gridLayout->addWidget(label_25, 2, 19, 1, 1);

        label_20 = new QLabel(scrollAreaWidgetContents);
        label_20->setObjectName("label_20");
        label_20->setMaximumSize(QSize(237, 325));
        label_20->setPixmap(QPixmap(QString::fromUtf8(":/images/Azambou.jpg")));
        label_20->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_20, 2, 11, 1, 1);

        label_22 = new QLabel(scrollAreaWidgetContents);
        label_22->setObjectName("label_22");

        gridLayout->addWidget(label_22, 2, 7, 1, 1);

        C5 = new QRadioButton(scrollAreaWidgetContents);
        C5->setObjectName("C5");
        C5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        C5->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C5, 3, 13, 1, 1);

        C2 = new QRadioButton(scrollAreaWidgetContents);
        C2->setObjectName("C2");
        C2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        C2->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C2, 3, 5, 1, 1);

        C1 = new QRadioButton(scrollAreaWidgetContents);
        C1->setObjectName("C1");
        QFont font;
        font.setFamilies({QString::fromUtf8("Latin Modern Mono Caps")});
        font.setItalic(false);
        C1->setFont(font);
        C1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        C1->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        C1->setAutoFillBackground(false);
        C1->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));

        gridLayout->addWidget(C1, 3, 3, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        buttonVote = new QPushButton(Vote);
        buttonVote->setObjectName("buttonVote");
        buttonVote->setEnabled(true);
        buttonVote->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        buttonVote->setStyleSheet(QString::fromUtf8("background: #0056b3;\n"
"color: white;\n"
"border: none;\n"
"border-radius: 12px;\n"
"padding : 12px 24px;\n"
"font-weight: bold;\n"
"font-size: 16px;\n"
""));

        verticalLayout_2->addWidget(buttonVote);


        gridLayout_3->addLayout(verticalLayout_2, 0, 1, 1, 1);

        stackedWidget->addWidget(Vote);
        Administrateur = new QWidget();
        Administrateur->setObjectName("Administrateur");
        gridLayout_5 = new QGridLayout(Administrateur);
        gridLayout_5->setObjectName("gridLayout_5");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        bienvenueAdmin = new QLabel(Administrateur);
        bienvenueAdmin->setObjectName("bienvenueAdmin");
        sizePolicy1.setHeightForWidth(bienvenueAdmin->sizePolicy().hasHeightForWidth());
        bienvenueAdmin->setSizePolicy(sizePolicy1);
        bienvenueAdmin->setStyleSheet(QString::fromUtf8("font: italic 18pt \"Latin Modern Mono\";"));
        bienvenueAdmin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(bienvenueAdmin);

        label_32 = new QLabel(Administrateur);
        label_32->setObjectName("label_32");
        sizePolicy1.setHeightForWidth(label_32->sizePolicy().hasHeightForWidth());
        label_32->setSizePolicy(sizePolicy1);
        label_32->setStyleSheet(QString::fromUtf8("font: 18pt \"Latin Modern Math\";"));
        label_32->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_4->addWidget(label_32);

        scrollArea_2 = new QScrollArea(Administrateur);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setEnabled(true);
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 1601, 430));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_4->setObjectName("gridLayout_4");
        voix4 = new QLabel(scrollAreaWidgetContents_2);
        voix4->setObjectName("voix4");
        voix4->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix4, 5, 12, 1, 1);

        label_51 = new QLabel(scrollAreaWidgetContents_2);
        label_51->setObjectName("label_51");
        label_51->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_51->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_51, 3, 10, 1, 1);

        label_56 = new QLabel(scrollAreaWidgetContents_2);
        label_56->setObjectName("label_56");
        label_56->setMinimumSize(QSize(237, 325));
        label_56->setMaximumSize(QSize(237, 325));
        label_56->setPixmap(QPixmap(QString::fromUtf8(":/images/Perez.jpg")));
        label_56->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_56, 2, 18, 1, 1);

        label_36 = new QLabel(scrollAreaWidgetContents_2);
        label_36->setObjectName("label_36");

        gridLayout_4->addWidget(label_36, 2, 8, 1, 1);

        label_45 = new QLabel(scrollAreaWidgetContents_2);
        label_45->setObjectName("label_45");

        gridLayout_4->addWidget(label_45, 2, 20, 1, 1);

        label_34 = new QLabel(scrollAreaWidgetContents_2);
        label_34->setObjectName("label_34");
        label_34->setMaximumSize(QSize(237, 325));
        label_34->setPixmap(QPixmap(QString::fromUtf8(":/images/Mael.jpg")));
        label_34->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_34, 2, 14, 1, 1);

        label_47 = new QLabel(scrollAreaWidgetContents_2);
        label_47->setObjectName("label_47");
        label_47->setMaximumSize(QSize(237, 325));
        label_47->setPixmap(QPixmap(QString::fromUtf8(":/images/Azambou.jpg")));
        label_47->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_47, 2, 12, 1, 1);

        label_62 = new QLabel(scrollAreaWidgetContents_2);
        label_62->setObjectName("label_62");

        gridLayout_4->addWidget(label_62, 4, 10, 1, 1);

        label_39 = new QLabel(scrollAreaWidgetContents_2);
        label_39->setObjectName("label_39");
        sizePolicy.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy);
        label_39->setMinimumSize(QSize(237, 325));
        label_39->setMaximumSize(QSize(237, 325));
        label_39->setPixmap(QPixmap(QString::fromUtf8(":/images/Bokali.jpg")));
        label_39->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_39, 2, 6, 1, 1);

        label_64 = new QLabel(scrollAreaWidgetContents_2);
        label_64->setObjectName("label_64");

        gridLayout_4->addWidget(label_64, 4, 12, 1, 1);

        voix1 = new QLabel(scrollAreaWidgetContents_2);
        voix1->setObjectName("voix1");
        voix1->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix1, 5, 2, 1, 1);

        voix6 = new QLabel(scrollAreaWidgetContents_2);
        voix6->setObjectName("voix6");
        voix6->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix6, 5, 16, 1, 1);

        label_42 = new QLabel(scrollAreaWidgetContents_2);
        label_42->setObjectName("label_42");
        label_42->setMaximumSize(QSize(25, 16777215));

        gridLayout_4->addWidget(label_42, 2, 5, 1, 1);

        label_54 = new QLabel(scrollAreaWidgetContents_2);
        label_54->setObjectName("label_54");
        label_54->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_54->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_54, 3, 16, 1, 1);

        label_46 = new QLabel(scrollAreaWidgetContents_2);
        label_46->setObjectName("label_46");
        label_46->setMaximumSize(QSize(50, 325));

        gridLayout_4->addWidget(label_46, 2, 9, 1, 1);

        label_49 = new QLabel(scrollAreaWidgetContents_2);
        label_49->setObjectName("label_49");
        label_49->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_49->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_49, 3, 6, 1, 1);

        voix2 = new QLabel(scrollAreaWidgetContents_2);
        voix2->setObjectName("voix2");
        voix2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix2, 5, 6, 1, 1);

        label_52 = new QLabel(scrollAreaWidgetContents_2);
        label_52->setObjectName("label_52");
        label_52->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_52->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_52, 3, 12, 1, 1);

        label_70 = new QLabel(scrollAreaWidgetContents_2);
        label_70->setObjectName("label_70");

        gridLayout_4->addWidget(label_70, 4, 18, 1, 1);

        label_48 = new QLabel(scrollAreaWidgetContents_2);
        label_48->setObjectName("label_48");

        gridLayout_4->addWidget(label_48, 2, 19, 1, 1);

        label_60 = new QLabel(scrollAreaWidgetContents_2);
        label_60->setObjectName("label_60");

        gridLayout_4->addWidget(label_60, 4, 6, 1, 1);

        label_68 = new QLabel(scrollAreaWidgetContents_2);
        label_68->setObjectName("label_68");

        gridLayout_4->addWidget(label_68, 4, 16, 1, 1);

        label_43 = new QLabel(scrollAreaWidgetContents_2);
        label_43->setObjectName("label_43");

        gridLayout_4->addWidget(label_43, 2, 4, 1, 1);

        label_38 = new QLabel(scrollAreaWidgetContents_2);
        label_38->setObjectName("label_38");

        gridLayout_4->addWidget(label_38, 2, 13, 1, 1);

        label_41 = new QLabel(scrollAreaWidgetContents_2);
        label_41->setObjectName("label_41");
        label_41->setMaximumSize(QSize(237, 325));
        label_41->setPixmap(QPixmap(QString::fromUtf8(":/images/Julio.jpg")));
        label_41->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_41, 2, 16, 1, 1);

        label_58 = new QLabel(scrollAreaWidgetContents_2);
        label_58->setObjectName("label_58");

        gridLayout_4->addWidget(label_58, 4, 2, 1, 1);

        label_37 = new QLabel(scrollAreaWidgetContents_2);
        label_37->setObjectName("label_37");
        label_37->setMinimumSize(QSize(237, 325));
        label_37->setMaximumSize(QSize(237, 325));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/images/BRIA.jpg")));
        label_37->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_37, 2, 2, 1, 1);

        label_44 = new QLabel(scrollAreaWidgetContents_2);
        label_44->setObjectName("label_44");

        gridLayout_4->addWidget(label_44, 2, 21, 1, 1);

        label_53 = new QLabel(scrollAreaWidgetContents_2);
        label_53->setObjectName("label_53");
        label_53->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_53->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_53, 3, 14, 1, 1);

        voix3 = new QLabel(scrollAreaWidgetContents_2);
        voix3->setObjectName("voix3");
        voix3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix3, 5, 10, 1, 1);

        label_55 = new QLabel(scrollAreaWidgetContents_2);
        label_55->setObjectName("label_55");

        gridLayout_4->addWidget(label_55, 2, 17, 1, 1);

        label_33 = new QLabel(scrollAreaWidgetContents_2);
        label_33->setObjectName("label_33");

        gridLayout_4->addWidget(label_33, 2, 11, 1, 1);

        label_57 = new QLabel(scrollAreaWidgetContents_2);
        label_57->setObjectName("label_57");
        label_57->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_57->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_57, 3, 18, 1, 1);

        voix7 = new QLabel(scrollAreaWidgetContents_2);
        voix7->setObjectName("voix7");
        voix7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix7, 5, 18, 1, 1);

        label_66 = new QLabel(scrollAreaWidgetContents_2);
        label_66->setObjectName("label_66");

        gridLayout_4->addWidget(label_66, 4, 14, 1, 1);

        label_35 = new QLabel(scrollAreaWidgetContents_2);
        label_35->setObjectName("label_35");
        label_35->setMaximumSize(QSize(237, 325));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/images/Assoumou.jpg")));
        label_35->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_35, 2, 10, 1, 1);

        label_40 = new QLabel(scrollAreaWidgetContents_2);
        label_40->setObjectName("label_40");

        gridLayout_4->addWidget(label_40, 2, 15, 1, 1);

        voix5 = new QLabel(scrollAreaWidgetContents_2);
        voix5->setObjectName("voix5");
        voix5->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(voix5, 5, 14, 1, 1);

        label_50 = new QLabel(scrollAreaWidgetContents_2);
        label_50->setObjectName("label_50");
        label_50->setStyleSheet(QString::fromUtf8("font: 75 25px \"Latin Modern Mono Caps\";"));
        label_50->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout_4->addWidget(label_50, 3, 2, 1, 1);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(scrollArea_2);


        gridLayout_5->addLayout(verticalLayout_4, 0, 0, 1, 1);

        buttonDeconnexion = new QPushButton(Administrateur);
        buttonDeconnexion->setObjectName("buttonDeconnexion");
        buttonDeconnexion->setStyleSheet(QString::fromUtf8("font: 20pt \"C059\" ;\n"
"color: red;\n"
"background-color: rgb(38, 162, 105);"));

        gridLayout_5->addWidget(buttonDeconnexion, 1, 0, 1, 1);

        stackedWidget->addWidget(Administrateur);

        verticalLayout_3->addWidget(stackedWidget);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        label_7->setStyleSheet(QString::fromUtf8("font: 11pt \"Latin Modern Math\";"));

        verticalLayout_3->addWidget(label_7);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 771, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Ecclesia Vote", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "E C C L E S I A   V O T E", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "C o n n e c t e z - v o u s", nullptr));
        label_8->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "    Idcard :", nullptr));
        label_9->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "    Nom :", nullptr));
        label_10->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "    Prenom :", nullptr));
        prenomEdit->setText(QString());
        label_11->setText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "    Bureau de vote : ", nullptr));
        lineBureau->setText(QString());
        label_12->setText(QString());
        ConfirmButton->setText(QCoreApplication::translate("MainWindow", "Valider", nullptr));
        label_bienvenue->setText(QCoreApplication::translate("MainWindow", "Bienvenue Monsieur/Madame", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Faites votre choix en toute confiance", nullptr));
        label_30->setText(QString());
        label_27->setText(QString());
        label_19->setText(QString());
        label_26->setText(QString());
        label_18->setText(QString());
        label_24->setText(QString());
        label_17->setText(QString());
        label_23->setText(QString());
        label_28->setText(QString());
        C7->setText(QCoreApplication::translate("MainWindow", "PEREZ", nullptr));
        label_16->setText(QString());
        label_29->setText(QString());
        label_15->setText(QString());
        label_21->setText(QString());
        C4->setText(QCoreApplication::translate("MainWindow", "AZAMBOU Emeric", nullptr));
        C3->setText(QCoreApplication::translate("MainWindow", "ASSOUMOU Teddy", nullptr));
        label_72->setText(QString());
        C6->setText(QCoreApplication::translate("MainWindow", "BOUEGNE JULIO", nullptr));
        label_25->setText(QString());
        label_20->setText(QString());
        label_22->setText(QString());
        C5->setText(QCoreApplication::translate("MainWindow", "DADJI Mael", nullptr));
        C2->setText(QCoreApplication::translate("MainWindow", "BOKALI Fabrice", nullptr));
        C1->setText(QCoreApplication::translate("MainWindow", "BRIA Dominique", nullptr));
        buttonVote->setText(QCoreApplication::translate("MainWindow", "Je vote", nullptr));
        bienvenueAdmin->setText(QCoreApplication::translate("MainWindow", "Bienvenue Monsieur/Madame", nullptr));
        label_32->setText(QCoreApplication::translate("MainWindow", "Les statistiques de l'election", nullptr));
        voix4->setText(QCoreApplication::translate("MainWindow", "VOIX: 0", nullptr));
        label_51->setText(QCoreApplication::translate("MainWindow", "ASSOUMOU Teddy", nullptr));
        label_56->setText(QString());
        label_36->setText(QString());
        label_45->setText(QString());
        label_34->setText(QString());
        label_47->setText(QString());
        label_62->setText(QString());
        label_39->setText(QString());
        label_64->setText(QString());
        voix1->setText(QCoreApplication::translate("MainWindow", "VOIX : 0", nullptr));
        voix6->setText(QCoreApplication::translate("MainWindow", "VOIX: 0", nullptr));
        label_42->setText(QString());
        label_54->setText(QCoreApplication::translate("MainWindow", "BOUEGNE JULIO", nullptr));
        label_46->setText(QString());
        label_49->setText(QCoreApplication::translate("MainWindow", "BOKALI Fabrice", nullptr));
        voix2->setText(QCoreApplication::translate("MainWindow", "VOIX : 0", nullptr));
        label_52->setText(QCoreApplication::translate("MainWindow", "AZAMBOU Emeric", nullptr));
        label_70->setText(QString());
        label_48->setText(QString());
        label_60->setText(QString());
        label_68->setText(QString());
        label_43->setText(QString());
        label_38->setText(QString());
        label_41->setText(QString());
        label_58->setText(QString());
        label_37->setText(QString());
        label_44->setText(QString());
        label_53->setText(QCoreApplication::translate("MainWindow", "DADJI Mael", nullptr));
        voix3->setText(QCoreApplication::translate("MainWindow", "VOIX: 0", nullptr));
        label_55->setText(QString());
        label_33->setText(QString());
        label_57->setText(QCoreApplication::translate("MainWindow", "PEREZ", nullptr));
        voix7->setText(QCoreApplication::translate("MainWindow", "VOIX: 0", nullptr));
        label_66->setText(QString());
        label_35->setText(QString());
        label_40->setText(QString());
        voix5->setText(QCoreApplication::translate("MainWindow", "VOIX: 0", nullptr));
        label_50->setText(QCoreApplication::translate("MainWindow", "BRIA Dominique", nullptr));
        buttonDeconnexion->setText(QCoreApplication::translate("MainWindow", "D\303\251connexion", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"right\">Email de l'agence : d.bria00@gmail.com</p><p align=\"right\">site de l'agence: <a href=\"www.polytechnique.cm\"><span style=\" text-decoration: underline; color:#2777ff;\">www.polytechnique.cm</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
