/********************************************************************************
** Form generated from reading UI file 'HotkeyDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOTKEYDIALOGBASE_H
#define UI_HOTKEYDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include "KeySequenceWidget.h"

QT_BEGIN_NAMESPACE

class Ui_HotkeyDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    KeySequenceWidget *m_pKeySequenceWidgetHotkey;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HotkeyDialogBase)
    {
        if (HotkeyDialogBase->objectName().isEmpty())
            HotkeyDialogBase->setObjectName(QString::fromUtf8("HotkeyDialogBase"));
        HotkeyDialogBase->resize(344, 86);
        vboxLayout = new QVBoxLayout(HotkeyDialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(HotkeyDialogBase);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        m_pKeySequenceWidgetHotkey = new KeySequenceWidget(HotkeyDialogBase);
        m_pKeySequenceWidgetHotkey->setObjectName(QString::fromUtf8("m_pKeySequenceWidgetHotkey"));

        vboxLayout->addWidget(m_pKeySequenceWidgetHotkey);

        buttonBox = new QDialogButtonBox(HotkeyDialogBase);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(HotkeyDialogBase);
        QObject::connect(buttonBox, SIGNAL(accepted()), HotkeyDialogBase, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HotkeyDialogBase, SLOT(reject()));

        QMetaObject::connectSlotsByName(HotkeyDialogBase);
    } // setupUi

    void retranslateUi(QDialog *HotkeyDialogBase)
    {
        HotkeyDialogBase->setWindowTitle(QApplication::translate("HotkeyDialogBase", "Hotkey", nullptr));
        label->setText(QApplication::translate("HotkeyDialogBase", "Enter the specification for the hotkey:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HotkeyDialogBase: public Ui_HotkeyDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOTKEYDIALOGBASE_H
