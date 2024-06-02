#!/bin/bash


git config --global user.email ab25cq@icloud.com
git config --global user.name ab25cq

if [ -e Makefile ]
then
    make distclean
fi

if [ -e vin/Makefile ]
then
    (cd vin; make distclean)
fi

(cd x; comelang2 clean)

if [ -e trueby/Makefile ]
then
    (cd trueby; make clean)
fi

if [ -e zed/Makefile ]
then
    (cd zed; make distclean)
fi

if [ -e mf/Makefile ]
then
    (cd mf; make distclean)
fi

if [ -e shsh/Makefile ]
then
    (cd shsh; make distclean)
fi

if [ ! -e Makefile ]
then
    git add .
    git commit 
#    git remote add origin https://gitlab.com/ab25cqx/comelang2
    git remote add origin https://github.com/ab25cq/comelang2
    git push -f -u origin master
fi

