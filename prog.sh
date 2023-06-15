#!/bin/zsh

make all
./Main.out
Rscript csvToGraph.R
