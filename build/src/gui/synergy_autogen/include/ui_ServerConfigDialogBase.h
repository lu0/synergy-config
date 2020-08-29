/********************************************************************************
** Form generated from reading UI file 'ServerConfigDialogBase.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVERCONFIGDIALOGBASE_H
#define UI_SERVERCONFIGDIALOGBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "NewScreenWidget.h"
#include "ScreenSetupView.h"
#include "TrashScreenWidget.h"

QT_BEGIN_NAMESPACE

class Ui_ServerConfigDialogBase
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *m_pTabWidget;
    QWidget *m_pTabScreens;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    TrashScreenWidget *m_pTrashScreenWidget;
    QLabel *label_2;
    NewScreenWidget *m_pLabelNewScreenWidget;
    ScreenSetupView *m_pScreenSetupView;
    QLabel *label_3;
    QSpacerItem *spacerItem;
    QWidget *m_pTabHotkeys;
    QHBoxLayout *hboxLayout1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QListWidget *m_pListHotkeys;
    QPushButton *m_pButtonNewHotkey;
    QPushButton *m_pButtonEditHotkey;
    QPushButton *m_pButtonRemoveHotkey;
    QSpacerItem *spacerItem1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout1;
    QListWidget *m_pListActions;
    QPushButton *m_pButtonNewAction;
    QPushButton *m_pButtonEditAction;
    QPushButton *m_pButtonRemoveAction;
    QSpacerItem *spacerItem2;
    QWidget *m_pTabAdvanced;
    QGridLayout *gridLayout2;
    QGroupBox *m_pGroupSwitch;
    QVBoxLayout *vboxLayout2;
    QHBoxLayout *hboxLayout2;
    QCheckBox *m_pCheckBoxSwitchDelay;
    QSpacerItem *spacerItem3;
    QSpinBox *m_pSpinBoxSwitchDelay;
    QLabel *m_pLabel_14;
    QHBoxLayout *hboxLayout3;
    QCheckBox *m_pCheckBoxSwitchDoubleTap;
    QSpacerItem *spacerItem4;
    QSpinBox *m_pSpinBoxSwitchDoubleTap;
    QLabel *m_pLabel_15;
    QSpacerItem *spacerItem5;
    QGroupBox *m_pGroupOptions;
    QGridLayout *gridLayout3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *m_pCheckBoxEnableClipboard;
    QSpacerItem *horizontalSpacer;
    QSpinBox *m_pSpinBoxClipboardSizeLimit;
    QLabel *label_4;
    QCheckBox *m_pCheckBoxEnableDragAndDrop;
    QCheckBox *m_pCheckBoxWin32KeepForeground;
    QCheckBox *m_pCheckBoxRelativeMouseMoves;
    QSpacerItem *spacerItem6;
    QCheckBox *m_pCheckBoxIgnoreAutoConfigClient;
    QHBoxLayout *hboxLayout4;
    QCheckBox *m_pCheckBoxHeartbeat;
    QSpacerItem *spacerItem7;
    QSpinBox *m_pSpinBoxHeartbeat;
    QLabel *m_pLabel_16;
    QCheckBox *m_pCheckBoxScreenSaverSync;
    QCheckBox *m_pCheckBoxDisableLockToScreen;
    QGroupBox *m_pGroupSwitchCorners;
    QGridLayout *gridLayout4;
    QCheckBox *m_pCheckBoxCornerTopLeft;
    QCheckBox *m_pCheckBoxCornerTopRight;
    QCheckBox *m_pCheckBoxCornerBottomLeft;
    QCheckBox *m_pCheckBoxCornerBottomRight;
    QSpacerItem *spacerItem8;
    QHBoxLayout *hboxLayout5;
    QLabel *label;
    QSpinBox *m_pSpinBoxSwitchCornerSize;
    QSpacerItem *spacerItem9;
    QSpacerItem *spacerItem10;
    QDialogButtonBox *m_pButtonBox;

    void setupUi(QDialog *ServerConfigDialogBase)
    {
        if (ServerConfigDialogBase->objectName().isEmpty())
            ServerConfigDialogBase->setObjectName(QString::fromUtf8("ServerConfigDialogBase"));
        ServerConfigDialogBase->resize(795, 534);
        vboxLayout = new QVBoxLayout(ServerConfigDialogBase);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        m_pTabWidget = new QTabWidget(ServerConfigDialogBase);
        m_pTabWidget->setObjectName(QString::fromUtf8("m_pTabWidget"));
        m_pTabScreens = new QWidget();
        m_pTabScreens->setObjectName(QString::fromUtf8("m_pTabScreens"));
        vboxLayout1 = new QVBoxLayout(m_pTabScreens);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        m_pTrashScreenWidget = new TrashScreenWidget(m_pTabScreens);
        m_pTrashScreenWidget->setObjectName(QString::fromUtf8("m_pTrashScreenWidget"));
        m_pTrashScreenWidget->setAcceptDrops(true);
        m_pTrashScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pTrashScreenWidget->setFrameShadow(QFrame::Raised);
        m_pTrashScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/user-trash.png")));

        hboxLayout->addWidget(m_pTrashScreenWidget);

        label_2 = new QLabel(m_pTabScreens);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(true);

        hboxLayout->addWidget(label_2);

        m_pLabelNewScreenWidget = new NewScreenWidget(m_pTabScreens);
        m_pLabelNewScreenWidget->setObjectName(QString::fromUtf8("m_pLabelNewScreenWidget"));
        m_pLabelNewScreenWidget->setFrameShape(QFrame::StyledPanel);
        m_pLabelNewScreenWidget->setFrameShadow(QFrame::Raised);
        m_pLabelNewScreenWidget->setPixmap(QPixmap(QString::fromUtf8(":/res/icons/64x64/video-display.png")));

        hboxLayout->addWidget(m_pLabelNewScreenWidget);


        vboxLayout1->addLayout(hboxLayout);

        m_pScreenSetupView = new ScreenSetupView(m_pTabScreens);
        m_pScreenSetupView->setObjectName(QString::fromUtf8("m_pScreenSetupView"));
        m_pScreenSetupView->setMinimumSize(QSize(0, 273));
        m_pScreenSetupView->setMaximumSize(QSize(16777215, 273));
        m_pScreenSetupView->setAcceptDrops(true);
        m_pScreenSetupView->setAutoFillBackground(false);
        m_pScreenSetupView->setFrameShape(QFrame::StyledPanel);
        m_pScreenSetupView->setFrameShadow(QFrame::Sunken);

        vboxLayout1->addWidget(m_pScreenSetupView);

        label_3 = new QLabel(m_pTabScreens);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(true);

        vboxLayout1->addWidget(label_3);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);

        m_pTabWidget->addTab(m_pTabScreens, QString());
        m_pTabHotkeys = new QWidget();
        m_pTabHotkeys->setObjectName(QString::fromUtf8("m_pTabHotkeys"));
        hboxLayout1 = new QHBoxLayout(m_pTabHotkeys);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        groupBox = new QGroupBox(m_pTabHotkeys);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_pListHotkeys = new QListWidget(groupBox);
        m_pListHotkeys->setObjectName(QString::fromUtf8("m_pListHotkeys"));

        gridLayout->addWidget(m_pListHotkeys, 0, 0, 4, 1);

        m_pButtonNewHotkey = new QPushButton(groupBox);
        m_pButtonNewHotkey->setObjectName(QString::fromUtf8("m_pButtonNewHotkey"));
        m_pButtonNewHotkey->setEnabled(true);

        gridLayout->addWidget(m_pButtonNewHotkey, 0, 1, 1, 1);

        m_pButtonEditHotkey = new QPushButton(groupBox);
        m_pButtonEditHotkey->setObjectName(QString::fromUtf8("m_pButtonEditHotkey"));
        m_pButtonEditHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonEditHotkey, 1, 1, 1, 1);

        m_pButtonRemoveHotkey = new QPushButton(groupBox);
        m_pButtonRemoveHotkey->setObjectName(QString::fromUtf8("m_pButtonRemoveHotkey"));
        m_pButtonRemoveHotkey->setEnabled(false);

        gridLayout->addWidget(m_pButtonRemoveHotkey, 2, 1, 1, 1);

        spacerItem1 = new QSpacerItem(75, 161, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox);

        groupBox_2 = new QGroupBox(m_pTabHotkeys);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout1 = new QGridLayout(groupBox_2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        m_pListActions = new QListWidget(groupBox_2);
        m_pListActions->setObjectName(QString::fromUtf8("m_pListActions"));

        gridLayout1->addWidget(m_pListActions, 0, 0, 4, 1);

        m_pButtonNewAction = new QPushButton(groupBox_2);
        m_pButtonNewAction->setObjectName(QString::fromUtf8("m_pButtonNewAction"));
        m_pButtonNewAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonNewAction, 0, 1, 1, 1);

        m_pButtonEditAction = new QPushButton(groupBox_2);
        m_pButtonEditAction->setObjectName(QString::fromUtf8("m_pButtonEditAction"));
        m_pButtonEditAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonEditAction, 1, 1, 1, 1);

        m_pButtonRemoveAction = new QPushButton(groupBox_2);
        m_pButtonRemoveAction->setObjectName(QString::fromUtf8("m_pButtonRemoveAction"));
        m_pButtonRemoveAction->setEnabled(false);

        gridLayout1->addWidget(m_pButtonRemoveAction, 2, 1, 1, 1);

        spacerItem2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem2, 3, 1, 1, 1);


        hboxLayout1->addWidget(groupBox_2);

        m_pTabWidget->addTab(m_pTabHotkeys, QString());
        m_pTabAdvanced = new QWidget();
        m_pTabAdvanced->setObjectName(QString::fromUtf8("m_pTabAdvanced"));
        gridLayout2 = new QGridLayout(m_pTabAdvanced);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        m_pGroupSwitch = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitch->setObjectName(QString::fromUtf8("m_pGroupSwitch"));
        vboxLayout2 = new QVBoxLayout(m_pGroupSwitch);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        m_pCheckBoxSwitchDelay = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDelay->setObjectName(QString::fromUtf8("m_pCheckBoxSwitchDelay"));
        m_pCheckBoxSwitchDelay->setEnabled(true);

        hboxLayout2->addWidget(m_pCheckBoxSwitchDelay);

        spacerItem3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout2->addItem(spacerItem3);

        m_pSpinBoxSwitchDelay = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDelay->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchDelay"));
        m_pSpinBoxSwitchDelay->setEnabled(false);
        m_pSpinBoxSwitchDelay->setMinimum(10);
        m_pSpinBoxSwitchDelay->setMaximum(10000);
        m_pSpinBoxSwitchDelay->setSingleStep(10);
        m_pSpinBoxSwitchDelay->setValue(250);

        hboxLayout2->addWidget(m_pSpinBoxSwitchDelay);

        m_pLabel_14 = new QLabel(m_pGroupSwitch);
        m_pLabel_14->setObjectName(QString::fromUtf8("m_pLabel_14"));

        hboxLayout2->addWidget(m_pLabel_14);


        vboxLayout2->addLayout(hboxLayout2);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        m_pCheckBoxSwitchDoubleTap = new QCheckBox(m_pGroupSwitch);
        m_pCheckBoxSwitchDoubleTap->setObjectName(QString::fromUtf8("m_pCheckBoxSwitchDoubleTap"));
        m_pCheckBoxSwitchDoubleTap->setEnabled(true);

        hboxLayout3->addWidget(m_pCheckBoxSwitchDoubleTap);

        spacerItem4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout3->addItem(spacerItem4);

        m_pSpinBoxSwitchDoubleTap = new QSpinBox(m_pGroupSwitch);
        m_pSpinBoxSwitchDoubleTap->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchDoubleTap"));
        m_pSpinBoxSwitchDoubleTap->setEnabled(false);
        m_pSpinBoxSwitchDoubleTap->setMinimum(10);
        m_pSpinBoxSwitchDoubleTap->setMaximum(10000);
        m_pSpinBoxSwitchDoubleTap->setSingleStep(10);
        m_pSpinBoxSwitchDoubleTap->setValue(250);

        hboxLayout3->addWidget(m_pSpinBoxSwitchDoubleTap);

        m_pLabel_15 = new QLabel(m_pGroupSwitch);
        m_pLabel_15->setObjectName(QString::fromUtf8("m_pLabel_15"));

        hboxLayout3->addWidget(m_pLabel_15);


        vboxLayout2->addLayout(hboxLayout3);

        spacerItem5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout2->addItem(spacerItem5);


        gridLayout2->addWidget(m_pGroupSwitch, 0, 0, 1, 1);

        m_pGroupOptions = new QGroupBox(m_pTabAdvanced);
        m_pGroupOptions->setObjectName(QString::fromUtf8("m_pGroupOptions"));
        gridLayout3 = new QGridLayout(m_pGroupOptions);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_pCheckBoxEnableClipboard = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxEnableClipboard->setObjectName(QString::fromUtf8("m_pCheckBoxEnableClipboard"));
        m_pCheckBoxEnableClipboard->setChecked(true);

        horizontalLayout->addWidget(m_pCheckBoxEnableClipboard);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        m_pSpinBoxClipboardSizeLimit = new QSpinBox(m_pGroupOptions);
        m_pSpinBoxClipboardSizeLimit->setObjectName(QString::fromUtf8("m_pSpinBoxClipboardSizeLimit"));
        m_pSpinBoxClipboardSizeLimit->setEnabled(false);
        m_pSpinBoxClipboardSizeLimit->setMaximum(50);
        m_pSpinBoxClipboardSizeLimit->setValue(3);

        horizontalLayout->addWidget(m_pSpinBoxClipboardSizeLimit);

        label_4 = new QLabel(m_pGroupOptions);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);


        gridLayout3->addLayout(horizontalLayout, 8, 0, 1, 1);

        m_pCheckBoxEnableDragAndDrop = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxEnableDragAndDrop->setObjectName(QString::fromUtf8("m_pCheckBoxEnableDragAndDrop"));

        gridLayout3->addWidget(m_pCheckBoxEnableDragAndDrop, 5, 0, 1, 1);

        m_pCheckBoxWin32KeepForeground = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxWin32KeepForeground->setObjectName(QString::fromUtf8("m_pCheckBoxWin32KeepForeground"));
        m_pCheckBoxWin32KeepForeground->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxWin32KeepForeground, 3, 0, 1, 1);

        m_pCheckBoxRelativeMouseMoves = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxRelativeMouseMoves->setObjectName(QString::fromUtf8("m_pCheckBoxRelativeMouseMoves"));
        m_pCheckBoxRelativeMouseMoves->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxRelativeMouseMoves, 1, 0, 1, 1);

        spacerItem6 = new QSpacerItem(20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout3->addItem(spacerItem6, 12, 0, 1, 1);

        m_pCheckBoxIgnoreAutoConfigClient = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxIgnoreAutoConfigClient->setObjectName(QString::fromUtf8("m_pCheckBoxIgnoreAutoConfigClient"));

        gridLayout3->addWidget(m_pCheckBoxIgnoreAutoConfigClient, 4, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        m_pCheckBoxHeartbeat = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxHeartbeat->setObjectName(QString::fromUtf8("m_pCheckBoxHeartbeat"));
        m_pCheckBoxHeartbeat->setEnabled(true);

        hboxLayout4->addWidget(m_pCheckBoxHeartbeat);

        spacerItem7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem7);

        m_pSpinBoxHeartbeat = new QSpinBox(m_pGroupOptions);
        m_pSpinBoxHeartbeat->setObjectName(QString::fromUtf8("m_pSpinBoxHeartbeat"));
        m_pSpinBoxHeartbeat->setEnabled(false);
        m_pSpinBoxHeartbeat->setMinimum(1000);
        m_pSpinBoxHeartbeat->setMaximum(30000);
        m_pSpinBoxHeartbeat->setSingleStep(1000);
        m_pSpinBoxHeartbeat->setValue(5000);

        hboxLayout4->addWidget(m_pSpinBoxHeartbeat);

        m_pLabel_16 = new QLabel(m_pGroupOptions);
        m_pLabel_16->setObjectName(QString::fromUtf8("m_pLabel_16"));

        hboxLayout4->addWidget(m_pLabel_16);


        gridLayout3->addLayout(hboxLayout4, 0, 0, 1, 1);

        m_pCheckBoxScreenSaverSync = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxScreenSaverSync->setObjectName(QString::fromUtf8("m_pCheckBoxScreenSaverSync"));
        m_pCheckBoxScreenSaverSync->setEnabled(true);

        gridLayout3->addWidget(m_pCheckBoxScreenSaverSync, 2, 0, 1, 1);

        m_pCheckBoxDisableLockToScreen = new QCheckBox(m_pGroupOptions);
        m_pCheckBoxDisableLockToScreen->setObjectName(QString::fromUtf8("m_pCheckBoxDisableLockToScreen"));

        gridLayout3->addWidget(m_pCheckBoxDisableLockToScreen, 6, 0, 1, 1);


        gridLayout2->addWidget(m_pGroupOptions, 0, 1, 1, 1);

        m_pGroupSwitchCorners = new QGroupBox(m_pTabAdvanced);
        m_pGroupSwitchCorners->setObjectName(QString::fromUtf8("m_pGroupSwitchCorners"));
        m_pGroupSwitchCorners->setChecked(false);
        gridLayout4 = new QGridLayout(m_pGroupSwitchCorners);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        m_pCheckBoxCornerTopLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopLeft->setObjectName(QString::fromUtf8("m_pCheckBoxCornerTopLeft"));

        gridLayout4->addWidget(m_pCheckBoxCornerTopLeft, 0, 0, 1, 2);

        m_pCheckBoxCornerTopRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerTopRight->setObjectName(QString::fromUtf8("m_pCheckBoxCornerTopRight"));

        gridLayout4->addWidget(m_pCheckBoxCornerTopRight, 0, 2, 1, 2);

        m_pCheckBoxCornerBottomLeft = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomLeft->setObjectName(QString::fromUtf8("m_pCheckBoxCornerBottomLeft"));

        gridLayout4->addWidget(m_pCheckBoxCornerBottomLeft, 1, 0, 1, 2);

        m_pCheckBoxCornerBottomRight = new QCheckBox(m_pGroupSwitchCorners);
        m_pCheckBoxCornerBottomRight->setObjectName(QString::fromUtf8("m_pCheckBoxCornerBottomRight"));

        gridLayout4->addWidget(m_pCheckBoxCornerBottomRight, 1, 2, 1, 2);

        spacerItem8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem8, 2, 0, 1, 1);

        hboxLayout5 = new QHBoxLayout();
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        label = new QLabel(m_pGroupSwitchCorners);
        label->setObjectName(QString::fromUtf8("label"));

        hboxLayout5->addWidget(label);

        m_pSpinBoxSwitchCornerSize = new QSpinBox(m_pGroupSwitchCorners);
        m_pSpinBoxSwitchCornerSize->setObjectName(QString::fromUtf8("m_pSpinBoxSwitchCornerSize"));

        hboxLayout5->addWidget(m_pSpinBoxSwitchCornerSize);


        gridLayout4->addLayout(hboxLayout5, 2, 1, 1, 2);

        spacerItem9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout4->addItem(spacerItem9, 2, 3, 1, 1);


        gridLayout2->addWidget(m_pGroupSwitchCorners, 1, 0, 1, 2);

        spacerItem10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout2->addItem(spacerItem10, 2, 0, 1, 1);

        m_pTabWidget->addTab(m_pTabAdvanced, QString());

        vboxLayout->addWidget(m_pTabWidget);

        m_pButtonBox = new QDialogButtonBox(ServerConfigDialogBase);
        m_pButtonBox->setObjectName(QString::fromUtf8("m_pButtonBox"));
        m_pButtonBox->setOrientation(Qt::Horizontal);
        m_pButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(m_pButtonBox);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(m_pSpinBoxSwitchCornerSize);
#endif // QT_NO_SHORTCUT

        retranslateUi(ServerConfigDialogBase);
        QObject::connect(m_pButtonBox, SIGNAL(accepted()), ServerConfigDialogBase, SLOT(accept()));
        QObject::connect(m_pButtonBox, SIGNAL(rejected()), ServerConfigDialogBase, SLOT(reject()));
        QObject::connect(m_pCheckBoxSwitchDelay, SIGNAL(toggled(bool)), m_pSpinBoxSwitchDelay, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckBoxSwitchDoubleTap, SIGNAL(toggled(bool)), m_pSpinBoxSwitchDoubleTap, SLOT(setEnabled(bool)));
        QObject::connect(m_pCheckBoxHeartbeat, SIGNAL(toggled(bool)), m_pSpinBoxHeartbeat, SLOT(setEnabled(bool)));
        QObject::connect(m_pListHotkeys, SIGNAL(itemDoubleClicked(QListWidgetItem*)), m_pButtonEditHotkey, SLOT(click()));
        QObject::connect(m_pListActions, SIGNAL(itemDoubleClicked(QListWidgetItem*)), m_pButtonEditAction, SLOT(click()));

        m_pTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ServerConfigDialogBase);
    } // setupUi

    void retranslateUi(QDialog *ServerConfigDialogBase)
    {
        ServerConfigDialogBase->setWindowTitle(QApplication::translate("ServerConfigDialogBase", "Server Configuration", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pTrashScreenWidget->setToolTip(QApplication::translate("ServerConfigDialogBase", "Drag a screen from the grid to the trashcan to remove it.", nullptr));
#endif // QT_NO_TOOLTIP
        m_pTrashScreenWidget->setText(QString());
        label_2->setText(QApplication::translate("ServerConfigDialogBase", "Configure the layout of your synergy server configuration.", nullptr));
#ifndef QT_NO_TOOLTIP
        m_pLabelNewScreenWidget->setToolTip(QApplication::translate("ServerConfigDialogBase", "Drag this button to the grid to add a new screen.", nullptr));
#endif // QT_NO_TOOLTIP
        m_pLabelNewScreenWidget->setText(QString());
        label_3->setText(QApplication::translate("ServerConfigDialogBase", "Drag new screens to the grid or move existing ones around.\n"
"Drag a screen to the trashcan to delete it.\n"
"Double click on a screen to edit its settings.", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabScreens), QApplication::translate("ServerConfigDialogBase", "Screens and links", nullptr));
        groupBox->setTitle(QApplication::translate("ServerConfigDialogBase", "&Hotkeys", nullptr));
        m_pButtonNewHotkey->setText(QApplication::translate("ServerConfigDialogBase", "&New", nullptr));
        m_pButtonEditHotkey->setText(QApplication::translate("ServerConfigDialogBase", "&Edit", nullptr));
        m_pButtonRemoveHotkey->setText(QApplication::translate("ServerConfigDialogBase", "&Remove", nullptr));
        groupBox_2->setTitle(QApplication::translate("ServerConfigDialogBase", "A&ctions", nullptr));
        m_pButtonNewAction->setText(QApplication::translate("ServerConfigDialogBase", "Ne&w", nullptr));
        m_pButtonEditAction->setText(QApplication::translate("ServerConfigDialogBase", "E&dit", nullptr));
        m_pButtonRemoveAction->setText(QApplication::translate("ServerConfigDialogBase", "Re&move", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabHotkeys), QApplication::translate("ServerConfigDialogBase", "Hotkeys", nullptr));
        m_pGroupSwitch->setTitle(QApplication::translate("ServerConfigDialogBase", "&Switch", nullptr));
        m_pCheckBoxSwitchDelay->setText(QApplication::translate("ServerConfigDialogBase", "Switch &after waiting", nullptr));
        m_pLabel_14->setText(QApplication::translate("ServerConfigDialogBase", "ms", nullptr));
        m_pCheckBoxSwitchDoubleTap->setText(QApplication::translate("ServerConfigDialogBase", "Switch on double &tap within", nullptr));
        m_pLabel_15->setText(QApplication::translate("ServerConfigDialogBase", "ms", nullptr));
        m_pGroupOptions->setTitle(QApplication::translate("ServerConfigDialogBase", "&Options", nullptr));
        m_pCheckBoxEnableClipboard->setText(QApplication::translate("ServerConfigDialogBase", "Enable clipboard sharing", nullptr));
        label_4->setText(QApplication::translate("ServerConfigDialogBase", "MB", nullptr));
        m_pCheckBoxEnableDragAndDrop->setText(QApplication::translate("ServerConfigDialogBase", "Enable drag and drop file transfers", nullptr));
        m_pCheckBoxWin32KeepForeground->setText(QApplication::translate("ServerConfigDialogBase", "Don't take &foreground window on Windows servers", nullptr));
        m_pCheckBoxRelativeMouseMoves->setText(QApplication::translate("ServerConfigDialogBase", "Use &relative mouse moves", nullptr));
        m_pCheckBoxIgnoreAutoConfigClient->setText(QApplication::translate("ServerConfigDialogBase", "Ignore auto config clients", nullptr));
        m_pCheckBoxHeartbeat->setText(QApplication::translate("ServerConfigDialogBase", "&Check clients every", nullptr));
        m_pLabel_16->setText(QApplication::translate("ServerConfigDialogBase", "ms", nullptr));
        m_pCheckBoxScreenSaverSync->setText(QApplication::translate("ServerConfigDialogBase", "S&ynchronize screen savers", nullptr));
        m_pCheckBoxDisableLockToScreen->setText(QApplication::translate("ServerConfigDialogBase", "Disable lock to screen", nullptr));
        m_pGroupSwitchCorners->setTitle(QApplication::translate("ServerConfigDialogBase", "&Dead corners", nullptr));
        m_pCheckBoxCornerTopLeft->setText(QApplication::translate("ServerConfigDialogBase", "To&p-left", nullptr));
        m_pCheckBoxCornerTopRight->setText(QApplication::translate("ServerConfigDialogBase", "Top-rig&ht", nullptr));
        m_pCheckBoxCornerBottomLeft->setText(QApplication::translate("ServerConfigDialogBase", "&Bottom-left", nullptr));
        m_pCheckBoxCornerBottomRight->setText(QApplication::translate("ServerConfigDialogBase", "Bottom-ri&ght", nullptr));
        label->setText(QApplication::translate("ServerConfigDialogBase", "Cor&ner Size:", nullptr));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(m_pTabAdvanced), QApplication::translate("ServerConfigDialogBase", "Advanced server settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ServerConfigDialogBase: public Ui_ServerConfigDialogBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVERCONFIGDIALOGBASE_H
