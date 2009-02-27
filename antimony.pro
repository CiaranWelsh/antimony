######################################################################
# Automatically generated by qmake (2.01a) Wed Feb 25 19:03:53 2009
######################################################################

include(common.pri)


TEMPLATE = lib

TARGET = antimony
CONFIG -= qt
DEPENDPATH += . src
INCLUDEPATH += . src

# Input
#YACCSOURCES += src/antimony.ypp

HEADERS += src/antimony_api.h \
           src/dnastrand.h \
           src/event.h \
           src/formula.h \
           src/libutil.h \
           src/module.h \
           src/rd_type.h \
           src/reactantlist.h \
           src/reaction.h \
           src/registry.h \
           src/sbmlx.h \
           src/stringx.h \
           src/userfunction.h \
           src/variable.h
SOURCES += src/Antimony.cpp \
           src/antimony_api.cpp \
           src/antimony.tab.cpp \
           src/dnastrand.cpp \
           src/event.cpp \
           src/formula.cpp \
           src/module.cpp \
           src/rd_type.cpp \
           src/reactantlist.cpp \
           src/reaction.cpp \
           src/registry.cpp \
           src/sbmlx.cpp \
           src/stringx.cpp \
           src/userfunction.cpp \
           src/variable.cpp
		   
