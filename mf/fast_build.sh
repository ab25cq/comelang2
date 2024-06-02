if ! test -e Makefile
then
    if uname -a | grep Android
    then
        ./configure --prefix=$HOME

        make clean && make && make uninstall && make install
    else
        ./configure

        make clean && make && sudo make uninstall && sudo make install
    fi
fi

if uname -a | grep Android
then
    make && make install
else
    make && sudo make install
fi
