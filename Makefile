# Build Helper

all: build

tests: build gsl-tests.exe
	./gsl-tests.exe -not-tagged fatal

test-%: build gsl-tests.exe
	./gsl-tests.exe -tagged $(@:test-%=%) | awk -f test-filter.awk

build:
	stanza build

gsl-tests.exe: src/*.stanza tests/*.stanza
	stanza build gsl-tests

.phony: build