if ! test -e Makefile
then
    if uname -a | grep Android
    then
        ./configure --prefix=$HOME #--with-come-debug

        make && make install
    else
        ./configure #--with-come-debug

        make && sudo make install
    fi
fi

if uname -a | grep Android
then
    make && make install
else
    make && sudo make install
fi
