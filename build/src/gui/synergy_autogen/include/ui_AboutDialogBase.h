/********************************************************************************
** Form generated from reading UI file 'AboutDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOGBASE_H
#define UI_ABOUTDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AboutDialogBase
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QLabel *label_2;
    QSpacerItem *spacer;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *m_pLabelSynergyVersion;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_5;
    QLabel *m_pLabelBuildDate;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *buttonOk;

    void setupUi(QDialog *AboutDialogBase)
    {
        if (AboutDialogBase->objectName().isEmpty())
            AboutDialogBase->setObjectName(QString::fromUtf8("AboutDialogBase"));
        AboutDialogBase->setWindowModality(Qt::ApplicationModal);
        AboutDialogBase->setEnabled(true);
        AboutDialogBase->resize(450, 300);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialogBase->sizePolicy().hasHeightForWidth());
        AboutDialogBase->setSizePolicy(sizePolicy);
        AboutDialogBase->setMinimumSize(QSize(450, 300));
        AboutDialogBase->setMaximumSize(QSize(450, 300));
        AboutDialogBase->setModal(true);
        gridLayout = new QGridLayout(AboutDialogBase);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(AboutDialogBase);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMargin(1);

        gridLayout->addWidget(label_3, 2, 1, 1, 2);

        spacerItem = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(spacerItem, 3, 1, 1, 2);

        label_2 = new QLabel(AboutDialogBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/res/image/about.png")));
        label_2->setMargin(0);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        spacer = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacer, 1, 1, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(AboutDialogBase);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMargin(1);

        horizontalLayout->addWidget(label);

        m_pLabelSynergyVersion = new QLabel(AboutDialogBase);
        m_pLabelSynergyVersion->setObjectName(QString::fromUtf8("m_pLabelSynergyVersion"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(m_pLabelSynergyVersion->sizePolicy().hasHeightForWidth());
        m_pLabelSynergyVersion->setSizePolicy(sizePolicy2);
        m_pLabelSynergyVersion->setMargin(1);

        horizontalLayout->addWidget(m_pLabelSynergyVersion);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_5 = new QLabel(AboutDialogBase);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_2->addWidget(label_5);

        m_pLabelBuildDate = new QLabel(AboutDialogBase);
        m_pLabelBuildDate->setObjectName(QString::fromUtf8("m_pLabelBuildDate"));

        horizontalLayout_2->addWidget(m_pLabelBuildDate);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        buttonOk = new QPushButton(AboutDialogBase);
        buttonOk->setObjectName(QString::fromUtf8("buttonOk"));

        horizontalLayout_2->addWidget(buttonOk);


        gridLayout->addLayout(horizontalLayout_2, 6, 1, 1, 1);


        retranslateUi(AboutDialogBase);
        QObject::connect(buttonOk, SIGNAL(clicked()), AboutDialogBase, SLOT(accept()));

        QMetaObject::connectSlotsByName(AboutDialogBase);
    } // setupUi

    void retranslateUi(QDialog *AboutDialogBase)
    {
        AboutDialogBase->setWindowTitle(QApplication::translate("AboutDialogBase", "About Synergy", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label->setText(QApplication::translate("AboutDialogBase", "Version:", nullptr));
        m_pLabelSynergyVersion->setText(QApplication::translate("AboutDialogBase", "Unknown", nullptr));
        label_5->setText(QApplication::translate("AboutDialogBase", "Build Date: ", nullptr));
        m_pLabelBuildDate->setText(QApplication::translate("AboutDialogBase", "Unknown", nullptr));
        buttonOk->setText(QApplication::translate("AboutDialogBase", "&Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialogBase: public Ui_AboutDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOGBASE_H
