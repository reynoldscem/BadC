CC 					  = gcc
DEFAULTCFLAGS = -std=c99
RM 					  = rm -f
BUILDDIR      = build
SOURCEDIR     = src

createBuildDir:
	mkdir -p $(BUILDDIR)

rev: createBuildDir
	$(CC) $(DEFAULTCFLAGS) -o $(BUILDDIR)/rev $(SOURCEDIR)/rev.c

LCM: createBuildDir
	$(CC) $(DEFAULTCFLAGS) -o $(BUILDDIR)/LCM $(SOURCEDIR)/LCM.c

mystery: createBuildDir
	$(CC) $(DEFAULTCFLAGS) -o $(BUILDDIR)/mystery $(SOURCEDIR)/mystery.c

badCalc: createBuildDir
	$(CC) $(DEFAULTCFLAGS) -o $(BUILDDIR)/badCalc $(SOURCEDIR)/badCalc.c

caesar: createBuildDir
	$(CC) $(DEFAULTCFLAGS) -o $(BUILDDIR)/caesar $(SOURCEDIR)/caesar.c

vigenere: createBuildDir
	$(CC) $(DEFAULTCFLAGS) -o $(BUILDDIR)/vigenere $(SOURCEDIR)/vigenere.c

sleepMacro: createBuildDir
	$(CC) -o $(BUILDDIR)/sleepMacro $(SOURCEDIR)/sleepMacro.c

all: createBuildDir rev LCM mystery badCalc caesar vigenere sleepMacro

clean:
	$(RM) $(BUILDDIR)/*

default: all
