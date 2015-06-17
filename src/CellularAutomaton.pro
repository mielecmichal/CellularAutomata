#-------------------------------------------------
#
# Project created by QtCreator 2015-04-25T21:35:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CellularAutomaton
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
    Rules/rule1d.cpp \
    Grids/cell.cpp \
    cellularautomaton.cpp \
    Grids/grid1d.cpp \
    Iterators/grid1diterator.cpp \
    Iterators/neighborhood1diterator.cpp \
    BoundaryConditions/boundaryconditions1d.cpp \
    BoundaryConditions/periodicboundaryconditions1d.cpp \
    CellularAutomatonFactories/cellularautomatonfactory.cpp \
    CellularAutomatonFactories/cellularautomaton1dfactory.cpp \
    Widgets/mainwidget.cpp \
    Widgets/cellularautomaton1dfactoryview.cpp \
    CellularAutomatonFactories/factoryregister.cpp

HEADERS  += mainwindow.h \
    Rules/rule.h \
    Rules/rule1d.h \
    Grids/grid.h \
    Grids/cell.h \
    cellularautomaton.h \
    Grids/grid1d.h \
    Iterators/griditerator.h \
    Iterators/grid1diterator.h \
    Iterators/neighborhood1diterator.h \
    Iterators/neighborhooditerator.h \
    BoundaryConditions/boundaryconditions.h \
    BoundaryConditions/boundaryconditions1d.h \
    BoundaryConditions/periodicboundaryconditions1d.h \
    CellularAutomatonFactories/cellularautomatonfactory.h \
    CellularAutomatonFactories/cellularautomaton1dfactory.h \
    Widgets/mainwidget.h \
    Widgets/cellularautomaton1dfactoryview.h \
    CellularAutomatonFactories/factoryregister.h

FORMS    +=
