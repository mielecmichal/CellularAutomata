#include "cellularautomaton1dfactoryview.h"

CellularAutomaton1DFactoryView::CellularAutomaton1DFactoryView(QWidget *parent) : QWidget(parent)
{
    automatonFactory = CellularAutomatonFactory::getInstance(CellularAutomatonType::Automaton1D);

    initializeMainLayout();
    initializeGridPanel();
    initializeBoundaryConditionsPanel();
    initializeRulePanel();
}

void CellularAutomaton1DFactoryView::initializeMainLayout()
{
    mainLayout = new QVBoxLayout(this);
    this->setLayout(mainLayout);
}

void CellularAutomaton1DFactoryView::initializeGridPanel()
{
    gridSizeFrame = new QFrame(this);
    gridSizeSpinBox = new QSpinBox(gridSizeFrame);

    gridSizeSpinBox->setValue(automatonFactory->getGridSizes()[0]);
    connect(gridSizeSpinBox, SIGNAL(valueChanged(int)), this, SLOT(sendNewGridSize(int)));

}

void CellularAutomaton1DFactoryView::sendNewGridSize(int value)
{
    Coordinates coordinates;
    coordinates[0] = value;

    automatonFactory->setGridSizes(coordinates);
    automatonFactory->setBoundaryConditionsType(Periodic);
    automatonFactory->setRuleType(RuleType1D);
}

