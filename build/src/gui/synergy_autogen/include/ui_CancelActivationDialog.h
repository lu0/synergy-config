/********************************************************************************
** Form generated from reading UI file 'CancelActivationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CANCELACTIVATIONDIALOG_H
#define UI_CANCELACTIVATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CancelActivationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CancelActivationDialog)
    {
        if (CancelActivationDialog->objectName().isEmpty())
            CancelActivationDialog->setObjectName(QString::fromUtf8("CancelActivationDialog"));
        CancelActivationDialog->resize(400, 165);
        verticalLayout = new QVBoxLayout(CancelActivationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CancelActivationDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);
        label->setOpenExternalLinks(true);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(CancelActivationDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setOpenExternalLinks(true);

        verticalLayout->addWidget(label_2);

        buttonBox = new QDialogButtonBox(CancelActivationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::No|QDialogButtonBox::Yes);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(CancelActivationDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CancelActivationDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CancelActivationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CancelActivationDialog);
    } // setupUi

    void retranslateUi(QDialog *CancelActivationDialog)
    {
        CancelActivationDialog->setWindowTitle(QApplication::translate("CancelActivationDialog", "Cancel Activation", nullptr));
        label->setText(QApplication::translate("CancelActivationDialog", "Are you sure?\n"
"\n"
"If you don't activate Synergy you'll be missing out on some great features.", nullptr));
        label_2->setText(QApplication::translate("CancelActivationDialog", "<html><head/><body><p><a href=\"https://symless.com/pricing?source=gui\"><span style=\" text-decoration: underline; color:#0000ff;\">Buy now</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CancelActivationDialog: public Ui_CancelActivationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CANCELACTIVATIONDIALOG_H
