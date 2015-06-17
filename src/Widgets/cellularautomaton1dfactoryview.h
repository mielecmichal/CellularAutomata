#ifndef CELLULARAUTOMATON1DFACTORYVIEW_H
#define CELLULARAUTOMATON1DFACTORYVIEW_H

#include <QWidget>
#include <QFrame>
#include <QSpinBox>
#include <QCheckBox>
#include <QVBoxLayout>

#include "CellularAutomatonFactories/cellularautomatonfactory.h"

class CellularAutomaton1DFactoryView : public QWidget
{
    Q_OBJECT
public:
    explicit CellularAutomaton1DFactoryView(QWidget *parent = 0);

private slots:
   void sendNewGridSize(int value);
   void sendNewBoundaryConditionsType();
   void sendNewRuleType();

private:
    void initializeMainLayout();
    void initializeGridPanel();
    void initializeBoundaryConditionsPanel();
    void initializeRulePanel();

    CellularAutomatonFactory* automatonFactory;

    QVBoxLayout* mainLayout;

    QFrame* gridSizeFrame;
    QSpinBox* gridSizeSpinBox;

    QFrame* boundaryConditionsFrame;
    QCheckBox* periodicCheckBox;

    QFrame* ruleFrame;
    QCheckBox* ruleCheckBox;
};

#endif // CELLULARAUTOMATON1DFACTORYVIEW_H
