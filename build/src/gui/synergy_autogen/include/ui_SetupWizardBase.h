/********************************************************************************
** Form generated from reading UI file 'SetupWizardBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPWIZARDBASE_H
#define UI_SETUPWIZARDBASE_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_SetupWizardBase
{
public:
    QWizardPage *m_pWelcomePage;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_6;
    QFormLayout *formLayout_3;
    QLabel *label_4;
    QComboBox *m_pComboLanguage;
    QSpacerItem *verticalSpacer_7;
    QLabel *label_5;
    QWizardPage *m_pNodePage;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *m_pServerRadioButton;
    QLabel *m_pClientLabel;
    QSpacerItem *verticalSpacer;
    QRadioButton *m_pClientRadioButton;
    QLabel *m_pServerLabel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWizard *SetupWizardBase)
    {
        if (SetupWizardBase->objectName().isEmpty())
            SetupWizardBase->setObjectName(QString::fromUtf8("SetupWizardBase"));
        SetupWizardBase->resize(556, 464);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SetupWizardBase->sizePolicy().hasHeightForWidth());
        SetupWizardBase->setSizePolicy(sizePolicy);
        SetupWizardBase->setMinimumSize(QSize(500, 390));
        m_pWelcomePage = new QWizardPage();
        m_pWelcomePage->setObjectName(QString::fromUtf8("m_pWelcomePage"));
        m_pWelcomePage->setSubTitle(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(m_pWelcomePage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(m_pWelcomePage);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_3->addWidget(label_3);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_6);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_4 = new QLabel(m_pWelcomePage);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(100, 0));
        label_4->setText(QString::fromUtf8("&Language:"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_4);

        m_pComboLanguage = new QComboBox(m_pWelcomePage);
        m_pComboLanguage->setObjectName(QString::fromUtf8("m_pComboLanguage"));
        m_pComboLanguage->setMaximumSize(QSize(200, 16777215));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, m_pComboLanguage);


        verticalLayout_3->addLayout(formLayout_3);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_7);

        label_5 = new QLabel(m_pWelcomePage);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));
        label_5->setWordWrap(true);

        verticalLayout_3->addWidget(label_5);

        SetupWizardBase->addPage(m_pWelcomePage);
        m_pNodePage = new QWizardPage();
        m_pNodePage->setObjectName(QString::fromUtf8("m_pNodePage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(m_pNodePage->sizePolicy().hasHeightForWidth());
        m_pNodePage->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(m_pNodePage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        m_pServerRadioButton = new QRadioButton(m_pNodePage);
        m_pServerRadioButton->setObjectName(QString::fromUtf8("m_pServerRadioButton"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_pServerRadioButton->setFont(font);

        verticalLayout_2->addWidget(m_pServerRadioButton);

        m_pClientLabel = new QLabel(m_pNodePage);
        m_pClientLabel->setObjectName(QString::fromUtf8("m_pClientLabel"));
        m_pClientLabel->setMinimumSize(QSize(0, 0));
        m_pClientLabel->setWordWrap(true);

        verticalLayout_2->addWidget(m_pClientLabel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        m_pClientRadioButton = new QRadioButton(m_pNodePage);
        m_pClientRadioButton->setObjectName(QString::fromUtf8("m_pClientRadioButton"));
        m_pClientRadioButton->setFont(font);

        verticalLayout_2->addWidget(m_pClientRadioButton);

        m_pServerLabel = new QLabel(m_pNodePage);
        m_pServerLabel->setObjectName(QString::fromUtf8("m_pServerLabel"));
        m_pServerLabel->setMinimumSize(QSize(0, 0));
        m_pServerLabel->setWordWrap(true);

        verticalLayout_2->addWidget(m_pServerLabel);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        SetupWizardBase->addPage(m_pNodePage);
#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(m_pComboLanguage);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(m_pComboLanguage, m_pServerRadioButton);
        QWidget::setTabOrder(m_pServerRadioButton, m_pClientRadioButton);

        retranslateUi(SetupWizardBase);

        QMetaObject::connectSlotsByName(SetupWizardBase);
    } // setupUi

    void retranslateUi(QWizard *SetupWizardBase)
    {
        SetupWizardBase->setWindowTitle(QApplication::translate("SetupWizardBase", "Setup Synergy", nullptr));
        m_pWelcomePage->setTitle(QApplication::translate("SetupWizardBase", "Welcome", nullptr));
        label_3->setText(QApplication::translate("SetupWizardBase", "Thanks for installing Synergy!", nullptr));
        label_5->setText(QApplication::translate("SetupWizardBase", "Synergy lets you easily share your mouse and keyboard between multiple computers on your desk, and it's Free and Open Source. Just move your mouse off the edge of one computer's screen on to another. You can even share all of your clipboards. All you need is a network connection. Synergy is cross-platform (works on Windows, Mac OS X and Linux).", nullptr));
        m_pNodePage->setTitle(QApplication::translate("SetupWizardBase", "Server or Client?", nullptr));
        m_pNodePage->setSubTitle(QString());
        m_pServerRadioButton->setText(QApplication::translate("SetupWizardBase", "&Server (share this computer's mouse and keyboard)", nullptr));
        m_pClientLabel->setText(QApplication::translate("SetupWizardBase", "My main mouse and keyboard are connected to this computer. This will allow you to move your mouse over to another computer's screen. There can only be one server in your setup.", nullptr));
        m_pClientRadioButton->setText(QApplication::translate("SetupWizardBase", "&Client (use another computer's mouse and keyboard)", nullptr));
        m_pServerLabel->setText(QApplication::translate("SetupWizardBase", "You have already set up a server. This computer will be controlled using the server's mouse and keyboard. There can be many clients in your setup.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetupWizardBase: public Ui_SetupWizardBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPWIZARDBASE_H
