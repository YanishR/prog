#This file is used to make the DisASM executable 
EXECS = DisASM
OBJS = *.o 

CC = g++ 
CCFLAGS = -Wall -Wno-deprecated -Werror=return-type -g 

all: $(EXECS)

DisASM: MachLangParser.o DisASM.cpp
	$(CC) $(CCFLAGS) DisASM.cpp MachLangParser.o 

MachLangParser.o: MachLangParser.h
	$(CC) $(CCFLAGS) -c MachLangParser.h	

clean: /bin/rm -f $(DisASM) $(OBJS) core
